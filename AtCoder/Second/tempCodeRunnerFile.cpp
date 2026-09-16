#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  int su=0;
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
    su+=v[i];
  }
  int ma=-1;
  int s=0;
  int mean=su/n;
  for(int i=0;i<n;i++){
    int m= abs(v[i]*i-su);
    if(m>ma)
      ma=i+1;
  }cout<<ma<<'\n';
  return 0;
}