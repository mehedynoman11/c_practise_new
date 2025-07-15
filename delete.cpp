#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void print_linked_list(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insert_any_position(Node *head, int pos, int val) {
    Node *newNode = new Node(val);
    Node *tmp = head;
    for(int i=1;i<=pos-1;i++) {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;

    cout<<endl;
}
int size(Node* head) {
    Node* tmp = head;
    int count = 0;
    while(tmp != NULL) {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void insert_head(Node *&head, int val) {
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void delete_node(Node* head, int pos) {
    Node* tmp = head;
    for(int i=1;i<=pos-1;i++) {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void delete_head(Node*& head) {
    Node* deleteHead = head;
    head = head->next;
    delete deleteHead;
}
int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    print_linked_list(head);
    int val, pos;
    cin>>pos;
    // if (pos > size(head)) {
    //     cout<<"Invalid index"<<endl;
    // } else if (pos == 1) {
    //     insert_head(head, val);
    // } else {
    //     // insert_any_position(head, pos, val);
    //     delete_node(head, pos);
    // }
    delete_head(head);
    print_linked_list(head);
    return 0;
}