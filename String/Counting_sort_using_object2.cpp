#include <iostream>
#include <algorithm>
using namespace std;
class ClsObjectSort {
    public:
        char C;
        int cnt;
};
bool cmp(ClsObjectSort a, ClsObjectSort b) {
    if ( a.cnt > b.cnt) return true;
    else return false;
}
int main() {
    int n;
    cin >> n;

    ClsObjectSort frq[26];
    for(int i=0;i<26;i++) {
        frq[i].C =(i + 'a');
        frq[i].cnt = 0;
    }

    for(int i=0;i<n;i++) {
        char c;
        cin >> c;
        frq[c-'a'].cnt++;
    }

    sort(frq, frq+26, cmp);
    for(int i=0;i<26;i++) {
        if (frq[i].cnt > 0) {
            cout << frq[i].C << " " << frq[i].cnt << endl;
        }
    }
    return 0;
}