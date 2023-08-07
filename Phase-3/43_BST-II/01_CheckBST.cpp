#include<iostream>
#include<queue>
#include <climits>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
    
};
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
   
}

Node* buildBST(Node* root,int data){
    if(root==NULL){
       Node* temp=new Node(data);
       return temp;
    }

    if(root->data<data){
        root->right=buildBST(root->right,data);
    }
    else{
        root->left=buildBST(root->left,data);
    }

    return root;

}

void createBST(Node* &root){
    cout<<"Enter the value of root"<<endl;
    int data;
    cin>>data;
    while(data != -1){
        root=buildBST(root,data);
        cout<<"Enter the value of Node"<<endl;
        cin>>data;

    }

}

bool isBST(Node* root,int min,int max){
     if(root==NULL){
      return true;
    }

    if(root->data>min && root->data<max){
        bool left=isBST(root->left,min,root->data);
        bool right=isBST(root->right,root->data,max);
        return left && right;
    }
    return false;
}



int main(){


   // 10 5 12 7 15 4 20
    Node* root=NULL;
    createBST(root);

    // cout<<"Level order:"<<endl;
    // levelOrder(root);
    
    // cout<<"InOrder:"<<endl;
    // inOrder(root);
    // cout<<endl;

    // cout<<"Preorder:"<<endl;
    // preOrder(root);
    // cout<<endl;


    // cout<<"Postorder:"<<endl;
    // postOrder(root);
    // cout<<endl;

    int min=INT_MIN;
    int max=INT_MAX;

   cout<<isBST(root,min,max)<<endl;

}