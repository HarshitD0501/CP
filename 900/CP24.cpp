#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    long long a,b;
    cin>>a>>b;
    if(a==b){
      cout<<"0 0"<<'\n';
      continue;
    }
    long long ma=abs(a-b);
    long long r=a%ma;
    long long mi=min(r,ma-r);
    cout<<ma<<" "<<mi<<'\n';
  }
  return 0;
}