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
    Node *tmp = head;
    while(tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void print_linkedlist(Node *head) {
    Node *tmp = head;
    while(tmp != NULL) {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

bool compare_list(Node *head1, Node *head2) {
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    while(tmp1 != NULL && tmp2 != NULL) {
        if(tmp1->val != tmp2->val) {
            return false;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    return (tmp1 == NULL && tmp2 == NULL);
}

int main() {
    Node *head1 = NULL;
    Node *head2 = NULL;
    int val;
    while(cin>>val) {
        if(val == -1) {
            break;
        }
        insert_at_tail(head1, val);
    }

    while(cin>>val) {
        if(val == -1) {
            break;
        }
        insert_at_tail(head2, val);
    }
    // print_linkedlist(head);
    if(compare_list(head1, head2)) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    return 0;
}