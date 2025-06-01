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
vector<int>a(n+1);
for(int i=1;i<=n;i++){
    cin>>a[i];
}

int i=1;
vector<int>ans;
map<int,bool>mp;
ans.push_back(1);
mp[1]=true;
int x=0;
int cnt=1;
while(i<=n){
   if(mp[a[i]]==false){
    ans.push_back(a[i]);
    mp[a[i]]=true;
    i=a[i];
    
   } 
   else{
    x=a[i];
    break;
   }
}
//cout<<x<<endl;
bool flag=false;
vector<int>res;

for(auto u:ans){
    if(u==x){
        flag=true;
    }
    if(flag) res.push_back(u);
}
cout<<res.size()<<endl;
for(auto u:res){
    cout<<u<<" ";
}
 
return 0;
}