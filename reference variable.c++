#include <iostream>
using namespace std;

int main()
{
    int a = 20;
    int &qty = a;

    cout << "a = " << a << " &a = " << &a << endl;
    cout << "qty = " << qty << " &qty = " << &qty << endl;

    a = a + 2;
    cout << "a = " << a << endl;
    cout << "qty = " << qty << endl;

    qty = qty * 2;
    cout << "a = " << a << endl;
    cout << "qty = " << qty << endl;

    return 0;
}

a = 20 &a = 0x61fefc
qty = 20 &qty = 0x61fefc
a = 22
qty = 22
a = 44
qty = 44
