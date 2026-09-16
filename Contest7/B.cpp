#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    long long t=0;
    bool p=true;
    for(int i=1;i<=n;i++){
      long long x;
      cin>>x;
      t+=x;
      long long m=(1LL*i*(i+1)/2);
      if(t<m){
        p=false;
      }

    }
    if(p) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
  }
  return 0;
}