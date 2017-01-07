/* Print the inorder traversal of a binary tree without using recursion */

/* A binary tree node has data, pointer to left child and a pointer to right child  
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
*/
void inOrderNonRecursive(struct Node* root) {
	stack<struct Node*> S;
	while (1) {
		while (root) {
			S.push(root);
			root = root -> left;
		}
		if (S.empty())
			break;
		root = S.top();
		S.pop();
		cout << root -> data << ' ';
		root = root -> right;
	}
}
