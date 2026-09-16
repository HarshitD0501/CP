#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    int m=INT_MAX;
    int e=0;
    for(int i=0;i<n;i++){
      cin>>v[i];
      if(v[i]%2==0){
        e++;
      }
    }
    for(int i=0;i<n;i++){
      if(v[i]%k==0){
        m=0;
      }else{
        int d=k-(v[i]%k);
        m=min(d,m);
      }
    }
    if(k==4){
      int d=max(0,2-e);
      m=min(m,d);
    }
    cout<<m<<'\n';
    
  } 
  return 0;
}