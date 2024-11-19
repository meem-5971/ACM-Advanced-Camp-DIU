#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int M=1e9+7;

//b<=10^18 
int binExp(int a, int b,int m){
    
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
  //50^64^32 %M
 cout<<binExp(50,binExp(64,32,M-1),M);
return 0;
}