#include <iostream>
using namespace std;

// Node class definition
class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Function to insert a node at the tail
void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

// Function to calculate the size of a linked list
int get_size(Node* head) {
    int size = 0;
    Node* temp = head;
    while (temp != NULL) {
        size++;
        temp = temp->next;
    }
    return size;
}

// Function to print a linked list
void print_linked_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head1 = NULL;
    Node* tail1 = NULL;

    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val;

    // Input for the first linked list
    cout << "Enter values for the first linked list (-1 to end):" << endl;
    while (cin >> val && val != -1) {
        insert_at_tail(head1, tail1, val);
    }

    // Input for the second linked list
    cout << "Enter values for the second linked list (-1 to end):" << endl;
    while (cin >> val && val != -1) {
        insert_at_tail(head2, tail2, val);
    }

    // Compare sizes of the two linked lists
    int size1 = get_size(head1);
    int size2 = get_size(head2);

    if (size1 == size2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
