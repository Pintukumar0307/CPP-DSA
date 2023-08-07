#include<iostream>
using namespace std;

class Human{
      private:
      int age;
      int weight;
      string name;

      public:
      int getAge(){
        return this->age;
      }
      void setAge(int age){
        this->age=age;
      }

      int getWeight(){
        return this->weight;
       }
      void setWeight(int weight){
        this->weight=weight;
      }

      string getName(){
        return this->name;
      }
      void setName(string name){
        this->name=name;
      }



};

int main(){
  Human a;
  a.setAge(20);
  a.setWeight(70);
  a.setName("Pintu");

    cout<<a.getAge()<<endl;
    cout<<a.getWeight()<<endl;
    cout<<a.getName()<<endl;

    return 0;
}