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
string s;
cin>>s;
if(n<26){
    cout<<"NO"<<endl;
    return 0;
}
map<char,int>mp;
for(int i=0;i<n;i++){
    mp[tolower(s[i])]++;
}
bool flag=true;
for(char i='a';i<='z';i++){
    if(mp[i]==0 ){
        flag=false;
        break;
    }
}
if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
 
return 0;
}