#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    int m=n; 
    for (int i=0;i<n;i++) {
        int t=a[i];
        int l=0,r=0;
        for (int j=0;j<n;j++) {
            if (a[j]<t) {
                l++;
            } else if (a[j]>t) {
                r++;
            }
        }
        int c = max(l, r);
        m = min(m, c);
    }

    cout << m << "\n";
  }
}