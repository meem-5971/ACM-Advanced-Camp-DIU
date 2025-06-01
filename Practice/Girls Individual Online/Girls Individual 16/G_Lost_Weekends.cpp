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
int a,b,c,d,e,p;
cin>>a>>b>>c>>d>>e>>p;
a=a*p;b=b*p;c=c*p;d=d*p;e=e*p;
//cout<<a<<b<<c<<d<<e;
int tot=a+b+c+d+e;
//
if(tot>120) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
return 0;
}