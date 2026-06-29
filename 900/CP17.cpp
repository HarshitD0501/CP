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
    int f=INT_MIN;
    vector<int> v(n);
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
      cin>>v[i];
      m[v[i]]++;
      f=max(f,m[v[i]]);
    }
    int o=0;
    int c=f;
    while(c<n){
      o++;
      int r=n-c;
      if(c>=r){
        c+=r;
        o+=r;
      }else{
        o+=c;
        c*=2;
      }
    }cout<<o<<'\n';
  }
  return 0;
}