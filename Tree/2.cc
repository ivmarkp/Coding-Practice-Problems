/* Print the preorder traversal of a binary tree without using recursion */

/* A binary tree node has data, pointer to left child and a pointer to right child  
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
*/
void preOrderNonRecursive(struct Node* root) {
	stack<struct Node*> S;
	while (1) {
		while (root) {
			cout << root -> data << ' ';
			S.push(root);
			root = root -> left;
		}
		if (S.empty())
			break;
		root = S.top();
		S.pop();
		root = root -> right;
	}
}
