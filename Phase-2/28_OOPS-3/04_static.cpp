#include <iostream>
using namespace std;

// static keyword
class Demo{
     public:
     static int a; 

};
 int Demo::a=10;
int main(){
     Demo obj;
     cout<<a<<endl;

return 0;
}