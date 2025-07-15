#include <iostream>
using namespace std;
class Node {
    public:
        int val;
        Node* next;
        Node(int val) {
            this->val=val;
            this->next=NULL;
        }
};
void insert_at_tail(Node*& head, int v) {
    Node* newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}
void print_linked_list(Node* head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void insert_at_position(Node* head, int pos, int v) {
    Node* newNode = new Node(v);
    Node* tmp = head;
    for(int i=1;i<=pos-1;i++) {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;

    cout<<endl<<"Inserted at position"<<endl;
}
void insert_at_head(Node* &head,int v) {
    Node* newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}
void delete_from_position(Node* head, int pos) {
    Node* tmp = head;
    for(int i=1;i<=pos-1;i++) {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
int main() {
    Node* head = NULL;
    while (true) {
        cout<<"Option 1: Insert at tail "<<endl;
        cout<<"Option 2: Print linked list "<<endl;
        cout<<"Option 3: Insert at position "<<endl;
        cout<<"Option 4: Insert at Head "<<endl;
        cout<<"Option 5: Delete from node "<<endl;
        cout<<"Option 6: Terminate "<<endl;
        int op;
        cin>>op;
        if (op == 1) {
            int v;
            cout<<"Please enter a value : "<<endl;
            cin>>v;
            insert_at_tail(head, v);
        } else if (op == 2) {
            print_linked_list(head);
        } else if (op == 3) {
            int pos, val;
            cout<<"Enter a Position: ";
            cin>>pos;
            cout<<"Enter a Value: ";
            cin>>val;
            if (pos == 0) {
                insert_at_head(head, val);
            } else {
                insert_at_position(head, pos, val);
            }
        } else if (op == 4) {
            int v;
            cout<<"Please enter a value: "<<endl;
            cin>>v;
            insert_at_head(head,v);
            cout<<"Inserted at head"<<endl;
        } else if (op == 5) {
            int pos;
            cout<<"Enter a position: ";
            cin>>pos;
            delete_from_position(head, pos);
        } else if (op == 6) {
            break;
        }
    }

    return 0;
}