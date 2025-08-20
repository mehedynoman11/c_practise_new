#include <iostream>
#include <stack>
using namespace std;

class Node {
public:
    long long val;
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

void print_reverse(Node *head) {
    stack<long long> st;
    Node *tmp = head;
    while (tmp != NULL) {
        st.push(tmp->val);
        tmp = tmp->next;
    }
    while (!st.empty()) {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

void print_linked_list(Node *head){
    Node *tmp = head;
    while(tmp != NULL) {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

// void print_reverse(Node *head) {
//     for(Node *i=head;i != NULL; i=i->next) {
//         for(Node *j = i->next; j != NULL; j=j->next) {
//             if(i->val <= j->val) {
//                 swap(i->val, j->val);
//             }
//         }
//     }
// }

int main() {
    Node *head = NULL;
    long long val;   
    while(true) {
        cin>>val;
        if(val == -1) {
            break;
        }
        insert_at_tail(head, val);
    }
    print_reverse(head);
    print_linked_list(head);

    return 0;
}