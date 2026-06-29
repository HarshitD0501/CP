#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int n,q;
    cin>>n>>q;
    vector<int> v(n+1);
    int s=0;
    vector<int> pre(n+1,0);
    v[0]=0;
    for(int i=1;i<=n;i++){
      cin>>v[i];
      pre[i]=pre[i-1]+v[i];
    }for(int i=0;i<q;i++){
      long long l,r,k;
      cin>>l>>r>>k;
      long long j=(r-l+1)*k;
      long long su=pre[n]+j-(pre[r]-pre[l-1]);
      if(su%2==0){
        cout<<"NO"<<'\n';
      }else cout<<"YES"<<'\n';
    }
  }
  return 0;
}