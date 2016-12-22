/* Write a function to delete a binary tree. */

/* Binary tree's node structure
struct Node {
	int data;
	struct Node* left;
	struct Node* right;
};
*/
// Before deleting the parent node, we should delete its children nodes first. We can thus
// use postorder traversal.
void deleteTree(struct Node* root) {
	if (root == NULL)
		return;
	deleteTree(root -> left);
	deleteTree(root -> right);
	free(root);
}
