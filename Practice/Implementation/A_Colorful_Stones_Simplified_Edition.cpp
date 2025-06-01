#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s,t;
cin>>s>>t;
int ans=0;
for(int i=0;i<t.size();i++){
 
        if(s[ans]==t[i]){
            ans++;
        }
     
}
 cout<<ans+1<<endl;
return 0;
}