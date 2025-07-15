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
void insert_at_tail(Node*& head, Node*& tail, int val){
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linked_list(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

void insert_any_position(Node* head, int pos, int val) {
    Node *newNode = new Node(val);
    Node* tmp = head;
    for(int i=0;i<pos-1;i++) {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void insert_at_head(Node *head, int val){
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;

}
int main() {
    // Node* head = NULL;
    // Node* tail = NULL;
    // int val, pos;
    // while (true) {
    //     cin>>val;
    //     if(val==-1){
    //         break;
    //     }
    //     insert_at_tail(head,tail,val);
    // }
    // print_linked_list(head);
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
    cout<<"Enter a position"<<endl;
    cin>>pos;
    cout<<"Enter a position"<<endl;
    cin>>val;
    if (pos > sizeof(head)) {
        cout<<"Invalid index"<<endl;
    } else if (pos == 1) {
        insert_at_head(head, val); 
    }
    else {    
        insert_any_position(head, pos, val);
    }
    print_linked_list(head);
    return 0;
}