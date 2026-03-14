#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >>n;

    vector<double> c(n+1), p(n+1);
    for (int i=1;i<=n;i++){
        cin>>c[i]>>p[i];
    }

    double f=0.0;  // 相当于 f[n+1]

    for (int i=n; i>=1;i--) {
        double keep=f;
        double take=c[i]+(1.0-p[i]/100.0)*f;
        f=max(keep, take);
    }

    cout<<fixed<<setprecision(10)<<f<<endl;
}

int main() {
   
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}