#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=3001;
vector<int>primes;
vector<bool>isPrime(N,1);
void sieve(){
    isPrime[0]=isPrime[1]=0;
     for(int i=2;i<=N;i++){
        if(isPrime[i]){
            primes.push_back(i);
            for(int j=i;j<=N;j+=i){
                isPrime[j]=0;
            }
        }
     }   
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
sieve();
int n;
cin>>n;
int res=0;
for(int i=2;i<=n;i++){
int cnt=0;
for(auto u:primes){
    if(i%u==0){
        cnt++;
    }
}
if(cnt==2) res++;
}
cout<<res<<endl;


return 0;
}