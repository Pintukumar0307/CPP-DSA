#include<iostream>
using namespace std;


int main()
{


  string name="hello";
  cout<<name<<endl;
  cout<<name.length()<<endl;

  string name1;
//   cin>>name1;
  getline(cin,name1);


  cout<<"name is "<<name1<<endl;


 
    return 0;
}