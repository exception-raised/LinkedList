#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct Node {
    int Data;
    struct Node* Next;
};

struct LinkedList {
    struct Node* Head;
};

struct LinkedTuple {
    struct Node* Node;
    int Index;
};

typedef struct LinkedList* LinkedList;
typedef struct Node* Node;

LinkedList CreateLinkedList(int value);
Node CreateNode();
void AddToLinkedList(LinkedList list, int value);
void DeleteFromEndOfList(LinkedList list);
bool SanityCheckList(LinkedList list);
struct LinkedTuple Find(LinkedList list, int value);