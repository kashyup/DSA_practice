//creating a tree and adding elements 

#include<bits/stdc++.h>
using namespace std;
template<typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*>children;
    TreeNode(T data){
        this->data=data;
    }
};
TreeNode<int>*takeInputLevel(){
    int rootData;
    cout<<"Enter rootData"<<endl;
    cin>>rootData;
    TreeNode<int>* root=new TreeNode<int>(rootData);
    queue<TreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        TreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter the Number of children of "<<front->data<<endl;
        int numChild;
        cin>>numChild;
        for(int i=0;i<numChild;i++){
            int childData;
            cout<<"enter "<<i<<"th of child of "<<front->data<<endl;
            cin>>childData;
            TreeNode<int>*child=new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
        
    }
    return root;
}
TreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter Data"<<endl;
    cin>>rootData;
    TreeNode<int>*root=new TreeNode<int>(rootData);

    int n;
    cout<<"Enter number of children of Data "<< rootData<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        TreeNode<int>*child=takeInput();
        root->children.push_back(child);
    }
    return root;


}
void printTree(TreeNode<int>*root){
     if(root==NULL){
         return ;
     }
     cout<<root->data<<" : ";
     for(int i=0;i<root->children.size();i++){
         cout<<root->children[i]->data<<" ";
     }
     cout<<endl;
     for(int i=0;i<root->children.size();i++){
         printTree(root->children[i]);
     }
}
void PrintLevelwise(TreeNode<int>*root){
   if(root==NULL){
        return;
    }
    queue<TreeNode<int>*>pendingQ;
    pendingQ.push(root);
    
    while(pendingQ.size()!=0){
        cout<<root->data<<":";
        TreeNode<int>*front=pendingQ.front();
        pendingQ.pop();
        for(int i=0;i<root->children.size();i++){
            pendingQ.push(root->children[i]);
            if(root->children.size()-1!=i){
                cout<<root->children[i]->data<<",";
            }
            else{
                cout<<root->children[i]->data;
            }
        }
        root=pendingQ.front();
        cout<<endl;
    }
}
int main(){
    /*TreeNode<int>* root=new TreeNode<int>(1);
    TreeNode<int>* node1=new TreeNode<int>(2);
    TreeNode<int>* node2=new TreeNode<int>(3);
    root->children.push_back(node1);
    root->children.push_back(node2);*/
   /// TreeNode<int>*root=takeInput();
   TreeNode<int>*root=takeInputLevel();
    //printTree(root);
    PrintLevelwise(root);


}
