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

void preOrder(Node* root){
     if(root==NULL){
        return;
     }
     cout<<root->data<<" ";
     preOrder(root->left);
     preOrder(root->right);
}
void postOrder(Node* root){
     if(root==NULL){
        return;
     }
     postOrder(root->left); 
     postOrder(root->right);
     cout<<root->data<<" ";
}
void inOrder(Node* root){
     if(root==NULL){
        return;
     }
     inOrder(root->left); 
     cout<<root->data<<" ";
     inOrder(root->right);
    
}

void levelOrder(Node* root){
    
    queue<Node*>q;
    int count=0;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
       Node* front =q.front();
       q.pop();

       if(front==NULL){
        count++;
        cout<<endl;
        if(!q.empty()){
             q.push(NULL);
        }
       }
       else{

       cout<<front->data<<" ";
       if(front->left!=NULL){
            q.push(front->left);
       }
       if(front->right){
               q.push(front->right);
       }

       }
       
    }
    cout<<"Height: "<<count<<endl;
}

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return 0;
    }
    int leftAns=height(root->left);
    int rightAns=height(root->right);
    
    return max( leftAns, rightAns)+1;
}



int main(){
 //3 5 7 -1 -1 -1 8 3 -1 -1 -1
    Node* root=NULL;
    root=buildTree();

    preOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;

    levelOrder(root);
    cout<<endl;

   cout<<"The Height is: "<<height(root)<<endl;
}