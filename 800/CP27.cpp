#include<bits/stdc++.h>
#include <numeric>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    bool p=false;
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        if(__gcd(v[i],v[j])<=2){
          p=true;
          break;
        }
      }
      if(p) break;

    }
    if(p) cout<<"YES\n";
    else cout<<"NO\n";
  }
  return 0;
}