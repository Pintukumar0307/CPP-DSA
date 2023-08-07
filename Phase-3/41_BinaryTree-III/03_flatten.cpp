#include<iostream>
#include<vector>
using namespace std;

class Node{
   public:
   int data;
   Node* left;
   Node* right;
   Node(int data){
    this->data=data;
   }
    
};

Node* buildTree(){
    cout<<"Enter the value of data"<<endl;
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    Node* newNode=new Node(data);
    cout<<"checking left child"<<endl;
    newNode->left=buildTree();
    cout<<"Checking right child"<<endl;
    newNode->right=buildTree();

return newNode;
}


void inOrder(Node* root){
     if(root==NULL){
        return;
     }
     cout<<root->data<<" ";
     inOrder(root->left); 
     inOrder(root->right);
    
}

 void preorder(Node* root,vector<int> &v){
        if(root==NULL){
            return;
        }
        v.push_back(root->data);
        preorder(root->left,v);
        preorder(root->right,v);
    }







int main(){
 // 3 5 7 -1 -1 -1 8 11 -1 -1 -1
 
    Node* root=NULL;
    root=buildTree();
    inOrder(root);
    cout<<endl;
    vector<int>v;
    preorder(root,v);
    cout<<v[0]<<endl;

   
}