/* Given a Binary Tree, return true if a given element is found in the tree. */

/* Binary tree's node structure
struct Node {
	int data;
	struct Node* left;
	struct Node* right;
};
*/

bool searchTree(struct Node* root, int x) {
	if (root == NULL)
		return false;
	if (root -> data == x)
		return true;
	else if (searchTree(root -> left, x))
		return true;
	else if (searchTree(root -> right, x))
		return true;
	return false;
}
