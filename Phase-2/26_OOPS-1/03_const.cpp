#include<iostream>
using namespace std;

class Human{
    private:
      
    public:
      char gender;
      int age; 
    Human(){
        cout<<"hii i am constructor"<<endl;
        age=20;
        gender='F';
    }
    Human(int age,char gender){
        cout<<"hii i am para constructor"<<endl;
      this->age=age;
      this->gender=gender;
    }
    Human(Human& temp){
        cout<<"hii i am own create copy construcr"<<endl;
        this->age=temp.age;
        this->gender=temp.gender;
    }
    ~Human(){
        cout<<"Destructor called"<<endl;
    }
    


};

int main(){
   
    Human obj1;
    cout<<obj1.age<<endl;
    cout<<obj1.gender<<endl;

    Human *obj11=new Human();
    cout<<obj11->age<<endl;
    cout<<obj11->gender<<endl; 
    

    Human obj2(22,'M');
    cout<<obj2.age<<endl;
    cout<<obj2.gender<<endl;


    // cout<<"hii i am copy construcr"<<endl;
    // Human obj3(obj1);
    // cout<<obj3.age<<endl;
    // cout<<obj3.gender<<endl;

     Human obj4(obj2);
     cout<<obj4.age<<endl;
     cout<<obj4.gender<<endl;


     delete obj11;

     return 0;
}