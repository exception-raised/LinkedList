#include "Implementation.h"

Node CreateNode() {
    Node NewNode = (Node)malloc(sizeof(Node));
    if(NewNode == NULL){
        printf("%s", "Failed to allocate memory for Node.");
        exit(1);
    }
    return NewNode;
}

LinkedList CreateLinkedList() {
    LinkedList List = (LinkedList)malloc(sizeof(LinkedList));
    if (List == NULL) {
        printf("%s", "Failed to allocate memory for LinkedList.");
        exit(1);
    }
    return List;
}

void AddToLinkedList(LinkedList list, int value) {
    if (list->Head == NULL) {
        list->Head = CreateNode();
        list->Head->Data = value;
    } else {
        Node CurrentNode = list->Head;
        while (CurrentNode->Next != NULL) {
            CurrentNode = CurrentNode->Next;
        }
        CurrentNode->Next = CreateNode();
        CurrentNode->Next->Data = value;
    }
}
