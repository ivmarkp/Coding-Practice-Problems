/* Given a Binary Tree, print all nodes that don't have a sibling node. */
/* Binary tree's node structure
struct Node {
	int data;
	struct Node* left;
	struct Node* right;
};
*/

/* Prints all nodes having no siblings.  */
void printSibling(struct Node* node) {
    if (node == NULL)
        return;
    if (node -> left == NULL && node -> right != NULL) {
        cout << node -> right -> data << ' ';
        printSibling(node -> right);
    }
    if (node -> right == NULL && node -> left != NULL) {
        cout << node -> left -> data << ' ';
        printSibling(node -> left);
    }
    if (node -> left != NULL && node -> right != NULL) {
        printSibling(node -> left);
        printSibling(node -> right);
    }
}
