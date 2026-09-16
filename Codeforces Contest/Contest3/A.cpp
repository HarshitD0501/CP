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
    vector<int > v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    int s=v[0];
    int su=v[0];
    for(int i=1;i<n;i++){
      s=min(s,v[i]);
      su+=s;
    }cout<<su<<'\n';
  }
  return 0;
}