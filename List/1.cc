/* Given a doubly linked list, a position p and and integer data, add a new node with
   value data at position just after pth node in the doubly linked list.
   E.g.
   Input:
   3
   2 4 5
   2 6
   Output:
   2 4 5 6
*/
#include <bits/stdc++.h>
using namespace std;

struct node {
	int data;
	struct node *prev;
	struct node *next;
};

struct node* initList(struct node *head, int data) {
	struct node *temp1, *temp2;
	temp1 = new node;
	temp1 -> data = data;
	temp1 -> next = NULL;
	temp1 -> prev = NULL;
	// Holds true only when the list was initially empty.
	if (head == NULL)
		return temp1;
	// Else traverse till the last node and then insert in the end.
	else {
		temp2 = head;
		while(temp2 -> next != NULL)
			temp2 = temp2 -> next;
		temp2 -> next = temp1;
		temp1 -> prev = temp2;
		temp1 -> next = NULL;
		return head;
	}
}

void addNode(struct node **head, int pos, int data) {
    struct node *newNode, *pth;
    newNode = new node;
    newNode -> data = data;
    pth = *head;
    int k = 0;
    while (k < pos) {
        k++;
        pth = pth -> next;
    }
    newNode -> next = pth -> next;
    pth -> next = newNode;
    newNode -> prev = pth;
    if (newNode -> next != NULL)
        pth -> next -> prev = newNode;
}

void printList(struct node *head) {
	struct node *temp;
	temp = head;
	while (temp != NULL) {
		cout << temp -> data << ' ';
		temp = temp -> next;
	}
	cout << endl;
}

int main()
{
	int n, pos, x;
	struct node *temp, *head;
	head = NULL;
	cin >> n;
	// If n <= 0, terminate.
	if (!(n > 0)) {
		cout << "Invalid size!\n";
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cin >> x;
		head = initList(head, x);
	}
	cin >> pos >> x;
	// If pos index is out of range, terminate.
	if (pos > (n - 1)) {
		cout << "Pos index out of range!\n";
		return 0;
	}
	addNode(&head, pos, x);

	printList(head);

	// Free the allocated memory space.
	while (head -> next != NULL) {
		temp = head;
		head = head -> next;
		free(temp);
	}
	return 0;
}
