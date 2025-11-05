#include <bits/stdc++.h>
using namespace std;
class Stack{
    private :
        int top , arr[100];
    public :
        Stack(){
            top = -1;
        }
        bool isEmpty(){
            return (top == -1);
        }
        bool isFull(){
            return (top == 99);
        }
        void push(int x){
            if(isFull()){
                cout << "Stack Overflow" << endl;
            }
            else{
                arr[++top] = x;
            }
        }
        void pop(){
            if(isEmpty()){
                cout << "Stack Underflow" << endl;
            }
            else{
                cout << arr[top] << " is popped" << endl;
                top--;
            }
        }
        void peek(){
            if(isEmpty()) cout << "-1" << endl;
            else  cout << arr[top] << endl;
        }
    void display(){
        if(isEmpty()){
            cout << "Stack is empty" << endl;
        }
        else{
            for(int i = top;i >= 0;i--){
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }


};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(15);
    s.push(896);
    s.push(78);
    s.peek();
    s.display();
    s.pop();
    s.display();
}