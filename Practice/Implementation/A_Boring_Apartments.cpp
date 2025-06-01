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
string s=to_string(n);
int d=s[0]-'0';
int ans=(d-1)*10;
if(s.size()==1){
    ans+=1;
}
else if(s.size()==2){
    ans+=3;
}
else if(s.size()==3){
    ans+=6;
}
else if(s.size()==4){
    ans+=10;
}
cout<<ans<<endl;
    }
return 0;
}