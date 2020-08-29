#include<iostream>
using namespace std;

struct Node{
int data;
struct Node* left, *right;

    Node(int data){
        this-> data = data;
        left = right = NULL;
    }
};

//Printing nodes in preorder traversal.
/*
1. root
2. left -subtree
3. right - subtree
*/
void printPreorder(struct Node* node)
{
    if(node == NULL){
        return ;
    }
    //Printing the data of node.
    cout<<endl<<node->data<<" ";
    //Using recursion on left - subtree.
    printPreorder(node->left);
    //Using recursion on right - subtree.
    printPreorder(node->right);
}

//Printing nodes in inorder traversal.
/*
1. left - subtree
2. root
3. right - subtree
*/

void printInorder(struct Node *obj123)
{
    if(obj123 ==NULL)
        return;

    //Using recursion on left - subtree. 
    printInorder(obj123->left);
   //Printing the data of node.
    cout<<obj123->data<<endl;   
    //Using recursion on right - subtree.
    printInorder(obj123->right);
}

//Printing nodes in postorder traversal.
/*
1. left - subtree
2. right -subtree
3. root
*/
void printPostorder(struct Node *obj123)
{
    if(obj123 ==NULL)
        return;
    
    //Using recursion on left - subtree. 
    printInorder(obj123->left);
    //Using recursion on right - subtree.
    printInorder(obj123->right);
    //Printing the data of node.
    cout<<obj123->data<<endl;   
    
}

//Driver Code
int main(){

    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right =  new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout<<endl<<"Preorder traversal for Binary tree is: ";
    printPreorder(root);

    cout<<endl<<"Inorder traversal for Binary tree is: ";
    cout<<endl;
    printInorder(root);
    cout<<endl<<"Postorder traversal for Binary tree is: ";
    cout<<endl;
    printPostorder(root);
    
    return 0;
}
