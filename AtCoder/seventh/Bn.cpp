#include<bits/stdc++.h>
using namespace std;
struct Player {
    long long score;
    int id; // 1-based jersey number
};
int main(){
  int n,k;
  cin>>n>>k;
  vector<Player>v(n);
  for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    v[i]={a+b,i+1};
  }
  sort(v.begin(),v.end(),[](const Player & p1, const Player& p2) {
        if (p1.score != p2.score) {
            return p1.score > p2.score;
        }
        return p1.id < p2.id;
      });
  
  vector<int> se(k);
  for(int i=0;i<k;i++){
    se[i]=v[i].id;
  }
  sort(se.begin(),se.end());
  for(int i:se){
    cout<<i<<'\n';
  }
  return 0;
}