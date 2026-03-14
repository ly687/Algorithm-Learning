#include <bits/stdc++.h>
using namespace std;
#define ll long long 
//贪心

void solve(){
int n,k,p,m;
cin>>n>>k>>p>>m;
vector<int> a(n+1);
for(int i=1;i<=n;i++){
    cin>>a[i];
}
ll fcost=a[p];

if(p>k){
vector<int> bf;
for(int i=1;i<p;i++){
    bf.push_back(a[i]);
}
sort(bf.begin(),bf.end());
ll sum=0; for(int j=0;j<(p-k);j++){sum+=bf[j];}
fcost+=sum;
}



if(fcost>m){
    cout<<0<<endl;
    return;
}
//以下说明能打出第一次牌；


vector<int> fei;
for(int i=1;i<=n;i++){
    if(i!=p) fei.push_back(a[i]); 
}

ll ocost=a[p];

sort(fei.begin(),fei.end());
for(int i=0;i<n-k;i++){
    ocost+=fei[i];
}

ll ans=1+(m-fcost)/ocost;


cout<<ans<<endl;






}

int main(){

    int t;
    cin>>t;

while(t--){
solve();



}


}