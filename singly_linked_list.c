#include <stdio.h>
#define MAX 6

typedef struct Node {
    int data;
    int next; // Holds the index of the next element in the array
} Node;

typedef struct SinglyLinkedList {
    Node list[MAX];
    int head;
    int free; // Points to the next available index in the array
} SinglyLinkedList;

void initList(SinglyLinkedList* ll) {
    ll->head = -1;
    ll->free = 0;
    for (int i = 0; i < MAX - 1; i++) {
        ll->list[i].next = i + 1;
    }
    ll->list[MAX - 1].next = -1; // Last element
}

void insertFront(SinglyLinkedList* ll, int value) {
    if (ll->free == -1) {
        printf("List is full\n");
        return;
    }

    int new_index = ll->free;
    ll->free = ll->list[new_index].next;

    ll->list[new_index].data = value;
    ll->list[new_index].next = ll->head;
    ll->head = new_index;
}

void deleteFront(SinglyLinkedList* ll) {
    if (ll->head == -1) {
        printf("List is empty\n");
        return;
    }

    int temp = ll->head;
    ll->head = ll->list[ll->head].next;

    ll->list[temp].next = ll->free;
    ll->free = temp;
}

void printList(SinglyLinkedList* ll) {
    int current = ll->head;
    while (current != -1) {
        printf("%d -> ", ll->list[current].data);
        current = ll->list[current].next;
    }
    printf("NULL\n");
}

int main() {
    SinglyLinkedList ll;
    initList(&ll);

    insertFront(&ll, 4);
    insertFront(&ll, 1);
    insertFront(&ll, 3);
    printList(&ll);

    deleteFront(&ll);
    printList(&ll);

    return 0;
}
