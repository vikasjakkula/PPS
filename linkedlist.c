#include <stdio.h>
#include <stdlib.h>


// Node (single element of list) definition
typedef struct Node {
    int data;             // data (value stored)
    struct Node* next;    // next (pointer → next node)
} Node;

// createNode: allocate memory and return new node
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node)); // malloc (allocate memory)
    
    newNode->data = value;   // set value
    newNode->next = NULL;    // next = NULL (no next node)
    return newNode;
}

// insertAtBeginning: add node at start; head (first node pointer)
void insertAtBeginning(Node** headRef, int value) {
    Node* newNode = createNode(value);
    newNode->next = *headRef; // link newNode->next to old head
    *headRef = newNode;       // head = newNode
}

// insertAtEnd: add node at tail (last node)
void insertAtEnd(Node** headRef, int value) {
    Node* newNode = createNode(value);
    if (*headRef == NULL) {     // empty list
        *headRef = newNode;
        return;
    }
    Node* temp = *headRef;
    while (temp->next != NULL)  // traverse (walk through nodes)
        temp = temp->next;
    temp->next = newNode;       // link last node to new node
}

// insertAfter: insert new node after node with key (value)
int insertAfter(Node* head, int key, int value) {
    Node* temp = head;
    while (temp != NULL && temp->data != key)
        temp = temp->next;
    if (temp == NULL) return 0; // key not found
    Node* newNode = createNode(value);
    newNode->next = temp->next;
    temp->next = newNode;
    return 1; // success
}

// deleteNode: delete first node with given key (value)
int deleteNode(Node** headRef, int key) {
    Node* temp = *headRef;
    Node* prev = NULL;
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return 0; // not found
    if (prev == NULL) {         // deleting head
        *headRef = temp->next;
    } else {
        prev->next = temp->next; // bypass temp
    }
    free(temp); // free memory
    return 1; // success
}

// search: return 1 if key found, else 0
int search(Node* head, int key) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == key) return 1;
        temp = temp->next;
    }
    return 0;
}

// countNodes: return number of nodes
int countNodes(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// reverseList: reverse pointers so tail becomes head
void reverseList(Node** headRef) {
    Node* prev = NULL;
    Node* curr = *headRef;
    Node* next = NULL;
    while (curr != NULL) {
        next = curr->next;   // store next
        curr->next = prev;   // reverse pointer
        prev = curr;         // move prev forward
        curr = next;         // move curr forward
    }
    *headRef = prev;         // new head
}

// printList: display nodes from head to tail; NULL shows end
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// freeList: free all nodes to avoid memory leak
void freeList(Node** headRef) {
    Node* curr = *headRef;
    Node* next;
    while (curr != NULL) {
        next = curr->next;
        free(curr);
        curr = next;
    }
    *headRef = NULL;
}

// Demo usage
int main() {
    Node* head = NULL; // head (pointer to first node)

    insertAtEnd(&head, 10);        // list: 10
    insertAtBeginning(&head, 5);   // list: 5 -> 10
    insertAtEnd(&head, 20);        // list: 5 -> 10 -> 20
    insertAfter(head, 10, 15);     // insert 15 after 10 -> 5 -> 10 -> 15 -> 20

    printf("List: ");
    printList(head);               // print list

    printf("Count (number of nodes): %d\n", countNodes(head)); // count

    printf("Search 15: %s\n", search(head, 15) ? "Found" : "Not Found"); // search

    deleteNode(&head, 10);         // delete node with value 10
    printf("After deleting 10: ");
    printList(head);

    reverseList(&head);            // reverse list
    printf("Reversed: ");
    printList(head);

    freeList(&head);               // cleanup
    printf("After freeing: ");
    printList(head);               // should print NULL

    return 0;
}
