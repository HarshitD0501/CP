#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>d){
      cout<<-1<<endl;
      continue;
    }
    int cu=a+(d-b);
    if(c>cu){
      cout<<-1<<endl;
      continue;
    }
    long long move = (d-b) + (cu-c);
    cout<<move<<endl;
  }
  return 0;
}