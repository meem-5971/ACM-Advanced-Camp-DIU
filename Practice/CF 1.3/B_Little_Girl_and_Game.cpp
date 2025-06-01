#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;

int n=s.size();
map<char,int>mp;
int cnt=0;
for(int i=0;i<n;i++){
    mp[s[i]]++;
}
for(auto u:mp){
    if(u.second%2==1){
        cnt++;
    }
}
if(cnt%2==1 || cnt<1) cout<<"First"<<endl;
else cout<<"Second"<<endl;
 
return 0;
}