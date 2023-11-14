#include <stdio.h>

struct Node {
    void* Data;
    struct Node* Next;
};

struct LinkedList {
    struct Node* Head;
};

