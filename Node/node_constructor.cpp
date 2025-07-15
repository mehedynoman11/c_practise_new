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
int main() {
    // Node a, b;
    // a.val = 10;
    // b.val = 20;
    Node a(10);
    Node b(20);

    a.next = &b;

    cout<<a.val<<endl;
    cout<<a.next->val<<endl;
    cout<<(*a.next).val<<endl;


    return 0;
}