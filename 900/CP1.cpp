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
    long long xk,yk;
    cin>>xk>>yk;
    long long xq,yq;
    cin>>xq>>yq;
    vector<pair<long long ,long long>> d ={
      {a,b},{a,-b},{-a,b},{-a,-b},
      {b,a},{b,-a},{-b,a},{-b,-a}
    };
    set<pair<long long , long long >> k;
    for(auto di : d){
      long long x= xk + di.first;
      long long y= yk + di.second;
      k.insert({x,y});
    }
    set<pair<long long , long long >> q;
    long long ans=0;
    for(auto di : d){
      long long x= xq + di.first;
      long long y= yq + di.second;
      if(q.find({x,y})==q.end()){
        q.insert({x,y});
        if(k.find({x,y}) != k.end()){
          ans++;
        }
      }
    }cout<<ans<<'\n';

  }
  return 0;
}