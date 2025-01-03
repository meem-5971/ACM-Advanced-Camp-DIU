#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll valid(ll x){
ll p=x;
ll len=0;
while(p){
    len++; //counting no of digits
    p/=10;
}
ll ans=x*1ll*(pow(10,len)); //2nd half determining
ans+=x;
return ans;

}

   

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);


    ll n;
    cin>>n;
    ll cnt=0;
    for(int i=1;i<=1000000;i++){
        ll x=valid(i);
        if(x<=n) cnt++;
    }
 cout<<cnt<<endl;
 
return 0;
}