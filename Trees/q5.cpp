/*
Given a generic tree, count and return the number of leaf nodes present in the given tree.
Input format :
The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.  
Output Format :
The first and only line of output prints the count of leaf nodes present in the given tree.
Constraints:
Time Limit: 1 sec
Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 1 :
4
*/

int count = 0;

int getLeafNodeCount(TreeNode<int>* root) {
    // Write your code here
    
    if(root==NULL){
        
        return 0;
        
    }
    if(root->children.size()==0){
        
        count++;
        
    }
    for( int i = 0 ; i< root->children.size(); i++){
        
        getLeafNodeCount(root->children[i]);
        
    }
    
    return count;
}