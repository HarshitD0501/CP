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
    vector<int> p(n);
    for(int i=0;i<n;i++){
      cin>>p[i];
    }
    int a=0;
    for(int i=0;i<n;i++){
      if(p[i]!=(i+1)){
        int l=abs(p[i]-i-1);
        a=__gcd(a,l);
      }
    }cout<<a<<'\n';
  }
  return 0;
}