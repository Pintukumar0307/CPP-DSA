#include<iostream>
using namespace std;

class Human{
      
      public:
      int age;
      int weight;
      string name;
     

};
class Male:public Human{
  public:
   void setAge(int age){
        this->age=age;
      }
    void setWeight(int weight){
        this->weight=weight;
      }

     
    void setName(string name){
        this->name=name;
      }
   

};

int main(){
  Human a;
  
  Male m1;
  m1.setAge(22);
  m1.setWeight(70);
  m1.setName("Pintu");
  cout<<m1.age<<endl;
  cout<<m1.weight<<endl;
  cout<<m1.name<<endl;




    return 0;
}