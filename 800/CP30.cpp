#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    string n;
    cin>>n;
    int l=(n.length()-1)*9;
    l+=(n[0]-'0');
    cout<<l<<'\n';
  }
  return 0;
}