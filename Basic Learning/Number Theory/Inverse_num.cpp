//using modular multiplicative inverse
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int M=1e9+7;
int binexp(int a,int b,int m){
    int res=1;
    while(b>0){
        if(b&1) res=(res*1ll*a)%m;
        a=(a*1ll*a)%m;
        b>>=1;
    }
    return res;
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 cout<<binexp(2,M-2,M);
return 0;
}