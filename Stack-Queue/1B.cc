/* Implement a stack's push and pop operations using a linked list. */

/*
The structure of the node of the stack is
struct StackNode {
    int data;
    StackNode *next;
};

and, the structure of the Stack class is
class Stack {
	private:
		StackNode *top;
	public :
		void push(int);
		int pop();
};
*/
// Push method to insert an element into the stack.
void Stack :: push(int x) {
    StackNode *temp;
    temp = new StackNode;
    temp -> data = x;
    temp -> next = top;
    top = temp;
}

// Pop method to delete an element and return it.
int Stack :: pop() {
    if (top == NULL)
        return -1;
    StackNode *temp;
    temp = new StackNode;
    temp = top;
    top = top -> next;
    return (temp -> data);
}
