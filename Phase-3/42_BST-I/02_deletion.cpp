#include<iostream>
#include<queue>
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

Node* max(Node* root){
    Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}


Node* deleteNode(Node* root,int target){

    if(root==NULL){
        return NULL;
    }
    if(root->data==target){

        // 0 child or leaf node
         if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
         }

        // 1 child
        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;

        }
        if(root->left==NULL && root->right!=NULL){
             Node* temp=root->right;
            delete root;
            return temp;
        }

        // 2 child
   if(root->left!=NULL && root->right!=NULL){
        // get inorder predecessor
        Node* temp=max(root->left);
        int pred=temp->data;
        cout<<"pred:"<<pred<<endl;
        //copy 
        root->data=pred;
        //solve remaining problems
        root->left=deleteNode(root->left,pred);

        return root;
      }

    }
    else if(root->data>target){
       root->left= deleteNode(root->left,target);
    }
    else{
      root->right= deleteNode(root->right,target);
    }

    return root;
}





int main(){


   // 10 5 12 7 15 4 20
    Node* root=NULL;
    createBST(root);

    levelOrder(root);
    Node* temp= deleteNode(root,10);
    levelOrder(temp);

    
}