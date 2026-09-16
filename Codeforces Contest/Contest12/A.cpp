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
    long long s=0;
    int ma=0,mv=0;
    map<int,int> m;
    for(int i=0;i<n;i++){
      cin>>v[i];
      s+=v[i];
      m[v[i]]++;
      if(m[v[i]]>ma){
        ma=m[v[i]];
        mv=v[i];
      }
    }
    int o=n-ma;
    if(ma<=o+2){
      cout<<s<<'\n';
    }
    else{
      int l= ma-(o+2);
      long long k=s-(1LL*l*mv);
      cout<<k<<'\n';
    }
  }
  return 0;
}