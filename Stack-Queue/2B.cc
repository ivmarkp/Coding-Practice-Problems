/* Implement a queue's enqueue and dequeue operations using a linked list. */

/* 
The structure of the node of the queue is
struct QueueNode {
    int data;
    QueueNode *next;
};
and, the structure of the class is
class Queue {
	private:
		QueueNode *front;
		QueueNode *rear;
	public :
		void enqueue(int);
		int dequeue();
};
*/

// Enqueue method to insert an element into the queue
void Queue:: enqueue(int x) {
    QueueNode *temp = new QueueNode;
    temp -> data = x;
    temp -> next = NULL;
    if (rear)
    	rear -> next = temp;
    rear = temp;
    if (front == NULL)
    	front = rear;
}

// Dequeue method which returns the element removed from the queue
int Queue :: dequeue() {
    if (front == NULL)
        return -1;
    int data = front -> data;
    front = front -> next;
    if (front == NULL)
    	rear = NULL;
    return data;
}
