#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    string x;
    cin>>x;
    string s;
    cin>>s;
    int c=0;
    bool b=false;
    for(int i=0;i<6;i++){
      if(x.find(s) != string::npos){
        cout<<c<<endl;
        b=true;
        break;
      }
      x+=x;
      c++;
    }
    if(!b) cout<<-1<<endl;
  }
  return 0;
}