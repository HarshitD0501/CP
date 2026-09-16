#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    vector<int> v(3);
    cin>>v[0]>>v[1]>>v[2];
    // if(v[0]==v[1] && v[1]==v[2]){
    //   cout<<0<<'\n';
    //   continue;
    // }
    sort(v.begin(),v.end());
    // if(v[2]>(v[0]+v[1])){
    //   v[2]=v[0]+v[1];
    //   cout<<v[2]-v[0]<<'\n';
    // }else{
    //   cout<<v[2]-v[0]<<'\n';
    // }
    cout<<min(v[2]-v[0],v[1])<<'\n';
    
  }
  return 0;
}