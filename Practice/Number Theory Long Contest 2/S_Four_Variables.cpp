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

ll ans=0;
for(int i=1;i<=n;i++){
    ll ab=i,cd=n-i;

    ll x=0,y=0;
    for(int j=1;j*j<=ab;j++){
        if(ab%j==0) {
            x++;
            if((ab/j)!=j) x++;
        }
    }
    for(int j=1;j*j<=cd;j++){
        if(cd%j==0) {
            y++;
            if((cd/j)!=j) y++;
        }
    }
    ans+=x*y;
}
cout<<ans<<endl;
 
return 0;
}