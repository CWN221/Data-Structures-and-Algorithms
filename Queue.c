/*
    Author: CWN221
    Date: 26/02/2025
    RegNo: BSE-01-0032/2024
    Description: C program to describe Queue in DSA
*/

#include <stdio.h>
#define Size 5

int no[Size];
//Set the front and rear to -1
int front = -1, rear = -1;


void enqueue(int newNo) {
	if (rear == Size - 1) {
		printf("Queue is full.\n");
	} else {
		if (front == -1) {
			front = 0;
		}
			rear++;
			no[rear] = newNo;
			printf("Element inserted: %d\n", newNo);	
	}
}

void dequeue() {
	if(front == -1) {
		printf("Queue is empty.\n");
	} else {
		printf("Deleted: %d\n", no[front]);
		front++;
	}
}

void display() {
	int i;
	if(rear == -1) {
		printf("Queue is empty.\n");
	} else {
		for (i = front; i <= rear; i++) {
			printf("%d ", no[i]);
		}
	}
}

int main() {
	
	//Enqueue elements
	printf("..........New elements.......... \n");
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	printf("\nElements: ");
	display();
	
	//Dequeue element
	printf("\n");
	printf("\n..........Dequeue..........\n");
	dequeue();
	printf("New queue after dequeue \n");
	display();
	
	
	return 0;
}


