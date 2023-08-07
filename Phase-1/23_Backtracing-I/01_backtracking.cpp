#include<bits/stdc++.h>
using namespace std;

void solve(string s,string &output,set<string> &result,map<int,bool> &flag){

    for (int i = 0; i < s.length(); i++)
    {
        if(flag[i]==0){
            char c= s[i];
            output.push_back(c);
            flag[i]=1;
            cout<<output<<endl;
            result.insert(output);
            
            solve(s,output,result,flag);

            output.pop_back();
            flag[i]=0;

        }
    }
    

}

int lettertileposs(string s){
string output="";
set<string>result;
map<int,bool>flag;

solve(s,output,result,flag);



return result.size();

}

int main(){

string s="abc";
int x=lettertileposs(s);
cout<<x<<endl;

    return 0;
}