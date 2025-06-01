#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e7+1;
vector<int>primes;
vector<bool>isPrime(N,1);

void sieve(){
           isPrime[0]=isPrime[1]=0;
    int id=0;
     for(int i=2;i*i<=N;i++){
        if(isPrime[i]){
         primes.push_back(i);
            for(ll j=i*i*1ll;j<=N;j+=i){
                isPrime[j]=0;
            }
        }
     } 
}
int main(){
sieve();
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
if(n>2) cout<<2<<endl;
else cout<<1<<endl;
for(int i=2;i<=n+1;i++){
 if(isPrime[i]) cout<<1<<" ";
    else cout<<2<<" ";
}


return 0;
}