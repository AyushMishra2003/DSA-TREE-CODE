#include<iostream>
using namespace std;
class Node
{
public:
    Node *left;
    Node *right;
    int data;

    Node(int data)
    {
        left=NULL;
        right=NULL;
        this->data=data;
    }

    Node * create(Node *root,int data)
    {
        if(root==NULL)
        {
            Node *n=new Node(data);
            root=n;
        }
        else
        {
            if(root->data>=data)
            {
                root->left=create(root->left,data);
            }
            else
            {
                root->right=create(root->right,data);
            }
        }
        return(root);
    }
};
int main()
{
    Node* root=NULL;
    root=root->create(root,10);
    root=root->create(root,20);
    root=root->create(root,5);
    root->create(root,2);
    root->Inorder(root);
    return(0);
}
