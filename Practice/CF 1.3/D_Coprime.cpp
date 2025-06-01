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
while(t--){
int n;
cin>>n;
vector<int>a(n);
map<int,int>mp;
for(int i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]=i+1;
}
int ans=0;
bool flag=false;
for(int i=1;i<=1000;i++){
    for(int j=i;j<=1000;j++){
        if(mp[i]>0 && mp[j]>0){
        if(__gcd(i,j)==1){
            flag=true;
            ans=max(ans,(mp[i]+mp[j]));
           // cout<<a[i]<<" "<<a[j]<<endl;
        }
    }
    }
}
if(flag) cout<<ans<<endl;
else cout<<-1<<endl;
}
return 0;
}