#include <iostream>
#include <stack>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head = nullptr;
void push(){
int x;
cin>>x;
Node* temp=new Node();
temp->data = x;
temp->next=head;
head=temp;
}
int pop()
{
    if(head==NULL){
        cout<<"underflow"<<endl;
        return -1;
    }
    else{
        int x=head->data;
        Node*temp=head;
        head=head->next;
        delete temp;
        return x;
    }
}
void display(){
    if(head==NULL){
        cout<<"stack is empty"<<endl;
    }
    else{
        Node *temp=head;
        while(temp!=NULL){

            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}
int main(){
    push();
    display();
    return 0;
}