#include<iostream>
using namespace std;
char stack[100];
int top=-1;
int priority(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return 0;
    }
}
void push(char c){
    top++;
    stack[top]=c;
}
char pop(){
    return stack[top--];
}
int main(){
    string exp;
    cin>>exp;
    int i=0;
    while(exp[i]!='\0')
    {
        if(isalnum(exp[i])){
            cout<<exp[i];
        }
        else if(exp[i]=='('){
            cout<<exp[i];
        }
        else if (priority(stack[top])>=priority(exp[i])){
            while(priority(stack[top])>=priority(exp[i])){
                cout<<pop();
            }
            
        }
        else if(exp[i]==')'){
            while(stack[top]!='('){
                cout<<pop();
            }
            pop();
        }
        else{
            push(exp[i]);
        } 
        i++;
    }
}