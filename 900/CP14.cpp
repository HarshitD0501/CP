#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    if(n<4 || n%2!=0){
      cout<<-1<<'\n';
    }else{
      long long mi = (n+5)/6;
      long long ma = n/4;
      cout<<mi<<" "<<ma<<'\n';
    }
  }
  return 0;
}