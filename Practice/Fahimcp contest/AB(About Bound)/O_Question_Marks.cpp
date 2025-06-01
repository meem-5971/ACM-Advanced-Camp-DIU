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
int n;
cin>>n;
string s;
cin>>s;
int cnta=0,cntb=0,cntc=0,cntd=0;
for(int i=0;i<4*n;i++){
    if(s[i]=='A') cnta++;
    else if(s[i]=='B') cntb++;
    else if(s[i]=='C') cntc++;
    else if(s[i]=='D') cntd++;
}
int ans=0;
if(cnta>=n) ans+=n;
else ans+=cnta;
if(cntb>=n) ans+=n;
else ans+=cntb;
if(cntc>=n) ans+=n;
else ans+=cntc;
if(cntd>=n) ans+=n;
else ans+=cntd;
cout<<ans<<endl;
}
return 0;
}