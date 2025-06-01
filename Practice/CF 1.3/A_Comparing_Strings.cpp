#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s1;
cin>>s1;
string s2;
cin>>s2;
map<char,int>mp;
for(int i=0;i<s1.size();i++){
    mp[s1[i]]++;
}
map<char,int>mq;
for(int i=0;i<s2.size();i++){
    mq[s2[i]]++;
}
if(s1.size()!=s2.size()) cout<<"NO"<<endl;
else{
    bool flag=true;
    for(auto u:mq){
        if(mp[u.first]!=u.second){
            flag=false;
            break;
        }
    }
    if(!flag) cout<<"NO"<<endl;
    if(flag){
    int n=s1.size();
    int cnt=0;
   for(int i=0;i<s1.size();i++){
    if(s1[i]!=s2[i]) cnt++;
   }
    if(cnt==2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}
 
return 0;
}