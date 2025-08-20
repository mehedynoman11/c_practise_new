#include <iostream>
#include <vector>
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

void insert_at_tail(Node *&head,Node *&tail , int val) {
    Node *newNode = new Node(val);
    if(head == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
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
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    Node *head = NULL, *tail = NULL;
    vector<int> values;
    int val;

    while (cin >> val && val != -1) {
        insert_at_tail(head, tail, val);
        values.push_back(val);  // save values for reverse
    }

    //* print reverse
    for(int i = values.size() - 1;i >= 0; i--) {
        cout << values[i] << " ";
    }
    cout<<endl;

    print_linked_list(head);

    return 0;
}