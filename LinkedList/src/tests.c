#include <criterion/criterion.h>
#include "Implementation.h"

LinkedList List = NULL;

void test_init(void){
    List = CreateLinkedList(0);
}

TestSuite(LinkedList, .init=test_init);

Test(LinkedList, creating_a_list) {
    cr_expect(List != NULL && List->Head != NULL, "CreateLinkedList returned NULL.");
}

Test(LinkedList, adding_to_list) {
    AddToLinkedList(List, 20);
    cr_expect(List->Head->Next != NULL && List->Head->Next->Data == 20, "AddToLinked failed or returned unexpected value.");
}

Test(LinkedList, size_of_list) {
    int ListSize = SizeOfList(List);
    cr_expect(ListSize != -1, "Unexpected List Size.");
}


Test(LinkedList, find_value_in_list) {
    struct LinkedTuple Value = Find(List, 0);
    cr_expect(Value.Index != -1, "Failed to find expected value.");
}

Test(LinkedList, is_empty) {
    cr_expect(IsEmpty(List) == false, "IsEmpty returned true.");
}


Test(LinkedList, destroying_a_list) {
    DestroyList(List);
    List = NULL;
    cr_expect(List == NULL, "List should be NULL after destruction.");
}
