#include <bits/stdc++.h>
using namespace std;


// ------ PreOrder & InOrder Traversal (Depth First Search) ------ //
/*
    DFS
            M
          /  \
         B    Q
       /  \    \
      A   C     Z


    1- Visit (print) data in the root node
    2- Make recursive calls to visit left subtree.
    3- Make another call to call right subtree.

*/

struct Node {
    char data;
    Node *left;
    Node *right;
};

void Preorder(struct Node* root) {          // or (Node* root) as a parameter, both the same.
    if(root == NULL)
        return;
    cout << root -> data << " ";
    Preorder(root -> left);
    Preorder(root -> right);
}


Node* Insert(Node *root, char data) {
    if(root == NULL) {
        root = new Node();
        root -> data = data;
        root -> left = root -> right = NULL;
    }
    else if(data <= (root -> data))
        root -> left = Insert(root->left, data);
    else
        root -> right = Insert(root -> right, data);
    return root;
}


void Inorder(Node* root) {
    if(root == NULL)
        return ;
    Inorder(root -> left);
    cout << root -> data << " ";
    Inorder(root -> right);
}

int main() {
    /*

            M
          /  \
         B    Q
       /  \    \
      A   C     Z

    */

    Node* root = NULL;
    root = Insert(root, 'M');
    root = Insert(root, 'B');
    root = Insert(root, 'Q');
    root = Insert(root, 'Z');
    root = Insert(root, 'A');
    root = Insert(root, 'C');

    // Print Nodes in PreOrder.
    Preorder(root);
    // M B A C Q Z

    Inorder(root);
    // A B C M Q Z

}

