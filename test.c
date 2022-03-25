#include <stdio.h>
#include "linked_list.h"

int main () {
	LinkedList *list = create_linked_list ();
	push (list, 1);
	push (list, 2);

	Node* current = list->head;

	while (current != NULL) {
		printf("%d\n", current->value);
		current = current->next;	
	}
}
