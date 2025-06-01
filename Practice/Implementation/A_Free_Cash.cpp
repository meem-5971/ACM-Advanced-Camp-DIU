#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int t;
cin>>t;
map<pair<int,int>,int>mp;
vector<int>ans;
while(t--){
int x,y;
cin>>x>>y;
mp[{x,y}]++;
}
for(auto u:mp){
    ans.push_back(u.second);
}
cout<<*max_element(ans.begin(),ans.end())<<endl;
return 0;
}