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
    if(head == NULL) {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while(tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

int get_max(Node *head) {
    if(head == NULL) {
        return -1; // or throw an exception
    }
    int maxVal = head->val;
    Node *tmp = head->next;
    while(tmp != NULL) {
        if(tmp->val > maxVal) {
            maxVal = tmp->val;
        }
        tmp = tmp->next;
    }
    return maxVal;
}

void print_linkedList(Node *head) {
    Node *tmp = head;
    while(tmp != NULL) {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

int main() {
    Node *head = NULL;
    int val;
    cout<<"Enter values:  ";
    while(true){
        cin>>val;
        if(val == -1) {
            break;
        }
        insert_at_tail(head, val);
    }

    cout<<"Max value in the linked list: "<<get_max(head)<<endl;
    cout<<"Linked list elements: ";
    print_linkedList(head);
    cout<<endl;
    return 0;
}