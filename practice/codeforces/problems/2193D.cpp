/*

这题实际上在做”贪心“
给了一堆剑，又有一堆关卡
关卡所要求的剑数是不同的，
所以通过i个关卡要x个剑，
那么i关最大分数便是 i*难度， 难度贪心一下让a中只有x把剑就行了

取一下贪心的最大值就即可


前缀和加贪心










*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    int n;
    cin >> n;
    vector<ll> a(n+1);
    vector<ll> b(n+1);
   for(int i=1;i<=n;i++){
       cin >> a[i];
   }
   for(int i=1;i<=n;i++){
       cin >> b[i];
   }
   sort(a.begin()+1,a.end(),greater<ll>());
   ll sum=0,ans=-1;
   for(int i=1;i<=n;i++){
       sum+=b[i];
       if(sum>n){
              break;
       }
       ans=max(ans,i*a[sum]);

    }
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