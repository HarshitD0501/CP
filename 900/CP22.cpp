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
    long long zero=0,one=0;
    vector<int> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
      if(v[i]==1){
        one++;
      }else if(v[i]==0){
        zero++;
      }
    }
    long long ans= one * (1LL <<zero);
    cout<<ans<<'\n';
  }
  return 0;
}