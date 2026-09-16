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
    if(n==1){
      cout<<0<<'\n';
      continue;
    }

    int two=0,three=0;
    while(n%2==0){
        two++;
        n/=2;
    }
    while(n%3==0){
      three++;
      n/=3;
    }
    if(n==1 && two<=three){
      cout<<(2*three-two)<<'\n';
    }else{
      cout<<-1<<'\n';
    }
    
  }
  return 0;
}