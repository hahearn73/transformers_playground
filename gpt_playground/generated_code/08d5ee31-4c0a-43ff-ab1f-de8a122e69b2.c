#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct ListNode {
    int value;
    struct ListNode* next;
};

// Function to reverse a linked list
struct ListNode* reverseLinkedList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* current = head;
    struct ListNode* next = NULL;

    while (current != NULL) {
        // Store next node
        next = current->next;
        // Reverse current node's pointer
        current->next = prev;
        // Move pointers one position ahead
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

// Helper function to print the linked list
void printLinkedList(struct ListNode* head) {
    struct ListNode* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

// Helper function to create a new ListNode
struct ListNode* newNode(int value) {
    struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    temp->value = value;
    temp->next = NULL;
    return temp;
}

int main() {
    // Example usage
    struct ListNode* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);

    printf("Original list: ");
    printLinkedList(head);

    head = reverseLinkedList(head);

    printf("Reversed list: ");
    printLinkedList(head);

    return 0;
}