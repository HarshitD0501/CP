#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        if (n == 1) {
            cout<<1<<'\n';
        } else if (n == 2 ) {
            cout<<-1<<'\n';
        } else {
            long long sum = 6;
            cout<<"1 2 3";
            for (int i = 4; i <= n; i++) {
                cout<<" "<<sum;
                sum *= 2;  
            }
            cout<<'\n';
        }
    }
    return 0;
}
