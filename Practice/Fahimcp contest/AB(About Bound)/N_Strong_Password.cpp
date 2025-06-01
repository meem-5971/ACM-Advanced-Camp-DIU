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
int sum=2;
char c=s[0];
vector<char>ans;
bool flag=true;
ans.push_back(c);
for(int i=1;i<s.size();i++){
    if(s[i]==c && flag) {
        if(c>='a' && c<'z')
        ans.push_back(s[i]+1); 
        else ans.push_back(s[i]-1);
    flag=false;
    }
    c=s[i];
  ans.push_back(s[i]);
}
if(flag){
    if(c>='a' && c<'z')
    ans.push_back(c+1); 
    else ans.push_back(c-1);
}
 
    for(auto u:ans){
        cout<<u;
    }
    cout<<endl;

}
return 0;
}