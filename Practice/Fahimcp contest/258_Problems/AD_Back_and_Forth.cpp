#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
 int sx,sy,tx,ty;
 cin>>sx>>sy>>tx>>ty;
 string ans="";
 int dx=tx-sx;
 int dy=ty-sy;
 ans+=string(dx,'R');
 ans+=string(dy,'U');
 ans+=string(dx,'L');
 ans+=string(dy,'D');
 ans+='L';
 ans+=string(dy+1,'U');
 ans+=string(dx+1,'R');
 ans+='D';
 ans+='R';
 ans+=string(dy+1,'D');
 ans+=string(dx+1,'L');
 ans+='U';
 cout<<ans<<endl;

}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
solve();
return 0;
}