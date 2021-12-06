#include<bits/stdc++.h>
using namespace std;
int top=-1,arr[100], ch;
void push(int n)
{
    if(top==n-1)
    {
        cout<<"Stack overflow"<<endl;
    }
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        cout<<x<<" pushed into the stack"<<endl;
        top++;
        arr[top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"Stack underflow"<<endl;
    }
    else{
        cout<<arr[top]<<" is popped from stack"<<endl;
        top--;
    }
}
void Top()
{
    if(top==-1)
    {
        cout<<"No elements are present"<<endl;
    }
    else{
        cout<<arr[top]<<" is at top position"<<endl;
    }
}
void Empty()
{
    if(top==-1)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<"stack is not empty"<<endl;
    }
}
void display()
{
    if(top==-1)
    {
        cout<<"No elements are present"<<endl;
    }
    else{
            cout<<"Elements present in stack are: "<<endl;
        for(int i=top;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
    cout<<endl;
    }
}
int main()
{
    cout<<"How many no in stack: ";
    int n;
    cin>>n;
    cout<<"look at choices: "<<endl;
    cout<<"1. push  2. pop  3.top  4.empty  5.display"<<endl;

  do
    {
        cout<<"Enter your choice: ";

         cin>>ch;
        switch(ch)
    {
    case 1:
        {
            push(n);
            break;
        }
    case 2:
        {
             pop();
             break;
        }
    case 3:
        {
            Top();
            break;
        }
    case 4:
        {
            Empty();
            break;
        }
    case 5:
        {
            display();
            break;
        }
    default:
        {
            cout<<"Enter correct choice"<<endl;
        }
    }
    }while(ch<6);


}
