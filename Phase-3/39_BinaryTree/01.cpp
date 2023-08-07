#include<iostream>
using namespace std;

pair<int,bool> solve(Node* root){
    if(root==NULL){
        return make_pair(0,true);
    }
    if(root->left==NULL && root->right==NULL){
        return make_pair(root->val,true);
    }
    pair<int,bool> left=solve(root->left);
    pair<int,bool> right=solve(root->right);
    
    if(left.second && right.second && (root->val==right.first+left.first)){
        return make_pair(2*root->val,true);
    }
    else{
        return make_pair(2*root->val,false);
    }

}

int main(){


}