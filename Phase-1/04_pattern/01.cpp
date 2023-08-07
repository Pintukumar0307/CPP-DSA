#include<iostream>
using namespace std;

int main()
{
  
int n=4;

for (int row = 0; row < n; row++)
{
    // for each row , print n start or we have n col

    for (int col = 0; col < n; col++)
    {
        cout<<"* ";
    }
    cout<<endl;


}


 
    return 0;
}