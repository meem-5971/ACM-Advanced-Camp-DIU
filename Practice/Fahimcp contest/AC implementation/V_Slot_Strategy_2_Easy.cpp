#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
int m;
cin>>m;
string s1,s2,s3;
cin>>s1>>s2>>s3;

map<char,vector<int>>pos1,pos2,pos3;
for(int i=0;i<m;i++){
    pos1[s1[i]].push_back(i);
    pos2[s2[i]].push_back(i);
    pos3[s3[i]].push_back(i);
}
int res=INT_MAX;
for(int d='0';d<='9';d++){
    if (pos1[d].empty() || pos2[d].empty() || pos3[d].empty()) continue;
    for(int i:pos1[d]){
        for(int j:pos2[d]){
            for(int k:pos3[d]){
                for(int x1=0;x1<3;x1++){
                    int t1=i+x1*m;
                    for(int x2=0;x2<3;x2++){
                        int t2=j+x2*m;
                        if(t1==t2) continue;
                        for(int x3=0;x3<3;x3++){
                            int t3=k+x3*m;
                            if(t1==t3 || t2==t3) continue;
                            int mx=max({t1,t2,t3});
                            res=min(res,mx);
                        }
                    }
                }
            }
        }
    }
}
if(res==INT_MAX) cout<<-1<<endl;
else cout<<res<<endl;
return 0;
}