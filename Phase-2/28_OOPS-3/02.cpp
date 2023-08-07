#include <iostream>
using namespace std;

// unary operator overloading
class Demo{
      
      public:
      int first;
      int second;

    //   Demo operator+(Demo& temp){
    //      Demo result;
    //      result.first=this->first+temp.first;
    //      result.second=this->second+temp.second;
    //      return result;
    //   }
    Demo operator++(){
          Demo result;
          result.first=this->first+1;
          result.second=this->second+1;
          return result;
    }

};

int main(){
     Demo a;
     a.first=10;
     a.second=20;
     
     Demo result=++a;
     cout<<result.first<<" "<<result.second<<endl;

return 0;
}