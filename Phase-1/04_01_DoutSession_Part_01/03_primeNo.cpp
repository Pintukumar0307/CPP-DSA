#include<iostream>
using namespace std;

int main()
{
  int n=29;
//   for (int i = 2; i < n; i++)
//   {
//      if (n%i==0)
//      {
//          cout<<" it is not prime no"<<endl;
//          break;
//      }
//      else{
//          cout<<" it is prime No"<<endl;
//          break;
//      }
     
//   }
  
  bool IsPrime=true;

  for (int i = 2; i < n; i++)
  {
      if (n%i==0)
      {
          IsPrime=false;
          break;
      }
      
  }
  if (IsPrime==true)
      {
          cout<<"It is  Prime no";
      }

      else{
           cout<<"It is not Prime no";
      }

  
  
 
    return 0;
}