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
int n=s.size();
int count=0;
int blnc=0;
int tot=0;
for(int i=0;i<n;i++){
if(s[i]=='(') blnc++;
else blnc--;
tot=max(tot,blnc);
}
for(int i=1;i<=tot;i++){
    cout<<'(';
}
for(int i=1;i<=tot;i++){
    cout<<')';
}
cout<<endl;
}
return 0;
}