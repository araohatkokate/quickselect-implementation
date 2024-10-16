#include <stdio.h>
#define MAX 6

typedef struct Queue {
    int arr[MAX];
    int front, rear;
} Queue;

void enqueue(Queue* queue, int value) {
    if ((queue->rear + 1) % MAX == queue->front) {
        printf("Queue overflow\n");
        return;
    }
    queue->rear = (queue->rear + 1) % MAX;
    queue->arr[queue->rear] = value;
}

int dequeue(Queue* queue) {
    if (queue->front == queue->rear) {
        printf("Queue underflow\n");
        return -1;
    }
    queue->front = (queue->front + 1) % MAX;
    return queue->arr[queue->front];
}

int main() {
    Queue queue;
    queue.front = queue.rear = 0;

    enqueue(&queue, 4);
    enqueue(&queue, 1);
    enqueue(&queue, 3);
    printf("Dequeued: %d\n", dequeue(&queue));
    enqueue(&queue, 8);
    printf("Dequeued: %d\n", dequeue(&queue));

    return 0;
}
