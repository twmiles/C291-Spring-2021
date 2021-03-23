//This program is supposed to scan 5 ints from the user
//Using those 5 ints, it should construct a linked list of 5 elements
//Then it prints the elements of the list using the PrintList function

//tracy miles
//03/22/21

#include <stdio.h>

struct Node{
	int data;
	struct Node *next;
};

int main(void){
  struct Node* first = NULL;
  struct Node* second = NULL;
  struct Node* third = NULL;
  struct Node* fourth = NULL;
  struct Node* fifth = NULL;


	
	first = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	fourth = (struct Node*)malloc(sizeof(struct Node));
	fifth = (struct Node*)malloc(sizeof(struct Node));

	int i;

	scanf(" %d", &i);
	first->data = i;

	scanf(" %d", &i);
	second->data = i;
	first->next = second;

	scanf(" %d", &i);
	third->data = i;
	second->next = third;

	scanf(" %d", &i);
	fourth->data = i;
	third->next = fourth;

	scanf(" %d", &i);
	fifth->data = i;
	fourth->next = fifth;
	fifth->next = NULL;

	printf("results: ");
	PrintList(first);
}

void PrintList(struct Node* n){
	while(n != NULL){
		printf("%d ", n->data);
		n = n->next;
	}

	printf("\n");
}
