/*
    Author: CWN221
    Date: 5/03/2025
    RegNo: BSE-01-0032/2024
    Description: C program to describe Stack in DSA
*/

#include <stdio.h>
#define Max 10

int count = 0;

//Create a stack
typedef struct stack {
	int top;
	int size[Max];
}st;

//Create an empty stack
void createEmpty(st *s) {
	s-> top = -1;
}

//Check if stack is empty
int checkEmpty(st *s) {
	if (s-> top == -1) {
		return 1;
	} else {
		return 0;
	}
} 

//Check if stack is full
int checkFull(st *s) {
	if (s-> top == Max - 1) {
		return 1;
	} else {
		return 0;
	}
}

//Adding elements
void add(st *s, int no) {
	if (checkFull(s)) {
		printf("Stack is full.");
	} else {
		s-> top++;
		s-> size[s->top] = no;
	}
	count++;
}

//Removing elements
void removeStack(st *s) {
	if (checkEmpty(s)) {
		printf("Stack is empty.\n");
	} else {
		printf("Element removed: %d\n", s-> size[s-> top]);
		s-> top--;
		count--;
	}
}

//Printing stack
void printStack(st *s) {
	int i;
	if (checkEmpty(s)) {
		printf("Stack is empty.\n");
		return;
	}
	
	for (i = 0; i < count; i++) {
		printf("%d ", s-> size[i]);
	}
	printf("\n");
}

int main() {
	st s;
	
	//Create Elements
	createEmpty(&s);
	//Push
	printf("New Elements: \n");
	add(&s, 1);
	add(&s, 2);
	add(&s, 3);
	add(&s, 4);
	
	//Print stack
	printStack(&s);
	
	//Pop
	removeStack(&s);
	
	//Print new elements after pop
	printf("\nNew elements after popping: \n");
	printStack(&s);
	
	//Adding new elements
	add(&s, 4);
	add(&s, 5);
	add(&s, 6);
	//Printing new elements after push
	printf("New elements after pushing: \n");
	printStack(&s);
		
	return 0;
}