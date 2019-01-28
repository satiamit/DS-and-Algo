#include <bits/stdc++.h>
using namespace std;
class tree
{
    public:
    tree *left;
    tree *right;
    int data;
    void insert(tree** node, int data);
};
void tree::insert(tree **node, int inpData)
{
    *node = new tree;
    (*node)->data = inpData;
    (*node)->left = NULL;
    (*node)->right = NULL;
}
void inorderTraverse(tree *node);
void treeInversion(tree *node)
{
    if(node == NULL)
        return;
    else
    {
        treeInversion(node->left);
        treeInversion(node->right);
        tree *tmp = node->left;
        node->left = node->right;
        node->right = tmp;
    }

}
void inorderTraverse(tree *node)
{
    if(node == NULL)
    {
        return;
    }
    else
    {
        inorderTraverse(node->left);
        cout << node->data << " ";
        inorderTraverse(node->right);
    }

}
int main()
{
    tree *head = new tree;
    head->data = 1;
    head->left = NULL;
    head->right = NULL;
    head->insert(&(head->left), 2);
    head->insert(&(head->right), 3);
    head->insert(&(head->left->left), 4);
    head->insert(&(head->left->right), 5);
    head->insert(&(head->right->left), 6);
    head->insert(&(head->left->left->left), 7);
    head->insert(&(head->left->left->right), 8);
    head->insert(&(head->right->left->left), 9);
    inorderTraverse(head);
    cout << endl;
    treeInversion(head);
    inorderTraverse(head);
}

