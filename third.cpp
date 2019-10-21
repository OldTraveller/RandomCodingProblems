#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        LL n, q; 
        cin >> n >> q;
        vector<LL> arr(n + 1); 
        for (int i = 1; i <= n; i++) {
            arr[i] = i; 
        }
        LL sum = 0; 
        while (q--) {
            int type;
            cin >> type; 
            if (type == 1) {
                LL y; cin >> y; 
                arr[y + sum] = 0; 
            } else {
                LL l, r;
                LL maxi = -9123123;   
                cin >> l >> r; 
                l += sum; 
                r += sum; 
                for (int i = l; i <= r; i++) {
                    maxi = max(arr[i], maxi); 
                }
                sum += maxi; 
                sum %= n; 
		cout << maxi << endl; 
            }
        }
    }    
}
