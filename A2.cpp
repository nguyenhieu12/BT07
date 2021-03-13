#include <iostream>

using namespace std;

void f(int a[])
{
    cout << sizeof(a);
}

int main()
{
    int a[10];
    cout << sizeof(a) << " ";
    f(a);
    return 0;
}
