#include<iostream>
using namespace std;

void printPowerSet(string input,int i,string output){
    if(i==input.length()){
        cout<<"{"<<output<<"},";
        return;
    }

    char ch=input[i];
    //exclude
    printPowerSet(input,i+1,output);

    //include
    output=output+ch;
    printPowerSet(input,i+1,output);

}


int main(){

    string s;
    cout<<"Enter your string"<<endl;
    cin>>s;

    string output="";
    printPowerSet(s,0,output);


    return 0;

}