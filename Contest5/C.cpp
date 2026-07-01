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
    vector<long long> a(n);
    vector<long long> b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    vector<int> v(n);
    for(int i=0;i<n;i++){
      v[i]=b[i]-a[i];
    }
    for(int i=n-1;i>0;i--){
      if(v[i]<0){
        v[i-1]+=v[i];
        v[i]=0;
      }
    }if(v[0]<0){
      cout<<"NO"<<'\n';
    }else{
      cout<<"YES"<<'\n';
    }
  }
  return 0;
}