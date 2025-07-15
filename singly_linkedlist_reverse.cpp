#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print_recursive(Node *head) {
    if (head == NULL) {
        return;
    }
    print_recursive(head->next);
    cout<<head->val<<" ";
}

int main() {
    Node *head = NULL;
    int val;
    while(true) {
        cout << "Enter a value to insert (-1 to stop): ";
        cin>>val;
        if (val == -1) {
            break;
        }
        insert_at_tail(head, val);
    }
    print_recursive(head);


    return 0;
}