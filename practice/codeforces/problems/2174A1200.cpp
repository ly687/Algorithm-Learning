#include <bits/stdc++.h>
using namespace std;
#define ll long long
/**
1.判断s是否能 是 t的子序列
方法：开一个哈希表

2.怎么获得答案？
先排序得到字典序最小的字符串t'，,t'再去掉s的字符，
然后把s和t'合并成一个字符串，

合并：双指针：s一个，t一个，输出字典序小的








 * 
 * 
 */


void solve() {
    string s,t;
    cin>>s>>t;
    vector<int> pos(26,0);
   for(auto c:s){
    int x=c-'a';
    pos[x]--;
   }
   for(auto c:t){
    int x=c-'a';
    pos[x]++;
   }
    for(int i=0;i<26;i++){
        if(pos[i]<0){
            cout<<"Impossible"<<endl;
            return;
        }
   



    }
 sort(t.begin(),t.end());
 for(auto c:s){
    t.erase(find(t.begin(),t.end(),c));
 }
 
 
  for(int i=0,j=0;i<s.size()||j<t.size();){
			if(i>=s.size()||(j<t.size()&&s[i]>t[j]))	cout<<t[j++];
			else	cout<<s[i++];
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