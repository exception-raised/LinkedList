#include <stdio.h>
#include "Implementation.h"

int main(){
    printf("%s", "Hello, World!\n");


    struct LinkedList* List = CreateLinkedList(0); // Add argument to specify default head node value;
    AddToLinkedList(List, 20);
    AddToLinkedList(List, 30);

    printf("%d\n", List->Head->Data);
    printf("%d\n", List->Head->Next->Data);
    printf("%d\n", List->Head->Next->Next->Data);
    //DeleteFromEndOfList(List);
    printf("%d\n", List->Head->Next->Next == NULL);
    struct LinkedTuple s = Find(List, 30);
    printf("%d\n", s.Index);
    InsertFront(List, 60);
    printf("%d\n", List->Head->Data);

    struct LinkedList* List2 = CreateLinkedList(0);
    AddToLinkedList(List2, 1);
    AddToLinkedList(List2, 2);
    AddToLinkedList(List2, 3);
    printf("Size: %d\n", SizeOfList(List2));
    return 0;
}