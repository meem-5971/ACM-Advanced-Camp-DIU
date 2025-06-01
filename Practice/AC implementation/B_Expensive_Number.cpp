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
int ans=s.size()-1;
bool f=false;
for(int i=s.size()-1;i>=0;i--){
    if(s[i]!='0'){
        f=true;
    }
    if(s[i]=='0' && f==true) ans--;
}
cout<<ans<<endl;
}
return 0;
}