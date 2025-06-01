#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod= 1e9 + 7;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<int>a(n);
map<int,int>mp;
for(int i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]++;
}
bool flag=true;
if(n%2==1){
    if(mp[0]!=1) flag=false;
    for(int i=2;i<n;i+=2){
        if(mp[i]!=2) flag=false;
    }
}
else{
    for(int i=1;i<n;i+=2){
        if(mp[i]!=2) flag=false;
    }
}
if(!flag) cout<<0<<endl;
else{
    ll ans=1;
for(int i=0;i<n/2;i++){
    ans*=2;
    ans%=mod;
}
cout<<ans<<endl;
}
 
return 0;  
}