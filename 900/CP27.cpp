#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    long long n,x;
    cin>>n>>x;
    long long s=0 ,num=0;
    for(int i=0;i<n;i++){
      long long l;
      cin>>l;
      s+=l;
      num+=(l+x-1)/x;
    }cout<<(s+x-1)/x<<" "<<num<<'\n';
  }
  return 0;
}