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
string s;
cin>>s;
map<char,int>mp;
bool flag=true;
for(int i=0;i<s.size();i++){
 if(s[i]=='r'|| s[i]=='g' || s[i]=='b'){
    mp[s[i]]++;
 }
 if(s[i]=='R'){
    if(mp['r']==0){
        flag=false;
        break;
    }
 }
 if(s[i]=='G'){
    if(mp['g']==0){
        flag=false;
        break;
    }
 }
 if(s[i]=='B'){
    if(mp['b']==0){
        flag=false;
        break;
    }
 }
}
if(!flag) cout<<"NO"<<endl;
else cout<<"YES"<<endl;
}
return 0;
}