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
    vector<int> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    bool p=true;
    int c=0;
    for(int i=n-2;i>=0;i--){
      while(v[i]>=v[i+1] && v[i]>0){
        v[i]/=2;
        c++;
      }
      if(v[i] >= v[i+1]){
        p=false;
        break;
      }
    }
    if(p) cout<<c<<'\n';
    else cout<<-1<<'\n';
  }
  return 0;
}