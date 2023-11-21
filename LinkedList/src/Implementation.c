#include "Implementation.h"

struct Node* CreateNode() {
    struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
    if(NewNode == NULL){
        printf("%s", "Failed to allocate memory for Node.");
        exit(1);
    }
    return NewNode;
}

struct LinkedList* CreateLinkedList() {
    struct LinkedList* List = (struct LinkedList*)malloc(sizeof(struct LinkedList));
    if (List == NULL) {
        printf("%s", "Failed to allocate memory for LinkedList.");
        exit(1);
    }
    return List;
}

void AddToLinkedList(struct LinkedList* list, int value) {
    if (list->Head == NULL) {
        list->Head = CreateNode();
        list->Head->Data = value;
    } else {
        struct Node* CurrentNode = list->Head;
        while (CurrentNode->Next != NULL) {
            CurrentNode = CurrentNode->Next;
        }
        CurrentNode->Next = CreateNode();
        CurrentNode->Next->Data = value;
    }
}
