#include<bits/stdc++.h>

#include"treeclass.h"

using namespace std;

TreeNode<int>*takeInput(){

int rootData;

cout<<"enter data : ";

cin>>rootData;

TreeNode<int>*root=new TreeNode<int>(rootData);

int n;

cout<<" Enter Number of the children of "<<rootData<<endl;

cin>>n;

for(int i= 0 ; i < n; i ++){

    TreeNode<int>*child=takeInput();

    root->children.push_back(child);

}

return root;

}


TreeNode<int>*takeinputLevel(){

int rootData;

cout<<" enter data : ";

cin>>rootData;

TreeNode<int>*root = new TreeNode<int>(rootData);

queue<TreeNode<int>*>pq;

pq.push(root);

while(pq.size()!=0){

TreeNode<int>* front=pq.front();

pq.pop();

cout<<"Enter the  number of child of "<<front->data<<":";

int numchild;

cin>>numchild;

for(int i=0 ; i< numchild ; i++){

    int childData;

    cout<<"enter the "<<(i+1)<<" th child of "<<front->data<<endl;

    cin>>childData;

    TreeNode<int>*child= new TreeNode<int>(childData);

    front->children.push_back(child);

    pq.push(child);


}


}
return root;


}


void printTreeLevelWise(TreeNode<int>*root){

    if(root == NULL){
        return;
    }

    queue<TreeNode<int>*>pq;

    pq.push(root);

    while(pq.size()!=0){

        cout<<root->data<<": ";

        TreeNode<int>*front=pq.front();

        pq.pop();

        for( int i = 0 ; i <root->children.size(); i++){

            pq.push(root->children[i]);

            if(root->children.size()-1 != i){
            
            cout<<root->children[i]->data<<",";

            }
            
            else{

                cout<<root->children[i]->data;

            }


        }

        root=pq.front();
        cout<<endl;

    }



return;

}

void printTree(TreeNode<int>*root){

    if(root==NULL){
        return;
    }

   cout<<root->data<<":";

   for(int i = 0 ;i< root->children.size(); i++){

       cout<<root->children[i]->data<<",";

   }
   cout<<endl;

   for(int i = 0 ;i< root->children.size(); i++){

       printTree(root->children[i]);

   }

}

int main(){

  /* TreeNode<int>*root = new TreeNode<int>(1);

    TreeNode<int>*node1 = new TreeNode<int>(2);

    TreeNode<int>*node2 = new TreeNode<int>(3);

    root->children.push_back(node1);

  root->children.push_back(node2);
  */
  
  //TreeNode<int>*root = takeInput();

    TreeNode<int>*root=takeinputLevel();

    printTree(root);

    //TODO delete the tree;


}