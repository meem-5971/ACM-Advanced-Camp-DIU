#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e7+10;
vector<bool>isPrime(N,1);
vector<ll>primes;
void seive(){
    isPrime[0]=isPrime[1]=0;
    for(int i=2;i<N;i++){
        // without if condition : NlogN , with if : N(log(logN))
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
 
seive();
int n;
cin>>n;
for(int i=0;i<n;i++){
    cout<<primes[i]<<" ";
}
cout<<endl;
return 0;
}