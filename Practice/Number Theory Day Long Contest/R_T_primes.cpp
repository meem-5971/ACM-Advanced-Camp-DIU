#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e6;

vector<bool>isPrime(N+1,1);
void sieve(){
    isPrime[0] = isPrime[1] = false; 
    for (int i = 2; i * i <= N; i++) {
        if (isPrime[i]) {
           // primes.push_back(i);
            for (ll j = i * i; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    } 
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
sieve();
int t;
cin>>t;
for(int i=0;i<t;i++){
    ll n;
    cin>>n;
if(n==1){
    cout<<"NO"<<endl;
    continue;
}
   ll rootnum=sqrt(n);
   if((rootnum*rootnum==n) && isPrime[rootnum]){
    cout<<"YES"<<endl;
   }
   else{
    
    cout<<"NO"<<endl;
   }
}
 
return 0;
}