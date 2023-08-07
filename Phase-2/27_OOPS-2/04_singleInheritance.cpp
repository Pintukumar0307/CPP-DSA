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

int main(){
   Animal a1;
   Dog b1;
   b1.age;
   b1.speak();
   




    return 0;
}