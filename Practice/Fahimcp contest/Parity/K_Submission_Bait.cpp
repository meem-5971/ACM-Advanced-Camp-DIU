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
    mp[a[i]]++;
}
int x=*max_element(a.begin(),a.end());
int cnt=0;
for(int i=0;i<n;i++){
    if(a[i]==x) cnt++;
}
if(mp[x]%2==1) cout<<"YES"<<endl;
else {
    bool f=false;
    for(auto u:mp){
        if(u.second%2==1){
            f=true;
            break;
        }
    }
    if(f) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

}
return 0;
}