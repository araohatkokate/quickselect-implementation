#include <stdio.h>
#define MAX 6

typedef struct Stack {
    int arr[MAX];
    int top;
} Stack;

void push(Stack* stack, int value) {
    if (stack->top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack->arr[++stack->top] = value;
}

int pop(Stack* stack) {
    if (stack->top == -1) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

int peek(Stack* stack) {
    if (stack->top == -1) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack->arr[stack->top];
}

int main() {
    Stack stack;
    stack.top = -1;

    push(&stack, 4);
    push(&stack, 1);
    push(&stack, 3);
    printf("Top element: %d\n", peek(&stack));
    pop(&stack);
    printf("Top element after pop: %d\n", peek(&stack));

    return 0;
}
