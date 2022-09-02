#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


signed  main() {
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input2.txt", "r", stdin);
    // for writing output to output.txt
    freopen("twmpx.txt", "w", stdout);
#endif



    int t;
    cin >> t;

    while (t--) {

        ll B, C;
        cin >> B >> C;

        ll i = 1;
        while (i > 0) {
            if ((C * i) % B == 0) {
                cout << (C * i) / B << "\n";
                break;
            }

            else {
                i++;
            }
        }
    }

    return 0;
}
