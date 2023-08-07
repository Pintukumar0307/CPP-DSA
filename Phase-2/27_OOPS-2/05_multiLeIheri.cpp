#include<iostream>
using namespace std;

class Animal{
      
     public:
      int age;
      void speak(){
        cout<<"animal is speaking "<<endl;
      }
     

};
class Dog:public Animal{
       
};
class Legra:public Dog{


};

int main(){
   Animal a1;
   Dog b1;
   Legra c1;
   c1.age;
   c1.speak();
   




    return 0;
}