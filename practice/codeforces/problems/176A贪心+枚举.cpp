//构造，贪心
//
//
//
//
//
/*
注意到数据都很小，所以直接上暴力枚举（枚举时带贪心）
对于一个星球，




*/
#include <iostream>
#include <vector>
#include <algorithm>
#define int long long
using namespace std;
struct node{
	int cnt,k;//cnt 表示当前这个物品的收益，k 表示当前这个物品的个数
};
int n,m,k,a[15][105],b[15][105],c[15][105],ans;
bool cmp(node a,node b){
	return a.cnt>b.cnt;//贪心思想，优先买收益最大的物品
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m>>k;
	for(int i = 1;i<=n;i++){
		string s;cin>>s;//这个星球名字没用，这里用 i 来表示
		for(int j = 1;j<=m;j++) cin>>a[i][j]>>b[i][j]>>c[i][j];
	}
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=n;j++){
			if(j==i) continue;//星球一样，跳过
			vector<node> v;//这里 vector 可以改成数组
			int cnt=0,sum=0;//sum 用来存收益最大值，cnt 用来存当前买了多少个物品
			for(int l = 1;l<=m;l++) v.push_back(node{b[j][l]-a[i][l],c[i][l]});//算出每件物品的收益
			sort(v.begin(),v.end(),cmp);
			for(int l = 0;l<v.size();l++){
				if(v[l].cnt<=0) break;//cnt 是从大到小排序的，对于收益为负数的物品，买了没用，直接跳出循环
                if(cnt+v[l].k<k) sum+=v[l].k*v[l].cnt,cnt+=v[l].k;//对于可以全部买完的情况
				else{//剩下能买多少全买这个物品
					sum+=(k-cnt)*v[l].cnt;
					break;//已经买完 k 个物品了，结束
				}
			}
			ans=max(ans,sum);//取最大值
		}
	}
	cout<<ans;
  return 0;//完结撒花
} 
