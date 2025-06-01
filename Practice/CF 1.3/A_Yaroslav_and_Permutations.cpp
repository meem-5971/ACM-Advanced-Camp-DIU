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
map<int,int>mp;
for(int i=0;i<n;i++) {
    cin>>a[i];
    mp[a[i]]++;
}
bool flag=true; 
for(auto u:mp){
if(u.second>(n+1)/2){
    flag=false;
    break;
}
}  
if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
 
return 0;
}