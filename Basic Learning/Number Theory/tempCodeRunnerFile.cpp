#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int M=1e9+7;

int binExpItr(int a, int b){
    int res = 1;
    while(b > 0){
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
  int a=2,b=13;
 cout<<binExpItr(a,b);
return 0;
}