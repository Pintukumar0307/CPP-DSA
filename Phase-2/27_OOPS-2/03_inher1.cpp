#include<iostream>
using namespace std;

class Human{
      
     public:
      int age;
      int weight;
      string name;
     

};
class Male:public Human{

//    public:
      int getAge(){
        return this->age;
      }
      void setAge(int age){
        this->age=age;
      }
   

};

int main(){
  Human a;
  
  Male m1;
 
  cout<<m1.age<<endl;
  cout<<m1.weight<<endl;
  cout<<m1.name<<endl;




    return 0;
}