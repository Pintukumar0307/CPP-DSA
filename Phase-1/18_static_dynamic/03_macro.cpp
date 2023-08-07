#include<iostream>
using namespace std;
# define PI 3.41

int score =50;

void fun1(){
    cout<<score<<endl;
    score++;
   cout<<"one"<<endl; 
}
void fun2(){
    cout<<score<<endl;
    score++;
   cout<<"two"<<endl; 
}
void fun3(){
    cout<<score<<endl;

   cout<<"three"<<endl; 
}

int main()
{
//  int r =7;
//  double area = PI *r*r;



// global variable
 fun1();
  fun2();
   fun3();
   const int i=8;
 //    i++;


 
    return 0;
}