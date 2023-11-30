#include "Implementation.h"

Node CreateNode() {
    Node NewNode = (Node)malloc(sizeof(Node));
    if(NewNode == NULL){
        printf("%s", "Failed to allocate memory for Node.");
        exit(1);
    }
    return NewNode;
}

LinkedList CreateLinkedList(int value) {
    LinkedList List = (LinkedList)malloc(sizeof(LinkedList));
    if (List == NULL) {
        printf("%s", "Failed to allocate memory for LinkedList.");
        exit(1);
    }
    List->Head = CreateNode();
    List->Head->Data = value;
    return List;
}

void AddToLinkedList(LinkedList list, int value) {
    if (IsEmpty(list)) {
        printf("%s\n", "Cannot remove Node from empty list.");
        return;
    }
    Node CurrentNode = list->Head;
    while (CurrentNode->Next != NULL) {
        CurrentNode = CurrentNode->Next;
    }
    CurrentNode->Next = CreateNode();
    CurrentNode->Next->Data = value;
}

void InsertFront(LinkedList list, int value){
    if (IsEmpty(list)) {
        printf("%s\n", "Cannot remove Node from empty list.");
        return;
    }

    list->Head = CreateNode();
    list->Head->Data = value;
}

void DeleteFromEndOfList(LinkedList list) {
    if (IsEmpty(list)) {
        // Handle empty list
        printf("%s\n", "Cannot remove Node from empty list.");
        return;
    }

    Node CurrentNode = list->Head;
    Node PreviousNode = NULL;

    while (CurrentNode->Next != NULL) {
        PreviousNode = CurrentNode;
        CurrentNode = CurrentNode->Next;
    }

    // If previous is still NULL, it means there is only one node in the list
    if (PreviousNode == NULL) {
        free(list->Head);
        list->Head = NULL;
    } else {
        free(PreviousNode->Next);
        PreviousNode->Next = NULL;
    }
}

bool IsEmpty(LinkedList list){
    if(list == NULL || list->Head == NULL){
        return true;
    }
    return false;
}

struct LinkedTuple Find(LinkedList list, int value){
    struct LinkedTuple result;
    result.Index = -1;
    result.Node = NULL;
    if(IsEmpty(list)){
        printf("%s\n", "Invalid List.");
        return result;
    }
    Node CurrentNode = list->Head;
    int index = 0;
    while(CurrentNode != NULL){
        if(CurrentNode->Data == value){
            result.Node = CurrentNode;
            result.Index = index;
            return result;
        }
        CurrentNode = CurrentNode->Next;
        index++;
    }

    return result;
}

int SizeOfList(LinkedList list){
    if(IsEmpty(list)){
        printf("%s\n", "Invalid List.");
    }
    int result = 1; // We already know the Head exists. Counting it twice is redundant.
    Node CurrentNode = list->Head->Next;
    while(CurrentNode != NULL){
        CurrentNode = CurrentNode->Next;
        result++;
    }
    return result;
}