#include<iostream>
using namespace std;

class Human{
    private:
      char gender;
      int age; 
    public:
    char getGender(){
        return gender;
    }
    void setGender(char g){
        gender=g;
    }
    int getAge(){
        return age;
    }
    void setAge(int a){
        age=a;
    }


};

int main(){
   
    Human obj1;
    obj1.setAge(22);
    obj1.setGender('M');
    
    cout<<obj1.getAge()<<endl;
    cout<<obj1.getGender()<<endl;
    

    Human *obj2=new Human();
    
    obj2->setAge(23);
    obj2->setGender('F');
    
    cout<<obj2->getAge()<<endl;
    cout<<obj2->getGender()<<endl;  


     return 0;
}