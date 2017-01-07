/* Print the postorder traversal of a binary tree without using recursion */

/* A binary tree node has data, pointer to left child and a pointer to right child  
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
*/

// Using one stack (More complex) -- Source: Karumanchi (DS & Algos Made Easy)
void postOrderNonRecursive(struct Node* root) {
	stack<struct Node*> S;
	while (1) {
		if (root) {
			S.push(root);
			root = root -> left;
		}
		else {
			if (S.empty())
				return;
			else if (S.top -> right == NULL) {
				cout << S.top() -> data << ' ';
				S.pop();
			}
			if (root == S.top() -> right) {
				cout << S.top() -> data << ' ';
				S.pop();
			}
		}
		if (!S.empty())
			root = S.top() -> right;
		else
			root = NULL;
	}
}

// Using two stacks (Less complex) -- Source: geekforgeeks.com
void postOrderNonRecursive(struct Node* root) {
	stack<struct Node*> S1;
	stack<struct Node*> S2;
	
	S1.push(root);
	struct Node* node;
	while (!S1.empty()) {
		node = S1.top();
		S2.push(S1.top());
		S1.pop();
		if (node -> left)
			S1.push(node -> left);
		if (node -> right)
			S1.push(node -> right);
	}
	// Print all elements of Stack 2
	while(!S2.empty()) {
		cout << S2.top() -> data<< ' ';
		S2.pop();
	}
}
