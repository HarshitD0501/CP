#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin >> n;
    vector<int> a(n);
    int s=0;
    for (int i=0;i<n-1;i++) {
        cin>>a[i];
        s+=a[i];
    }
    cout << -s << endl;
  }
  return 0;
}