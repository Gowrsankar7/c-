#include <iostream>
using namespace std;

int main()
{
    int a, *ptr;

    a = 100;
    ptr = &a;

    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "ptra = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;

    return 0;
}

output:
a = 100
&a = 0x6ffe04
ptr = 0x6ffe04
*ptr = 100

