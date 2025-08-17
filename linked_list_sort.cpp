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
    while(tmp->next!=NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

// void print_linked_list(Node *head) {
//     Node *tmp = head;
//     while(tmp != NULL) {
//         cout<<tmp->val<<" ";
//         tmp = tmp->next;
//     }
//     cout<<endl;
// }

void sort_desc(Node *head) {
    for(Node *i=head; i && i->next; i=i->next) {
        for(Node *j=i->next; j; j=j->next) {
            if(i->val < j->val) {
                swap(i->val,j->val);
            }
        }
    }
}

// void print_recursion(Node *head){
//     if (head == NULL) {
//         return;
//     }
//     cout<<head->val<<" ";
//     print_recursion(head->next);
// }

void print_linked_list(Node *head) {
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
    cout<<"Enter value: ";
    while (true)
    {
        cin >> val;
        if(val == -1) {
            break;
        }
        insert_at_tail(head, val);  
    }
    sort_desc(head);
    print_linked_list(head);

    return 0;
}