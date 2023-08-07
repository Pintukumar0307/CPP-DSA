#include<iostream>
using namespace std;

int compliment(int num){
     int mask=0;
     while(mask<num){
         mask=(mask<<1)|1;
       
        
     
     }
    //  cout<<mask;
     int ans=(~num)&mask;
        cout<<ans;
        return ans;
    
    
}

int main()
{
    int num;
    cin>>num;
 compliment(num);
 
    return 0;
}