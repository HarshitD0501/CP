#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    string s ;
    cin>>s;
    // int n=s.length();
    // int ab=0,ba=0;
    // for(int i=0;i<n-1;i++){
    //   if(s[i]=='a' && s[i+1]=='b') ab++;
    //   else if(s[i]=='b' && s[i+1]=='a') ba++;
    // }
    // while(ab!=ba){
    //   for(int i=0;i<n-1;i++){
    //     if(ab>ba){
    //       if(s[i]=='a' && s[i+1]=='b'){
    //         s[i]='b';
    //         ab--;
    //       }
    //     }else{
    //       if(s[i]=='b' && s[i+1]=='a'){
    //         s[i]='a';
    //         ba--;
    //       }
    //     }
    //   }
    // }
    if(s.front()!=s.back()){
      s.front()=s.back();
    }
    cout<<s<<'\n';
  }
  return 0;
}