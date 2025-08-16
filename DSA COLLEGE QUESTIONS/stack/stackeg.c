#include <stdio.h>
#define MAX 5   // Maximum size of stack

int stack[MAX];
int top = -1;   // Initially stack is empty

// Function to push element into stack
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed into stack\n", value);
    }
}

// Function to pop element from stack
void pop() {
    if (top == -1) {
        printf("Stack Underflow! No element to pop\n");
    } else {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

// Function to display stack elements
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    // Example usage of stack
    push(10);
    push(20);
    push(30);
    display();

    pop();
    display();

    push(40);
    push(50);
    push(60); // This will show overflow
    display();

    return 0;
}
