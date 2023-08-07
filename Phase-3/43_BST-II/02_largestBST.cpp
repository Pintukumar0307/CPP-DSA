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
class Info{
    public:
    int mini;
    int maxi;
    int size;
    bool isBST;

    Info(){

    }
     Info(int mini,int maxi,int size,int isBST){
        this->mini=mini;
        this->maxi=maxi;
        this->size=size;
        this->isBST=isBST;
    }

};


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

Info solve(Node* root, int& ans) {

    //base case
    if(root == NULL) {
        return Info(INT_MAX, INT_MIN, 0, true);
    }
    
    //solve for left
    Info leftAns = solve(root->left, ans);
    //solve for right
    Info rightAns = solve(root->right, ans);

    //create ans for current node/subtree
    Info curr;

    curr.size = leftAns.size + rightAns.size + 1;

    curr.mini = min(leftAns.mini, root->data);

    curr.maxi = max(rightAns.maxi, root->data);

    if(leftAns.isBST && rightAns.isBST && 
       (root->data > leftAns.maxi && root->data < rightAns.mini) ) {
        curr.isBST = true;
    }
    else {
        curr.isBST = false;
    }

    //ifcurr subtree is BST, then update ans
    if(curr.isBST)
        ans = max(ans, curr.size);

    //return all values of current subtree to upper levels
    return curr;
}

int largestBST(Node* root) {
    int ans = 0;
    solve(root, ans);
    return ans;
}



int main(){


   // 10 5 12 7 15 4 20
    // Node* root=NULL;
    // createBST(root);

     // 5 2 1 -1 -1 3 -1 -1 4 -1 -1
     Node* root1=NULL;
    root1 = buildTree();

    // cout<<"Level order:"<<endl;
    // levelOrder(root);

    cout<<"Level order:"<<endl;
    levelOrder(root1);
    
    

    cout<<largestBST(root1)<<endl;

  

}