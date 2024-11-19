//N childrens and K toffes(N>k)
//count the num of ways to distribute toffes among N childres
//such that each child get 1 toffe. 
//Calculate it in modulo M=1e9+7
//q queries
//K<N<10^6

//Approach --> nCk % M  
//ncr = n!/((n-r)! * r!)

#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int M=1e9+7;
const int N=1e6+7;
int fact[N];

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
fact[0]=1;
 for(int i=1;i<N;i++){
fact[i]=(fact[i-1]*1ll*i)%M;
 }
 int q;
 cin>>q;
 while(q--){
    int n,k;
    cin>>n>>k;
    int ans=fact[n];
    int den=(fact[n-k]*1ll*fact[k])%M;
    ans = (ans * 1LL * binexp(den, M - 2, M)) % M;
    cout<<ans<<"\n";
 }
return 0;
}