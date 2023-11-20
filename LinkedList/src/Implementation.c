#include "Implementation.h"

struct Node* CreateNode() {
    struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
    if(NewNode == NULL){
        printf("%s", "Failed to allocate memory for Node.");
        exit(1);
    }
    return NewNode;
}


void AddToLinkedList(struct LinkedList* list, int value) {
    if(list->Head == NULL){
        list->Head = CreateNode();
        list->Head->Data = value;
    }
}