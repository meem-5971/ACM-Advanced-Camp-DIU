#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t,sx,sy,ex,ey;
cin>>t>>sx>>sy>>ex>>ey;
int e=0,w=0,n=0,s=0;
string st;
cin>>st;

if(sx>ex){
    w+=abs(sx-ex);
}
if(ex>sx){
    e+=abs(ex-sx);
}
if(sy<ey){
    n+=abs(sy-ey);
}
if(ey<sy){
    s+=abs(sy-ey);
}
int e2=0,w2=0,n2=0,s2=0;
bool flag=false;

for(int i=0;i<st.size();i++){
    if(st[i]=='E') e2++;
    if(st[i]=='S') s2++;
    if(st[i]=='N') n2++;
    if(st[i]=='W') w2++;
    if(s<=s2 && e<=e2 && n<=n2 && w<=w2){
        flag=true;
        break;
    }

}
if (flag) cout<<e2+s2+n2+w2<<endl;
else cout<<-1<<endl;
 
return 0;
}