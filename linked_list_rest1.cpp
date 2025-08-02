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
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

int get_size(Node *head) {
    int count = 0;
    Node *temp = head;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void print_middle(Node* head) {
    int size = get_size(head);
    int middle1 = size / 2;
    int middle2 = (size % 2 == 0) ? middle1 - 1 : middle1;

    Node *tmp = head;
    int index = 0;

    while (tmp != NULL) {
        if (index == middle2 || index == middle1) {
            cout<<tmp->val<<" ";
        }
        index++;
        tmp = tmp->next;
    }
    cout<<endl;

} 
// #strsda

int main() {
    Node *head = NULL;
    int val;
    cout<<"ENTER VALUES -1 to STOP: ";
    while(true) {
        cin>>val;
        if(val == -1) break;
        insert_at_tail(head, val);
    }
    // cout<<"SIZE OF LINKED LIST: "<<get_size(head)<<endl;
    print_middle(head); 

    return 0;
}