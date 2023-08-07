#include<iostream>
using namespace std;

void suresh(int k){
  cout<<"suresh "<<k<<endl;
}

void rahul(int m){
    cout<<"rahul "<<m<<endl;
    m++;
    suresh(m);

}

void ramesh (int n){

    cout<<"ramesh "<<n<<endl;
    n++;
    rahul(n);

}

int main()
{
   int num=21;
   ramesh(num);
   cout<<"main  "<<num<<endl;
 
    return 0;
}