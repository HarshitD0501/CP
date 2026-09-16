#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l=1;
    for (int i=0;i<n-1;i++) {
        if (s[i]!=s[i+1]){
            l++;
        }
    }
    int m =l;
    for (int i=1;i<n-1;i++){
        int o=(s[i - 1] != s[i] ? 1 : 0) + (s[i] != s[i + 1] ? 1 : 0);
        int n=(s[i - 1] != s[i + 1] ? 1 : 0);
        int c= l-o+n;
        m= min(m, c);
    }
    cout << m<< "\n";
  }
  return 0;
}