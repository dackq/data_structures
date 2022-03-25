#include <stdio.h>
#include "linked_list.h"

void print_list (LinkedList *list) {
	Node* current = list->head;
	int count = 0;

	while (current != NULL) {
		printf("%d: %d\n", count, current->value);
		count++;
		current = current->next;	
	}

	printf("\n");
}

int main () {
	LinkedList *list = create_linked_list ();
	add (list, 1);
	add (list, 2);
	
	print_list (list);

	add_at_index (list, 3, 1);

	print_list (list);

	push (list, 4);

	print_list (list);
}

