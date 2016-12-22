/* Implement a queue's enqueue and dequeue operations using an array.

Note: For implementing queue, we need to keep track of two indices, front and rear. We
enqueue an item at the rear and dequeue an item from front. If we simply increment front
and rear indices, then there may be problems, front may reach end of the array. A More 
efficient way is to increase front and rear in circular manner i.e. use a circular array.
*/

/*
The structure of the Queue class is
class Queue {
	private:
		int max_size;
		int arr[max_size];
		int front;
		int rear;
	public :
		Queue(int size) { front = 0; max_size = size; rear = max_size - 1; };
		void enqueue(int);
		int dequeue();
};
*/
// Enqueue method to insert element into the queue.
void Queue :: enqueue(int x) {
    if ((rear + 1) % max_size == front) {
    	cout << "Queue Overflow\n";
    	return;
	}
	rear = (rear + 1) % max_size;
	arr[rear] = x;
	// Set front = rear after inserting the first element.
	if (front == 0)
		front = rear;
}

// Dequeue method which returns the element removed from the queue.
int Queue :: dequeue() {
	int data;
	// If queue is empty, return -1;
	if (front == 0)
		return -1
    if (front == rear) {
    	data = arr[front];
        front = rear = 0;
        return data;
    }
    data = arr[front];
    front = (front + 1) % max_size;
    return data;
}
