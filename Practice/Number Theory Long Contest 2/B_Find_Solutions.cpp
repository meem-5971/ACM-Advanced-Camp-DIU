#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=40000000;
vector<int>isPrime(N,1);
vector<int> prime;
void seive(){
    isPrime[0]=isPrime[1]=0;
    for(int i=2;i<N;i++){
        // without if condition : NlogN , with if : N(log(logN))
        if(isPrime[i]){ 
            prime.push_back(i);
            for(int j=2*i;j<=N;j+=i){
                isPrime[j]=0;
            }
        }
    }
        
}
ll countdivsr(ll n){
    int id=1;
    int res=1;
    ll pfactor= prime[0];

    while(pfactor*pfactor <=n){
        int power=0;
        while(n%pfactor==0){
            power++;
            n/=pfactor;
        }
        res*=(power+1);
        pfactor=prime[id];
        id++;
    }
    if(n!=1) res*=2;

    return res;

}


int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll c;
seive();
while(cin>>c && c!=0){
ll n=4*c-3;
cout<<c<<" "<<countdivsr(n)<<endl;
}
 
return 0;
}