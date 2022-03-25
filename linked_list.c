#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

/**
 * Creates a new node
 */
Node* create_node (int value, Node *next) {
	Node* ptr = (Node*) malloc(sizeof(Node));
	ptr->value = value;
	ptr->next = next;

	return ptr;
}

/**
 * Creates a new linked list
 */
LinkedList* create_linked_list () {
	LinkedList* list = (LinkedList*) malloc(sizeof(LinkedList));	
	list->head = NULL;
	list->tail = NULL;
	return list;
}

/**
 * Inserts a node containing the given value at the beginning of the list
 */
void push (LinkedList* list, int value) {
	if (list->head == NULL) {
		list->head = create_node(value, NULL);		
		list->tail = list->head;
		return;
	}

	list->head = create_node(value, list->head);
	return;
}

/**
 * Inserts a node containing the given value at the end of the list
 */
void add (LinkedList* list, int value) {
	if (list->head == NULL) {
		list->head = create_node(value, NULL);
		list->tail = list->head;
		return;
	}

	list->tail->next = create_node(value, NULL);
	list->tail = list->tail->next;
	return;
}

// Node* pop (LinkedList* list) {
// 	// if list is empty
// 	if (list->head == NULL) {
// 		return NULL;
// 	}	
// 
// 	// if list is not empty then we will return the current head
// 	// so go ahead and save it here
// 	Node* node_to_return = list->head;
// 
// 	// if there is only one node in the list
// 	if (list->head == list->tail) {
// 		list->head = NULL;
// 		list->tail = NULL;
// 		return node_to_return;
// 	}
// 
// 	// if there is more than one node
// 	list->head = list->head->next;
// 	return node_to_return;
// 
// }

