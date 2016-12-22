/* Print the level order traversal of a binary tree */

/* A binary tree node has data, pointer to left child and a pointer to right child  
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// Prints $ after printing each level. E.g. 10 $ 20 30 $ 40 60 $
void levelOrder(struct Node* node) {
    if (node == NULL)
        return;
    queue<Node*> q;
    q.push (node);
    int n = 0;
    while (!q.empty()) {
        int qsize = q.size();
        while (qsize--) {
            cout << q.front() -> data << ' ';
            if (q.front() -> left)
                q.push(q.front() -> left);
            if (q.front() -> right)
                q.push(q.front() -> right);
            q.pop();
        }
        cout << "$ ";
    }
}
