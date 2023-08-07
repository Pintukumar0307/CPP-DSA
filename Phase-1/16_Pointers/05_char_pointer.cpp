#include <iostream>
using namespace std;

int main()
{
    char ch = 'a';
    char *p = &ch;
    cout << *p << endl;
    cout << p << endl;

    char ch1[5] = "abcd";
    char *p1 = ch1;
    cout << *p1 << endl;
    cout << p1 << endl;

    int arr[4] = {1, 2, 3, 4};
    int *p2 = arr;
    cout << *p2 << endl;
    cout << p2 << endl;

    cout << ch1 << endl;
    cout << &ch1 << endl;
    cout << &ch1[0] << endl;

    cout << arr << endl;
    cout << &arr << endl;
    cout << &arr[0] << endl;

    return 0;
}