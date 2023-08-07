#include<iostream>
#include<cstring>
using namespace std;

int getLenght(char name[]){
      int length=0;
      int i=0;
      while ( name[i] != '\0')
      {
          i++;
          length++;

      }
      return length;
      
}

int main()
{
    char name[5]="kumr";
    char fname[10]="pkumr";
    cout<<name<<endl;
    cout<<name[3]<<endl;



//     char title[10];
//     cin>>title;
//    cout<<title[15]<<endl;
// cout<<title[10]<<endl;


//    int arr[9]={1,2,3,4,5,6,7,8,9};
//    cout<<arr[0];


   

   cout<<getLenght(name)<<endl;
   cout<< strlen(name) <<endl;
   cout<< strcmp(name,fname)<<endl;
   cout<< strcpy(name,fname)<<endl;
   cout<< name<<endl;


 
    return 0;
}