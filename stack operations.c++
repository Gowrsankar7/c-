#include<iostream>
using namespace std;


class Stack {
   public:
   int n;
   int *arr;
   int top=-1;

   void input()
    {
    cout<<"enter n"<<endl;
    cin>>n;
    arr=new int[n];    }
    


void push(int x)
{
    if(top==n-1)
    cout<<"stack over flow"<<endl;
    
    else
    {
        top++;
        arr[top]=x;
        cout<<x<<"is pushed"<<endl;
    }
}

void pop() {
    if (top == -1) {
        cout << "Underflow" << endl;
    } else {
        cout << arr[top--] << " is popped" << endl;
    }
}


void display()
{   
    
    if(top==-1)
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
      cout<<"stack is:"<<endl;
        for(int i=top;i>=0;i--)
      {
        cout<<arr[i]<<endl;
      }}
}};
int main()
{
    Stack s;
    s.input();
    s.push(7);
    s.push(5);
    s.push(2);
    s.push(3);
    s.display();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.display();
    return 0;
    
}


OUTPUT:
enter n
3
7is pushed
5is pushed
2is pushed
stack over flow
stack is:
2
5
7
2 is popped
5 is popped
7 is popped
Underflow
stack is empty


=== Code Execution Successful ===
