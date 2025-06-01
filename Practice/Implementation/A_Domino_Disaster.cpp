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
string ans;
for(int i=0;i<n;i++){
    if(s[i]=='D') ans+='U';
    else if(s[i]=='U') ans+='D';
    else{
        ans+="LR";
        i++;
    }
}
cout<<ans<<endl;
}
return 0;
}