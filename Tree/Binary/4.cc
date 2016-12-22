/* Write a function to insert a given element in a binary tree. */

/* Binary tree's node structure
struct Node {
	int data;
	struct Node* left;
	struct Node* right;
};
*/
// Since we have just a binary tree (not BST, AVL trees etc.) we can insert we find the
// node whose left or right child is NULL -- ue level order traversal to find that node.
void insertInTree(struct Node* root, int x) {
	if (root == NULL) {
		root = new Node;
		root -> data = x;
		root -> left = root -> right = NULL;
		return;
	}
	queue<struct Node*> q;
	q.push(root);
	struct Node* temp = new Node;
	while (!q.empty()) {
		if (q.front() -> left == NULL) {
			temp -> data = x;
			q.front() -> left = temp;
			q.pop();
			return;
		}
		else if (q.front() -> right == NULL) {
			temp -> data = x;
			q.front() -> right = temp;
			q.pop();
			return;
		}
		q.push(q.front() -> left);
		q.push(q.front() -> right);
		q.pop();
	}
}
