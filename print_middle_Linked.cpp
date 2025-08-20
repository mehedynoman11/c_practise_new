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
    while (tmp->next != NULL) {
        tmp = tmp->next;
    } 
    tmp->next = newNode;
}

int get_size(Node *head) {
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL) {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void sort_list(Node *head){
    for(Node *i = head;i != NULL;i = i->next) {
        for(Node *j=i->next; j != NULL; j= j->next) {
            if (i->val < j->val) {
                swap(i->val, j->val);
            }
        }
    }
}

void print_middle(Node *head) {
    Node *tmp = head;
    int size = get_size(head);
    int middle1 = size / 2;
    int middle2 = (size % 2 == 0) ? middle1 - 1 : middle1;
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

int main() {
    Node *head = NULL;
    int val;
    while(true) {
        cin>>val;
        if(val == -1) {
            break;
        }
        insert_at_tail(head, val);
    }
    sort_list(head);
    print_middle(head);
    return 0;
}