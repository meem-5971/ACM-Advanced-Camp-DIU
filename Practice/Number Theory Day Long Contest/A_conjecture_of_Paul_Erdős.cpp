#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=10000000;
vector<int>primes;
vector<bool>isPrime(N,1);
 vector<ll>countP(N+1,0);
void sieve(){
    isPrime[0]=isPrime[1]=0;
    int id=0;
     for(int i=2;i*i<=N;i++){
        if(isPrime[i]){
           // primes.push_back(i);
            for(ll j=i*i*1ll;j<=N;j+=i){
                isPrime[j]=0;
            }
        }
     }   
}
int main(){

 sieve();

for(int x=1;x*x<=N;x++){
    for(int y=1;y*y*y*y<=N;y++){
        ll num= x*x+y*y*y*y;
        if(isPrime[num] && num<=N){
            countP[num]=1;
        }
    }
}
for(int i=1;i<=N;i++){
    countP[i]+=countP[i-1];
    }

int t;
cin>>t;
while(t--){
int n;
cin>>n;
int ans=0;
cout<<countP[n]<<endl;
}
return 0;
}