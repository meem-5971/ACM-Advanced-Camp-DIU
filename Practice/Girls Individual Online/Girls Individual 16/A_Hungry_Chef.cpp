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
ll x,y,n,r;
cin>>x>>y>>n>>r;
ll a=0,b=n;
ll amnt=b*y;
bool flag=false;
while(b>=0){
    if(b*y +(n-b)*x<=r){
        flag=true;
        cout<<n-b<<" "<<b<<endl;
        break;
    }
    b--;
}
if(!flag) cout<<-1<<endl;

}
return 0;
}