#include<iostream>
using namespace std;
void printCombString(string input,int i,string output){
    if(i==input.length()){
        cout<<output<<endl;
        return;
    }

    char ch=input[i];
    char s='*';
    output.push_back(ch);

    //no spaces
    printCombString(input,i+1,output);

    //with spaces
    output.push_back(s);
    if(input[i+1] !='\0')
     printCombString(input,i+1,output);


}


int main(){

    string str;
    cout<<"Enter your string"<<endl;
    cin>>str;

    string output="";
    printCombString(str,0,output);


    return 0;

}