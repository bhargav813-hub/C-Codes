#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node *root = NULL;

struct node *create() {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &temp->data);
    temp->left = temp->right = NULL;
    return temp;
}

void insert() {
    struct node *temp = create();
    if (root == NULL) {
        root = temp;
		return;
    }
    struct node *curr = root, *prev = NULL;
    while (curr != NULL) {
        prev = curr;
        if (temp->data < curr->data)
            curr = curr->left;
        else
            curr = curr->right;
    }
    if (temp->data < prev->data)
        prev->left = temp;
    else
        prev->right = temp;
}

struct node *findpredecessor(struct node *t) {
    struct node *p = t, *ptr = NULL;
    while (p->right != NULL) {
        ptr = p;
        p = p->right;
    }
    if (ptr != NULL && p->left != NULL) {
        ptr->right = p->left;
    } else if (ptr != NULL) {
        ptr->right = NULL;
    }
    return p;
}

void delete() {
    if (root == NULL) {
        printf("Tree is empty\n");
        return;
    }
    int data;
    printf("Enter data to delete: ");
    scanf("%d", &data);

    struct node *curr = root, *prev = NULL;

    // Find node to delete
    while (curr != NULL && curr->data != data) {
        prev = curr;
        if (data < curr->data)
            curr = curr->left;
        else
            curr = curr->right;
    }

    if (curr == NULL) {
        printf("Value %d not found in tree\n", data);
        return;
    }

    // Case 1: No children
    if (curr->left == NULL && curr->right == NULL) {
        if (curr == root) {
            root = NULL;
        } else if (prev->left == curr) {
            prev->left = NULL;
        } else {
            prev->right = NULL;
        }
        free(curr);
        printf("%d is removed\n", data);
        return;
    }

    // Case 2: One child
    if (curr->left == NULL || curr->right == NULL) {
        struct node *child = (curr->left != NULL) ? curr->left : curr->right;
        if (curr == root) {
            root = child;
        } else if (prev->left == curr) {
            prev->left = child;
        } else {
            prev->right = child;
        }
        free(curr);
        printf("%d is removed\n", data);
        return;
    }

    // Case 3: Two children
    struct node *pred = findpredecessor(curr->left);
    int predData = pred->data;
    delete(predData);
    curr->data = predData;
}

void inorder(struct node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Insert\n2. Delete\n3. Inorder Traversal\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                inorder(root);
                printf("\n");
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
