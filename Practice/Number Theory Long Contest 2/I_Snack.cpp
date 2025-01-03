#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll a,b;
cin>>a>>b;

ll ans=0;
for(ll i=1;i<=b;i++){
    if((a*i)%b==0){
        cout<<a*i<<endl;
        break;
    }
}

 
return 0;
}