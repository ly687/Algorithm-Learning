#include <bits/stdc++.h>
using namespace std;
#define ll long long
// yeah,这题的思路是先排序去重，然后求连续段的最大长度
// accepted!!!
// 题解：先排序去重，然后求连续段的最大长度 2185CShifted MEX


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());//先排序再去重
    sort(a.begin(), a.end());
    int tmp=a[0];
    if(a.size()==1){
        cout<<1<<endl;
        return;
    }
    //这题实际上是求连续段最大长度（去重之后）
    vector<int> ans;
    tmp=1;
    for(int i=0;i<a.size()-1;i++){
         if(a[i+1]-a[i]==1){
            tmp++;
         }else{
            ans.push_back(tmp);
            tmp=1;
         }
    }
    ans.push_back(tmp);
    sort(ans.begin(),ans.end());
    cout<<ans[ans.size()-1]<<endl;

    }










int main() {
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;


}