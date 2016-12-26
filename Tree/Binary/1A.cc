/** Given a binary tree, print preorder, inorder and postorder traversal of it.
 *  E.g. For the following tree:
 *  		   1
 *  		 /  \
 *  		10  39
 *  		/
 *  	   5
 *  Preorder traversal: 1 10 5 39
 *  Postorder traversal: 5 10 39 1
 *  Inorder traversal: 5 10 1 39
 */
/** A binary tree node.
 *  struct Node {
 *      int data;
 *      struct Node* left;
 *      struct Node* right;
 *  };
 */

void preOrder(struct Node* root) {
    // Base condition.
    if (root == NULL)
        return;
    cout << root -> data << ' ';
    preOrder(root -> left);
    preOrder(root -> right);
}

void postOrder(struct Node* root) {
    if (root == NULL)
        return;
    postOrder(root -> left);
    postOrder(root -> right);
    cout << root -> data << ' ';
}

void inOrder(struct Node* root) {
    if (root == NULL)
        return;
    inOrder(root -> left);
    cout << root -> data << ' ';
    inOrder(root -> right);
}
