#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int M=1e9+7;

//a<=10^18 / 2^1024
int binExp(int a, int b){
    a%=M; //a<10^18
    a=binExp(2,1024); //a<2^1024
    int res = 1;
    while(b >1){
        if(b & 1) res = (res * 1ll*a) % M;
        a = (a *1ll* a) % M;
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