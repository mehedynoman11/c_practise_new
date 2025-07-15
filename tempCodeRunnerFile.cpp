<<<<<<< HEAD
#include <iostream>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while (q--)
    {
        int x;
        cin >> x;
        bool found = false;
        int l = 0, r = n - 1;

        while (l <= r)
        {
            int midIndex = (l + r) / 2;
            if (a[midIndex] == x)
            {
                found = true;
                break;
            }
            else if (x > a[midIndex])
            {
                l = midIndex + 1;
            }
            else
            {
                r = midIndex - 1;
            }

            if (found)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
=======
 } else if (pos == 0) {
        insert_at_head(head, val);
>>>>>>> e417e6f0db62f49c65ed4ee575fa1a8c5595bf91
