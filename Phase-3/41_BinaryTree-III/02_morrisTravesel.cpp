#include<iostream>
#include<queue>
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
     inOrder(root->left); 
     cout<<root->data<<" ";
     inOrder(root->right);
    
}

void morrisTravesal(Node* root){
    Node* curr=root;
    while(curr!=NULL){
        if(curr->left==NULL){
            cout<<curr->data<<" ";
            curr=curr->right;
        }
        else{
            // predecessor
            Node* pred=curr->left;
            while(pred->right != NULL && pred->right!=curr){
                pred=pred->right;
            }
            if(pred->right==NULL){
                pred->right=curr;
                curr=curr->left;

            }
            else{
               
                 pred->right=NULL;
                cout<<curr->data<<" ";
                curr=curr->right;
            }
        }
    }
     
}





int main(){
 // 3 5 7 -1 -1 -1 8 11 -1 -1 -1
 
    Node* root=NULL;
    root=buildTree();

    inOrder(root);
     cout<<endl;

    morrisTravesal(root);
    cout<<endl;

   
}