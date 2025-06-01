#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
map<char,bool>mp;
string s;
cin>>s;
for(int i=0;i<s.size();i++){
    mp[s[i]]=true;
}
bool flag=false;
for(char i='a';i<='z';i++){
    if(mp[i]==false){
        cout<<i;
        flag=true;
        break;
    } 
}
if(!flag) cout<<"None"<<endl;
return 0;
}