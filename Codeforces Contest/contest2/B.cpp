#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    vector<int> c(k,0);
    for(int i=0;i<n;i++){
      if(s[i]=='1') c[i%k]++;
    }
    bool p=true;
    for(int i=0;i<k;i++){
      if(c[i]%2!=0){
        p=false;
        break;
      }
    }
    if(p) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

  }
  return 0;
}