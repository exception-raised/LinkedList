#include <stdlib.h>
#include <stdio.h>

struct Node {
    int Data;
    struct Node* Next;
};

struct LinkedList {
    struct Node* Head;
};

typedef struct LinkedList* LinkedList;
typedef struct Node* Node;

struct LinkedList* CreateLinkedList();
struct Node* CreateNode();
void AddToLinkedList(struct LinkedList* list, int value);

