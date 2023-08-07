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
    public:
      void speak(){
        cout<<"animal is barking "<<endl;
      } 
};
class Legra:public Dog{


};

int main(){
   Animal a1;
   Dog b1;
   b1.speak();
   
    return 0;
}