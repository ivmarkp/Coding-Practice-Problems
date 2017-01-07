/* Given a Binary Tree, print the largest element in the tree. */

/* Binary tree's node structure
struct Node {
	int data;
	struct Node* left;
	struct Node* right;
};
*/

int largestElement(struct Node* node) {
	if (node == NULL)
		return -1;
	int root = node -> data;
	int left = largestElement(node -> left);
	int right = largestElement(node -> right);
	// Return the largest among root data, left subtree's largest element and right
	// subtree's largest element.
	int max = -1;
	if (left > right)
		max = left;
	else
		max = right;
	if (root > max)
		max = root;
	return max;
}
