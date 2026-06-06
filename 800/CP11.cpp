//A. Ambitious Kid
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> s(n);
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    s[i]=a;
  }
  int m=abs(s[0]);
  for(int i=1;i<n;i++){
    if(s[i]==0) {
      m=0;
      break;
    }
    m=min(abs(s[i]),m);

  }
  cout<<m;
  return 0;
}