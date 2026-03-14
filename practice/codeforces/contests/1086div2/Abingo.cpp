#include <bits/stdc++.h>
using namespace std;
#define ll long long 


void solve(){

int n;
cin>>n;
int pan=n*(n-1);
vector<int> ans(1+n*n,0);
bool flag=true;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        int tmp;
        cin>>tmp;
        ans[tmp]+=1;
        if(ans[tmp]>pan){
            flag=false;
        }
    }
}

if(flag) cout<<"YES"<<endl;
else{
    cout<<"NO"<<endl;
}












}

int main(){

    int t;
    cin>>t;

while(t--){
solve();



}


}