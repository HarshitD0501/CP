#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  vector<string> a(10);
  while(t--){
    int su=0;
    for(int i=0;i<10;i++){
      string s;
      cin >> s;
      a[i]=s;
      for(int j=0;j<10;j++){
        if(s[j]=='X'){
          int a=min(i,9-i);
          int e=min(j,9-j);
          int r=min(a,e);
          su+=r+1;
        }
        }
      }
      cout<<su<<endl;
    }
  return 0;
}