/* Implement a stack's push and pop operations using an array. */

/*The structure of the Stack class:
class Stack {
	private:
		int arr_size;
		int arr[arr_size];
		int top;
	public:
		Stack() { top = -1; }
		void push(int);
		int pop();
};
*/
// Push method to insert an element into the stack.
void Stack :: push(int x) {
	if (top == arr_size - 1) {
		cout << "Stack Overflow\n";
		return;
	}
	arr[++top] = x;
}

// Pop method to delete an element and return it.
int Stack :: pop() {
    if (top == -1)
        return -1;
    return arr[top--];
}
