#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll M=1e18+7;

//M<=10^18 


int binMulti (ll a, ll b){
    int ans=0;
    while(b>0){
        if(b&1)
        ans=(ans+a)%M;
    a=(a+a)%M;
    b>>=1;
    }
    
    return ans;

}

int binExp(ll a, ll b){
    a%=M; //a<10^18
    a=binExp(2,1024); //a<2^1024
    int res = 1;
    while(b &1){
        if(b & 1) res = binMulti(res,a);
        a = binMulti(a,a);
        b >>= 1;
    }
    return res;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
  int a=2,b=14;
 cout<<binExp(a,b);
return 0;
}