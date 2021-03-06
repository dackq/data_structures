/********************************************************
 * file name   : linked_list.h                          *
 * author      : Dakota Reed                            *
 * description : Header file for linked_list.c          *
 *                                                      *
 *******************************************************/

typedef struct Node {
	int value;
	struct Node *next;
} Node;

typedef struct {
	Node *head;
	Node *tail;
	int length;
} LinkedList;

Node* create_node (int value, Node *next);

LinkedList* create_linked_list ();

void push (LinkedList *list, int value);

Node* pop (LinkedList *list);
