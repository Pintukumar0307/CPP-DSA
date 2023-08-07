#include <iostream>
using namespace std;

// << or >> operator overloading
class Demo{
      
      public:
      int first;
      int second;

    

};
void operator<< (ostream& os, Demo& temp){
           cout<<temp.first<<" ";
           cout<<temp.second<<endl;
}

int main(){
     Demo a;
     a.first=10;
     a.second=20;
     
     
     cout<< a;

return 0;
}