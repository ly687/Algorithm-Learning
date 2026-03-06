//构造，贪心
//
//
//
//
//
/*


*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    ll n,x;
    cin >> n>>x;
    vector<ll> a(n+1);
    vector<ll> b(n+1);
    vector<ll> c(n+1);
   for(int i=1;i<=n;i++){
       cin >> a[i]>>b[i]>>c[i];
   }
  
   for(int i=1;i<=n;i++){
   x-=a[i]*(b[i]-1);
    if(x<=0){
        cout<<0<<endl;
        return;
    }
    }
   
    ll max=0;
    for(int i=1;i<=n;i++){
        max=max>=(a[i]*b[i]-c[i])?max:(a[i]*b[i]-c[i]);
    }
    if(max<=0){
        cout<<-1<<endl;
        return;
    }
    ll ans=x/max+(x%max==0?0:1);
    cout<<ans<<endl;

}







int main() {
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;


}