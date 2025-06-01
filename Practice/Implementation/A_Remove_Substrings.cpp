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
if(s[0]!=s[n-1]) cout<<1<<endl;
else{
    bool flag=false;
    for(int i=1;i<n-1;i++){
        if(s[i]!=s[0] && s[i+1]!=s[0]){
            cout<<2<<endl;
            flag=true;
            break;
        }
    }
    if(!flag) cout<<-1<<endl;
}

 
return 0;
}