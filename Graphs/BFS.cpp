#include <bits/stdc++.h>
using namespace std;


// ------ Level Order Traversal (Breadth First Search) ------ //
/*
    BFS
            M
          /  \
         B    Q
       /  \    \
      A   C     Z

    I can traverse nodes branch by branch, but the problem here is that Y has no link to Z .. and Z has no link to W
    To solve this problem We use Queue

    If the queue is not empty
        enqueue the front node --> then visit it --> and enqeueue its children

    As the queue is a LIFO --> the nodes enqueued first will be visited first.



*/

struct Node {
    char data;
    Node *left;
    Node *right;
};

void LevelOrder(Node *root) {
    if(root == NULL)
        return;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {
        Node* current = q.front();
        cout << current -> data << "  ";    // visit the node
        if(current -> left != NULL)
            q.push(current -> left);
        if(current -> right != NULL)
            q.push(current -> right);
        q.pop();
    }
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

    // Print Nodes in Level Order.

    LevelOrder(root);
    // M B Q A C Z 
}
