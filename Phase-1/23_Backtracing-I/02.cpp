#include <bits/stdc++.h>
using namespace std;

void solve(int currOpen, int currClose, int remOpen, int remClose, vector<string> &result, string &output)
{
    if (remOpen == 0 && remClose == 0){
        result.push_back(output);
        return;
    }
    // call for open bracket
    if (remOpen > 0){
        output.push_back('(');
        solve(currOpen + 1, currClose, remOpen - 1, remClose, result, output);
        // backtracing
        output.pop_back();
    }
    // call for close bracket
    if (remClose > 0 && currOpen > currClose){
        output.push_back(')');
        solve(currOpen, currClose + 1, remOpen, remClose - 1, result, output);
        // backtracing
        output.pop_back();
    }
}

int main()
{

      vector<string>result;
      int n=3;
      string output= "(";
      int currOpen=1;
      int currClose=0;
      int remOpen=n-1;
      int remClose=n;

    solve(currOpen,currClose,remOpen,remClose,result,output);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}