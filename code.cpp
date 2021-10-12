#include <iostream>

using namespace std;
int stack[10];
int maxsize=10,top=-1;
void push(int n);
void pop();
void print();
void revers();
int main()
{
    int x=1;
    while(x!=0)
    {
        cout<<"choose one"<<endl;
        cout<<"1 for push\n2 for pop\n3 for print\n4 for revers \n5 for exit"<<endl;
        cin>>x;
        if(x==1)
        {
           cout<<"Enter value"<<endl;
           int a;
           cin>>a;
           push(a);
        }
        else if(x==2)
        {
            pop();
        }
        else if(x==3)
        {
            print();
        }
        else if(x==4)
        {
            revers();
        } else if(x==5)
        {
            exit(1);
        }
        else
        {
            cout<<"Enter correct input"<<endl;
        }
    }

    return 0;
}
void push(int n)
{
    if(top>=maxsize-1)
    {
        cout<<"Stack overflow"<<endl;
    }
    else{
        top++;
        stack[top]=n;

    }
}
void pop()
{
    if(top<=-1)
    {
        cout<<"stack underflow"<<endl;
    }
    else
    {
        cout<<"pop successfully"<<endl;
        top--;
    }
}
void print()
{
    if(top>=0)
    {

    for(int i=top;i>=0;i--)
    {
        cout<<stack[i]<<endl;
    }
    }
    else
        cout<<"Stack is empty"<<endl;
}
void revers()
{
    if(top>=0)
    {
        for(int i=0;i<=top;i++)
        {
             cout<<stack[i]<<endl;
        }
    }
}
