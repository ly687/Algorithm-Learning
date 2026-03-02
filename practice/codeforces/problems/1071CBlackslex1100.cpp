#include <bits/stdc++.h>
using namespace std;
#define ll long long
/**
 * 模拟、数学、排序、数论、1100
 * x>=k
 * 对于ai，若ai<x,那么ai%x=ai
 * 所以被冻结，进而 k<=x<=ai   如果数组里有 两个不同的元素都 < k，那么最终不可能全相等（因为它们都冻住且不同）
 * 
 * 所有元素相同1.都变为0 取x=ai,那么 k<=min(ai)
 * 2.都变为最小值 若a1最小且 a1<k,那么a1被冻结
 * 而   v % (v-a1) = a1  所以x可以取v-a1从而使整个数组统一起来 所以 v-a1>=k  v>=k+a1
 * 所以 k要么是a1,要么满足k<=ai-a1 即 k=a2-a1
 * 所以 k=max(a1,a2-a1)  其中a1是最小值 a2是第二小值
 * 
 * 
 * 
 */


void solve() {
   int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
   
        cout << max(a[0], a[1] - a[0]) << endl;



    }










int main() {
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;


}