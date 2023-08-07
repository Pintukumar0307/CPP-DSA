#include<iostream>
using namespace std;

class Human{
    private:
      char gender;
    //   int age; 
    public:
    char getGender(){
        return gender;
    }
    void setGender(char g){
        gender=g;
    }
    // int getAge(){
    //     return age;
    // }
    // void setAge(int a){
    //     age=a;
    // }


};

int main(){
   
    Human obj1;
    // obj1.age=10;
    // cout<<obj1.age<<endl;
    // cout<<obj1.gender<<endl;

    // obj1.setAge(22);
    // obj1.setGender('M');
    
    // cout<<obj1.getAge()<<endl;
    // cout<<obj1.getGender()<<endl;
    cout<<sizeof(obj1)<<endl;



     return 0;
}