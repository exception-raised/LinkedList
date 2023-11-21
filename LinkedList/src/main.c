#include <stdio.h>
#include "Implementation.h"

int main(){
    printf("%s", "Hello, World!\n");


    struct LinkedList* List = CreateLinkedList();
    AddToLinkedList(List, 20);
    AddToLinkedList(List, 30);

    printf("%d\n", List->Head->Data);
    printf("%d\n", List->Head->Next->Data);
    return 0;
}