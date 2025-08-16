#include <stdio.h>
#define MAX 5   // Maximum size of queue

int queue[MAX];
int front = -1, rear = -1;

// Function to insert element in queue
void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue Overflow! Cannot insert %d\n", value);
    } else {
        if (front == -1) front = 0; // First element
        rear++;
        queue[rear] = value;
        printf("%d inserted into queue\n", value);
    }
}

// Function to delete element from queue
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! No element to delete\n");
    } else {
        printf("%d deleted from queue\n", queue[front]);
        front++;
    }
}

// Function to display queue
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements are: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    enqueue(40);
    enqueue(50);
    enqueue(60); // Overflow
    display();

    return 0;
}
