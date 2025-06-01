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
string ans=" ";
ans+=s[0];
ans+=s[1];
for(int i=3;i<s.size();i+=2){
    ans+=s[i];
}
cout<<ans<<endl;
}
return 0;
}