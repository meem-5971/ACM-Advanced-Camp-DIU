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
    int ans=0,cnt=0;
    bool flag=false;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(i==0 || s[i]!=s[i-1]){
            if(s[i]=='D') ans++;
            else cnt++;
        }
    }
    
  cout<<min(ans,cnt)<<endl;
}
 
return 0;
}