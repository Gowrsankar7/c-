#include <iostream>
using namespace std;

int sum(int i, int j = 10, int k = 15, int l = 20);

int main()
{
    int a = 2;
    int b = 3;
    int c = 4;
    int d = 5;

    cout << "sum1 = " << sum(a, b, c, d) << endl;
    cout << "sum2 = " << sum(a, b, c) << endl;
    cout << "sum3 = " << sum(a, b) << endl;
    cout << "sum4 = " << sum(a) << endl;
    cout << "sum5 = " << sum(b, c, d) << endl;

    return 0;
}

int sum(int i, int j, int k, int l)
{
    return (i + j + k + l);
}

output:
sum1 = 14

sum2 = 29

sum3 =  40

sum4  = 47

sum5 = 32
