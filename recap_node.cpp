#include <iostream>
using namespace std;
class Node {
    public:
        int val;
       Node* next;
       Node (int val) {
        this->val=val;
        this->next=NULL;
       }
};
void print_linked_list(Node *head){
    Node* tmp = head;
    while (tmp != NULL) {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
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
int size(Node *head) {
    Node *tmp = head;
    int count = 0;
    while(tmp != NULL) {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void insert_at_head(Node *&head, int val) {
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head ,Node *tail ,int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;

}

int main() {
    Node* head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *tail = e;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    print_linked_list(head);
    // insert_any_position(head,2,100);
    // cout<<"Inserted at position"<<endl;
    int pos, val;
    cin>>pos>>val;
    if (pos>size(head)) {
        cout<<"Invalid index"<<endl;
    } else if (pos == 0) {
        insert_at_head(head, val);
    } else if (pos == size(head)) {
        insert_at_tail(head,tail,val);
    } else {
        insert_any_position(head, pos, val);
    }
    print_linked_list(head);
    cout<<"Tail is := "<<tail->val<<endl;

    return 0;
}