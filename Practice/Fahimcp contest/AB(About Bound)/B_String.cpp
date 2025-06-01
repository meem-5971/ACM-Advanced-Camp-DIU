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
int ans=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='1') ans++;
}
cout<<ans<<endl;
}
return 0;
}