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
    string s ;
    cin>>s;
    int ma=0, nm=0;
    for(int i=0;i<n;i++){
      if(s[i]=='#'){
        nm++;
        ma=max(ma,nm);
      }else{
        nm=0;
      }
    }
    cout<<(ma+1)/2<<'\n';
  }
  return 0;
}