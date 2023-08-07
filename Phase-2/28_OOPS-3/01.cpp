#include <iostream>
using namespace std;

// binary operator overloading
class Demo{
      
      public:
      int first;
      int second;

      Demo operator+(Demo& temp){
         Demo result;
         result.first=this->first+temp.first;
         result.second=this->second+temp.second;
         return result;
      }

};

int main(){
     Demo a;
     a.first=10;
     a.second=20;
     Demo b;
     b.first=10;
     b.second=20;
     Demo result=a+b;
    cout<<result.first<<" "<<result.second<<endl;

return 0;
}