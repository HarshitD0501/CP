#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int x,m;
  cin>>x>>m;
  vector<int> mp(m+1,-1);
  for(int i=0;i<x;i++){
    int k,l;
    cin>>k>>l;
    mp[k]=max(mp[k],l);
  }
  for(int i=1;i<m+1;i++){
    cout<<mp[i]<<" ";
  }
  return 0;
}