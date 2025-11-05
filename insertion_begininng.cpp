#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}
*head=NULL;
void createlinkedlist()
{
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("\nEnter the data in node:");
	scanf("%d",&temp->data);
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
	 ptr=head;
	while(temp->next!=NULL)
	{
		ptr=ptr->next;
		}	
		ptr->next=temp;
	}	
}
void display()
{
	struct node *ptr;
	ptr=head;
	if(ptr==NULL)
	{
		printf("\n linked list is empty");
	}
	else
	{
		while(ptr!=NULL)
		{
			printf("%d->",ptr->data);
			ptr=ptr->next;
		}
		printf("NULL");
	}
}
void first_insert()
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("\n Enter the data in first node:");
	scanf("%d",&temp->data);
	temp->next=head;
	head=temp;
	printf("\n Insert at first is successfu!!");
}
int main()
{
	int ch;
	while(1)
	{
	printf("\n1.createlinkedlist \n2.display \n3.first_insert \n4.exit \nenter your choise");
	scanf("%d",&ch);
	if(ch==1)
	createlinkedlist();
	else if(ch==2)
	display();
	else if(ch==3)
	first_insert();
	else if(ch==4)
	break;	
	else
	printf("Wrong choice.");
	}
}