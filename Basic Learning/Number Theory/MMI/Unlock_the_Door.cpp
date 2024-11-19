#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int M=1e9+7;
const int N=1e5+10;
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
fact[0]=1;
 for(int i=1;i<N;i++){
fact[i]=(fact[i-1]*1ll*i)%M;
 }
 //sol --> n! * kCn --> n! *( k! /(k-n)!*n!)
int t;
cin>>t;
while(t--){
  int n,k;
  cin>>n>>k;
  int ans=fact[n];
  ans=(ans*1ll*fact[k])%M;
  int den = (fact[k-n]*1ll*fact[n])%M;
  ans=(ans*1ll*binexp(den,M-2,M))%M;
  cout<<ans<<"\n";

}
return 0;
}