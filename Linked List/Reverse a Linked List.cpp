#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;               // The data value in the node
    ListNode* next;        // Pointer to the next node

    // Constructor to initialize a node
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    // Function to reverse the linked list
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;     // Initially no previous node
        ListNode* curr = head;     // Start from the head node

        while (curr != NULL) {
            ListNode* nextNode = curr->next; // Save next node
            curr->next = prev;               // Reverse the link
            prev = curr;                     // Move prev to curr
            curr = nextNode;                 // Move curr to next node
        }

        return prev;  // New head of the reversed list
    }
};

// Helper function to print a linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Main function to test the reversal
int main() {
    // Create a simple linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original list: ";
    printList(head);

    // Reverse the list
    Solution sol;
    ListNode* reversedHead = sol.reverseList(head);

    cout << "Reversed list: ";
    printList(reversedHead);

    return 0;
}
