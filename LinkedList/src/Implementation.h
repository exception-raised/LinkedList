#include <stdlib.h>
#include <stdio.h>

struct Node {
    int Data;
    struct Node* Next;
};

struct LinkedList {
    struct Node* Head;
};

struct LinkedList* CreateLinekdList();
struct Node* CreateNode();
void AddToLinkedList(struct LinkedList* list, int value);

