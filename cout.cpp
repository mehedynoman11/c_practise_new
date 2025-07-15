#include <iostream>
using namespace std;

int main() {
<<<<<<< HEAD:binary_search_original.cpp
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    while (q--) {
        int x;
        cin >> x;

        int l = 0, r = n - 1;
        bool found = false;

        while (l <= r) {
            int mid = (l + r) / 2;

            if (a[mid] == x) {
                found = true;
                break;
            }
            else if (x > a[mid]) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }

        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
=======
    int n = 5;
    cout<<n;
>>>>>>> e417e6f0db62f49c65ed4ee575fa1a8c5595bf91:cout.cpp

    return 0;
}
