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
ll x,y;
cin>>x>>y;
int res=0,ans=INT_MAX;
if(x<y) cout<<1<<endl;
else if(x==y) cout<<2<<endl;
else{
   ll res=0; 
   if(y==1){
    y++;
    res++;
   }
   for(int i=0;i<=50;i++){
    int a=x, b=y+i;
    int curr=res+i;
    while(a>0){
        a/=b;
        curr++;
    }
    ans=min(ans,curr);
   }
   cout<<ans<<endl;
}
}
return 0;
}