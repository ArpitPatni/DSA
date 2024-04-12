#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
  void levelOrder(Node* root) {
        
        if(root==NULL) return;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>level;
            for(int i=0;i<size;i++){
                Node*temp=q.front();
                q.pop();
                cout<<temp->data<<" ";
                // level.push_back(temp->data);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            cout<<endl;

        }
    }
Node*insertIntoBST(Node*root,int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }
    if(data<root->data){
        //insert in left
        root->left=insertIntoBST(root->left,data);
    }else{
        //insert in right
        root->right=insertIntoBST(root->right,data);
    }
    return root;
}
void takeInput(Node*&root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertIntoBST(root,data);
        cin>>data;
    }
}
int minValue(Node*root){
        Node*temp=root;
        if(temp==NULL){
            return -1;
        }
        while(temp->left!=NULL){
            temp=temp->left;
        }
        return temp->data;
}
int maxValue(Node*root){
    Node*temp=root;
    if(temp==NULL){
        return -1;
    }
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->data;
}
Node* findNode(Node*root,int target){
    if(root==NULL){
        return NULL;
    }
    if(root->data==target){
        return root;
    }
    if(target>root->data){
        return findNode(root->right,target);
    }else{
        return findNode(root->left,target);
    }
}
Node*deleteNodeInBST(Node*root,int target){
if(root==NULL) return NULL;
if(root->data==target){
if(root->left==NULL && root->right==NULL){
    delete root;
    return NULL;
}else if(root->left==NULL && root->right!=NULL){
    Node*child=root->right;
    delete root;
    return child;
}else if(root->left!=NULL && root->right==NULL){
    Node*child=root->left;
    delete root;
    return child;
}else{
     int inorderpre=maxValue(root->left);
     root->data=inorderpre;
     root->left=deleteNodeInBST(root->left,inorderpre);
     return root;
}
}else if(target>root->data){
    root->right= deleteNodeInBST(root->right,target);
}else if(target<root->data){
    root->left =deleteNodeInBST(root->left,target);
}
        return root;
}
int main(){
    Node*root=NULL;
    vector<vector<int>>ans;
    cout<<"Enter the data for node"<<endl;
    takeInput(root);
   deleteNodeInBST(root,150);
   levelOrder(root);
}




