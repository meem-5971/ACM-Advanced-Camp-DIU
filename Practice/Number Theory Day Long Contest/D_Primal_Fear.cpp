#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e6+7;
vector<int>fearprimes(N,0);
vector<bool>isPrime(N,1);
void sieve(){
    isPrime[0]=isPrime[1]=0;
    int id=0;
     for(int i=2;i*i<N;i++){
        if(isPrime[i]){
            
            for(ll j=i*i;j<=N;j+=i){
                isPrime[j]=0;
            }
        }
     }   
}
bool fearful(int n){
    int p=1;
    int num=n;

  int mod=1;
   while(mod<=n) {
        int rem=n%(mod*10);
        if (!isPrime[rem]) return false;
        mod *= 10;
    }

    while(num){
        if(num%10==0) return false;
        num/=10;
    }
    return true;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 sieve();
for(int i=2;i<=N;i++){
    if(isPrime[i] && fearful(i)){
        fearprimes[i]++;
        //cout<<i<<endl;
    }
    fearprimes[i]+=fearprimes[i-1];
}

int t;
cin>>t;
while(t--){
int n;
cin>>n;
cout<<fearprimes[n]<<endl;
}
return 0;
}