#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,k;
  cin>>n>>k;
  vector<long long> v(n);
  for(int i=0;i<n;i++){
    long long a,b;
    cin>>a>>b;
    long long s=a+b;
    v.push_back(s);
    
  }
  vector<long long> b=v;
  sort(b.begin(),b.end());
  vector<long long> c;
  for(int i=0;i<n;i++){
    if(k){
      if(v[i]==b[n-i-1]){
        c.push_back(i);
      }
      k--;
    }
    else{
      break;
    }
  }
  for(int i=0;i<k;i++){
    cout<<c[i]<<" ";
  }
  
  return 0;
}