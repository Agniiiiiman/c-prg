#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Utility: create a node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Insert at end
void insertEnd(Node** head, int data) {
    Node* newNode = createNode(data);
    if (!*head) {
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

// Display linked list
void displayList(Node* head) {
    for (; head; head = head->next)
        printf("%d -> ", head->data);
    printf("NULL\n");
}

// Search element
int searchElement(Node* head, int val) {
    for (; head; head = head->next)
        if (head->data == val) return 1;
    return 0;
}

// Get nth element
void displayNth(Node* head, int n) {
    for (int i = 1; head && i < n; i++) head = head->next;
    if (head) printf("Element at position %d: %d\n", n, head->data);
    else      printf("Position %d not found.\n", n);
}

// Remove 2nd last element
Node* removeSecondLast(Node* head) {
    if (!head || !head->next) return head;   // List too short
    Node* temp = head;
    while (temp->next->next && temp->next->next->next)
        temp = temp->next;
    Node* del = temp->next;
    temp->next = del->next;
    free(del);
    return head;
}

// Replace element at pos
void replaceElement(Node* head, int pos, int val) {
    for (int i = 1; head && i < pos; i++) head = head->next;
    if (head) head->data = val;
}

// Reverse list
Node* reverseList(Node* head) {
    Node *prev = NULL, *cur = head, *next;
    while (cur) {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}

// Free memory
void freeList(Node* head) {
    while (head) {
        Node* temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    Node* head = NULL;
    int n, val;

    printf("Enter size of linked list: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        insertEnd(&head, val);
    }

    printf("\nInitial Linked List:\n");
    displayList(head);

    // 1. Search for two elements
    int s1, s2;
    printf("\nEnter two elements to search (20-30): ");
    scanf("%d %d", &s1, &s2);
    printf("%d %s in the list\n", s1, searchElement(head, s1) ? "is" : "is not");
    printf("%d %s in the list\n", s2, searchElement(head, s2) ? "is" : "is not");

    // 2. Display 3rd and 6th elements
    displayNth(head, 3);
    displayNth(head, 6);

    // 3. Remove 2nd last element
    head = removeSecondLast(head);
    printf("\nList after removing 2nd last element:\n");
    displayList(head);

    // 4. Replace 2nd & 4th elements
    int r1, r2;
    printf("\nEnter two replacement values (20-30): ");
    scanf("%d %d", &r1, &r2);
    replaceElement(head, 2, r1);
    replaceElement(head, 4, r2);
    printf("\nList after replacements:\n");
    displayList(head);

    // 5. Reverse list
    head = reverseList(head);
    printf("\nList after reversing:\n");
    displayList(head);

    freeList(head);
    return 0;
}
