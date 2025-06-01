#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            cout<<s.substr(i,2)<<endl;
            return;
        }
    }
    for(int i=0;i<n-2;i++){
        if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i]!=s[i+2] ){
            cout<<s.substr(i,3)<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    return;  
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int t;
cin>>t;
while(t--){
solve();
}
return 0;
}