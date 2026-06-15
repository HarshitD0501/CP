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
    string s;
    cin>>s;
    vector<int> f(26,0);
    for(char i : s){
      f[i-'a']++;
    }
    int a=0;
    for(int i : f){
      if(i%2==1) a++;
    }
    if((a-k)<=1) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
  }
  return 0;
}