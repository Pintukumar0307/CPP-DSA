#include<iostream>
#include<cstring>
using namespace std;


void reverseChar(char name[]){

    int l =strlen(name);
    int i=0,j=l-1;
    while (i<=j)
    {
       swap(name[i],name[j]);
       i++;
       j--;

    }

   
    


}

int main()
{
  char name[10]="love";

  cout<<name<<endl;
  
  reverseChar(name);
  cout<<name<<endl;
 
    return 0;
}