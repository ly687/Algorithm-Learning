/*

贪心：从后往前遍历做出 max数组（max[i]表示，从i到n的max值）
前缀和：sum[i]表示从1到i的max值的和
ans=sum[r]-sum[l]+max[l]





*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll max(ll a,ll b){
    return a>b?a:b;
}

void solve() {
    int n,q;
    cin >> n>>q;
    vector<ll> a(n+1);
    vector<ll> b(n+1);
   for(int i=1;i<=n;i++){
       cin >> a[i];
   }
   for(int i=1;i<=n;i++){
       cin >> b[i];
   }
   vector<ll> max1(n+1);
   max1[n]=max(a[n],b[n]);
   int index=n-1;
   while(index>0){
       max1[index]=max(a[index],max(max1[index+1],b[index]));
       index--;
   }
   vector<ll> sum(n+1);
   sum[1]=max1[1];
   for(int i=2;i<=n;i++){
       sum[i]=sum[i-1]+max1[i];
   }
   while(q--){
       int l,r;
       cin >> l >> r;
       ll ans=sum[r]-sum[l]+max1[l];
cout<<ans<<" ";

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