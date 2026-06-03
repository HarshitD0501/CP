#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,a;
  cin>>n>>m>>a;
  long long c;
  long long  b= (n+a-1)/a;
  long long  d= (m+a-1)/a;
  c=b*d;
  cout<<c<<endl;
  return 0;
}