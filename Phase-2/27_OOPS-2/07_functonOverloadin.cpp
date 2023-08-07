#include<iostream>
using namespace std;

class Math{
      
     public:
      
      int add(int a , int b){
        return a+b;
      }
      int add(int a , int b, int c){
        return a+b+c;
      }
      int  add(int a,float b){
        return a+b;
      }
   
};


int main(){
  
   Math res;
   cout<<res.add(2,2)<<endl;
   cout<<res.add(2,2,2)<<endl;
   cout<<res.add(2,2)<<endl;

    return 0;
}