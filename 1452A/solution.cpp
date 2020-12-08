// A fast IO program
#include <bits/stdc++.h>
#include <algorithm>    //std::max

using namespace std;

int main()
{
    // added the two lines below
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, t, x, y;
    cin >> t;
    while (t > 0)
    {
        cin >> x >> y;
        cout << (2*std::max(x, y) - (x != y)) << "\n";
        t --;
    }
    return 0;
}
