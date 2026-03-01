#include <bits/stdc++.h>
using namespace std;
#define ll long long


//：这题主要就在于 如何重置数组
// 但也可以用版本控制的方法来做，记录每次修改的版本号，重置的时候只需要把版本号更新一下就行了
// time是版本号，st数组记录每个位置的版本号，ans数组记录每个位置的值，每次修改的时候先判断版本号是否和当前版本号相同，
//如果不同就说明还是crash后的初始状态
void solve() {
    ll n,m,h;
    cin>>n>>m>>h;
    vector<ll> a(n+1);
    vector<ll> ans(n+1);
  vector<ll> st(n+1,0);
  int time=0;
    for(int i=1;i<=n;i++){
     cin>>a[i];
     ans[i]=a[i];
      }
  for(int i=1;i<=m;i++){
    int b,c;
    cin>>b>>c;
    if(st[b]!=time){
        ans[b]=a[b]+c;
    }
    else{
        ans[b]+=c;
    }
    if(ans[b]>h){
        time++;
        ans[b]=a[b];

    }
    st[b]=time;
  }

  for(int i=1;i<=n;i++){
  if(st[i]!=time){
        cout<<a[i]<<" ";
    }
    else{
        cout<<ans[i]<<" ";
    }
  }
  cout<<endl;
}










int main() {
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;


}