#include<iostream>
using namespace std;

void pass_by_reference(int &a)
{
    cout << "Value of a = " << a << endl;
    a = 20;
    cout << "Value of a = " << a << endl;
}

int main()
{
    int a = 10;
    cout << "In main value of a is = " << a << endl;
    pass_by_reference(a);
    cout << "After calling value of a = " << a << endl;
    return 0;
}


output:
In main value of a is = 10
Value of a = 10
Value of a = 20
After calling value of a = 20
