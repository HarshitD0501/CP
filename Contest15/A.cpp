#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    vector<bool> l(26,false);
    for(int i=0;i<n;i++){
      string s;
      cin>>s;
      l[s[0]-'a']=true;
    }
    bool p=true;
    for (int i=0;i<m;i++){
        string a;
        cin>>a;
        for (char c:a) {
            if (!l[c-'A']) {
                p=false;
            }
        }
    }
    if (p) {
        cout<<"YES"<<'\n';
    } else {
        cout<<"NO"<<'\n';
    }
  }
  return 0;
}