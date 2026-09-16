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
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    if(n%2!=0){
      cout<<"NO"<<'\n';
      continue;
    }
    long long m_odd=2e18,m_even=-1;
    for(int i=0;i<n;i++){
      if((i+1)%2!=0){
        m_odd=min(m_odd,a[i]);
      }else{
        m_even=max(m_even,a[i]);
      }
    }
    if(m_odd-m_even >=2){
      cout<<"YES"<<'\n';
    }else{
      cout<<"NO"<<'\n';
    }
  }
  return 0;
}