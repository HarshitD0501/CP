#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  vector<long long > ni(n),mi(m);
  for(int i=0;i<n;i++) cin>>ni[i];
  for(int i=0;i<m;i++) cin>>mi[i];
  long long c=*min_element(mi.begin(),mi.end());
 long long ans = 0;
    long long s= 0;
    int l = 0;
    for (int r = 0; r < n; r++) {
        s += mi[r];
        while (s>c) {
            s-=mi[l];
            l++;
        }
        ans+=(r-l+1);
    }
    cout <<ans<<"\n";
    return 0;
}