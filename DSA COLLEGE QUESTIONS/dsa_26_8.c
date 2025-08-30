#include <stdio.h>
#include <stdlib.h>

struct Node {
    int age;
    struct Node* next;
};

struct Node* createNode(int age) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(0);
    }
    newNode->age = age;
    newNode->next = NULL;
    return newNode;
}

void displayList(struct Node* head) {
    struct Node* temp = head;
    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d -> ", temp->age);
        temp = temp->next;
    }
    printf("NULL\n");
}

void searchAges(struct Node* head, int a, int b) {
    int foundA = 0, foundB = 0;
    struct Node* temp = head;
    while (temp != NULL) {
        if (temp->age == a) foundA = 1;
        if (temp->age == b) foundB = 1;
        temp = temp->next;
    }
    if (foundA) {
        if (a >= 20 && a <= 30)
            printf("%d is present in the linked list between 20 to 30 range\n", a);
        else
            printf("%d is present but NOT between 20 to 30 range\n", a);
    } else {
        printf("%d is NOT present in the linked list\n", a);
    }

    if (foundB) {
        if (b >= 20 && b <= 30)
            printf("%d is present in the linked list between 20 to 30 range\n", b);
        else
            printf("%d is present but NOT between 20 to 30 range\n", b);
    } else {
        printf("%d is NOT present in the linked list\n", b);
    }
}

void displayN(struct Node* head, int n) {
    int count = 1;
    struct Node* temp = head;
    while (temp != NULL && count < n) {
        temp = temp->next;
        count++;
    }
    if (temp != NULL) {
        printf("%dth element is %d\n", n, temp->age);
    } else {
        printf("%dth element does not exist.\n", n);
    }
}

struct Node* removeTwoLast(struct Node* head) {
    if (head == NULL || head->next == NULL) {
        printf("List does not have enough elements to remove two.\n");
        return head;
    }
    struct Node* temp = head;
    struct Node* prev = NULL;

    while (temp->next != NULL && temp->next->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    // Case: only 2 nodes
    if (prev == NULL) {
        free(head->next);
        free(head);
        return NULL;
    }

    // Free last two nodes
    free(temp->next);
    free(temp);
    prev->next = NULL;

    printf("Last two elements removed.\n");
    return head;
}

void replaceElements(struct Node* head, int val2, int val4) {
    int count = 1;
    struct Node* temp = head;
    while (temp != NULL) {
        if (count == 2) temp->age = val2;
        if (count == 4) temp->age = val4;
        temp = temp->next;
        count++;
    }
    printf("2nd and 4th elements replaced.\n");
}

struct Node* reverse(struct Node* head) {
    struct Node* prev = NULL, *cur = head, *next = NULL;
    while (cur != NULL) {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    printf("List reversed.\n");
    return prev;
}

int main() {
    int n, i, ageInput;
    struct Node* head = NULL, *temp = NULL, *newNode = NULL;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Size of list must be positive.\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("Enter age for node %d: ", i + 1);
        scanf("%d", &ageInput);
        if (ageInput >= 20 && ageInput <= 30) {
            newNode = createNode(ageInput);
            if (head == NULL) {
                head = newNode;
                temp = head;
            } else {
                temp->next = newNode;
                temp = newNode;
            }
        } else {
            printf("Age must be between 20 and 30. Try again.\n");
            i--;
            continue;
        }
    }

    displayList(head);

    int s1, s2;
    printf("Enter two ages to search: ");
    scanf("%d %d", &s1, &s2);
    searchAges(head, s1, s2);

    displayN(head, 3);
    displayN(head, 6);

    head = removeTwoLast(head);
    displayList(head);

    int r1, r2;
    while (1) {
        printf("\nEnter new values for 2nd and 4th elements (20-30 only): ");
        scanf("%d %d", &r1, &r2);
        if (r1 >= 20 && r1 <= 30 && r2 >= 20 && r2 <= 30) {
            break;
        }
        printf("Values must be between 20 and 30.\n");
    }
    replaceElements(head, r1, r2);
    displayList(head);

    head = reverse(head);
    displayList(head);

    // Free memory
    temp = head;
    while (temp != NULL) {
        struct Node* toDelete = temp;
        temp = temp->next;
        free(toDelete);
    }
    return 0;
}
