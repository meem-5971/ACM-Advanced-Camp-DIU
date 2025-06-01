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
int n,k;
cin>>n>>k;
string s;
cin>>s;
map<char,int>mp;
for(int i=0;i<n;i++){
    mp[s[i]]++;
}
int odd=0,even=0;
for(auto u:mp){
    if(u.second%2==0) even++;
    else odd++;
}
if(k<(odd-1)){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}

}
return 0;
}