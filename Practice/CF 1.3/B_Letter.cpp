#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
getline(cin,s);
string p;
getline(cin,p);
map<char,int>ms;
map<char,int>mp;
for(int i=0;i<s.size();i++){
    if(s[i]!=' '){
        ms[s[i]]++;
    }
}
for(int i=0;i<p.size();i++){
    if(p[i]!=' '){
        mp[p[i]]++;
    }
}
bool flag=true;
for(auto c:mp){
if(ms[c.first]<c.second){
    flag=false;
    break;
}
}
if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
 
return 0;
}