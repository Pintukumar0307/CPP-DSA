#include<iostream>
using namespace std;

class Father{
      
     public:
      
      void bike(){
        cout<<"i get bike from father "<<endl;
      }
     

};
class Mother{
       public:
      
      void iphone(){
        cout<<"i get iphone from mother "<<endl;
      }
     
};
class You:public Father,public Mother{


};

int main(){
   Father p;
   Mother m;
   You y;
   y.bike();
   y.iphone();
   




    return 0;
}