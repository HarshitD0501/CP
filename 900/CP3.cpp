#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    long long n,k,x;
    cin>>n>>k>>x;
    long long mi=(k*(k+1))/2;
    long long ma=(k*(2*n-k+1))/2;
    if(x>=mi && x<=ma) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
  }
  return 0;
}