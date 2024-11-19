#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int M=1e9+7;

int binExpRecur(int a,int b){
    if(b==0)return 1;
    long res= binExpRecur(a,b/2);
    if(b&1){
        return ((res*1ll*res)%M*a)%M;
    }
    else{
        return (res*1ll*res)%M;
    }
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 int a=2,b=13;
 cout<<binExpRecur(a,b);
return 0;
}