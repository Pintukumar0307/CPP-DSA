#include <iostream>
using namespace std;
void fun(int *p)
{
    p = p + 1;
    *p = *p + 1;
}
void fun1(int *p)
{
    
    *p = *p + 1;
}

int main()
{
    int a = 5;
    int *p = &a;
    cout << "before :" << p << endl;
    cout << "before :" << *p << endl;

    fun(p);
    cout << "after :" << p << endl;
    cout << "after :" << *p << endl;

    // fun1(p);
    // cout << "after1 :" << p << endl;
    // cout << "after1 :" << *p << endl;

    return 0;
}