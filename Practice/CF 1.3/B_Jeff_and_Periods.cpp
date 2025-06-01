#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
map<ll,vector<int>>mp;
for(int i=0;i<n;i++){
    mp[a[i]].push_back(i);
}
map<ll,ll>ans;
for(auto u:mp){
    if(u.second.size()==1) ans[u.first]=0;
    else if(u.second.size()==2){
        ans[u.first]=u.second[1]-u.second[0];
    }
    else{
        int d=u.second[1]-u.second[0];
        bool flag=true;
        for(int i=1;i<u.second.size();i++){
            if(abs(u.second[i]-u.second[i-1])!=d){
                flag=false;
                break;
            }
        }
        if(flag) ans[u.first]=d;
        
    }

}
cout<<ans.size()<<endl;

for(auto u:ans){
    cout<<u.first<<" "<<u.second<<endl;
}
 
return 0;
}