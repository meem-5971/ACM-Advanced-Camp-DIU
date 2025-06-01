#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=10000000;
vector<int>primes;
vector<bool>isPrime(N,1);
void sieve(){
    isPrime[0]=isPrime[1]=0;
     for(int i=2;i<=N;i++){
        if(isPrime[i]){
            primes.push_back(i);
            for(int j=2*i;j<=N;j+=i){
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
 int t=0;
for(auto p:primes){
t++;
if(t==n){
    cout<<p<<endl;
    break;
}
}
return 0;
}