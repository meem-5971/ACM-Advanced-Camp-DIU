#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=100000000;
vector<int>primes;
vector<bool>isPrime(N,1);
void sieve(){
    isPrime[0]=isPrime[1]=0;
    int id=0;
     for(int i=2;i*i<=N;i++){
        if(isPrime[i]){
            
            for(ll j=i*i*1ll;j<=N;j+=i){
                isPrime[j]=0;
            }
        }
     }   
}

int main(){
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
    sieve();
    int id=0;
  for(int i=2;i<=N;i++){
    if(isPrime[i]){
   id++;
   if(id%100==1){
    cout<<i<<endl;
   }
  }
  }
}