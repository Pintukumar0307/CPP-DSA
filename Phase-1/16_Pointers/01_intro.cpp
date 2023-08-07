#include <iostream>
using namespace std;

int main()
{
  int a = 5;

  cout << &a << endl; // give address of a

  int *p = &a;
  cout << p << endl;
  cout << sizeof(p) << endl; // give size of size of pointer
                             //   cout<<*a<<endl;       // error we dont dereference of a

  int **p1 = &p; // give addres of p (pointer)
  cout << p1 << endl;
  cout << sizeof(p1) << endl;

  cout << *p << endl; // give value of a
  cout << **p1 << endl;

  int *p2 = 0;
  cout << ":" << *p2 << endl;

  return 0;
}