/* Check if the given binary tree is sum tree. A sum tree is a binary tree where value of
   every node x is equal to sum of nodes present in its left subtree and right subtree of
   x. An empty tree is sum tree and sum of an empty tree can be considered as 0.
   A leaf node is also considered as sum tree.
*/

/* Binary tree's node:
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
*/

// Returns sum of subtrees
int sum(struct Node* node) {
    if (node == NULL)
        return 0;
    int nleft = 0, nright = 0;
    /*if (node -> left != NULL)
        nleft = (node -> left -> data) + sum(node -> left);
    if (node -> right != NULL)
        nright = (node -> right -> data) + sum(node -> right);*/
    return node -> data + sum(node -> left) + sum(node -> right);
}
// Returns true if tree is Sum Tree, else false
bool isSumTree(struct Node* root) {
    if (root == NULL || (root -> left == NULL && root -> right == NULL))
        return true;
    if (sum(root -> left) + sum(root -> right) == root -> data &&
        isSumTree(root -> left) &&
        isSumTree(root -> right))
        return true;
    else
        return false;
}
