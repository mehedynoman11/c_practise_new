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

void print_linked_list(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout<<temp->val<<" "; 
        temp = temp->next;
    }
    cout<<endl;
}

int get_max(Node *head) {
    if (head == NULL) {
        return -1;
    }
    int max_value = head->val;
    Node *tmp = head->next;
    while(tmp != NULL) {
        if(tmp->val > max_value) {
            max_value = tmp->val;
        }
        tmp = tmp->next;
    }
    return max_value;
}

int get_min(Node *head) {
    if(head == NULL) {
        return -1;
    }
    int min_value = head -> val;
    Node *tmp = head->next;
    while(tmp != NULL) {
        if(tmp->val < min_value) {
            min_value = tmp->val;
        }
        tmp = tmp -> next;
    }
    return min_value;
}

int main() {
    Node *head = NULL;
    int val;
    cout<<"Enter a value: "<<endl;
    while(true) {
        cin>>val;
        if(val == -1) {
            break;
        }
        insert_at_tail(head, val);
    }
    print_linked_list(head);
    cout<<"Max value: "<<get_max(head)<<endl;
    cout<<"Min value: "<<get_min(head)<<endl;

    return 0;
}