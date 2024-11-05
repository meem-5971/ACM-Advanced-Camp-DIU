#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e7+10;
vector<bool>isPrime(N,1);
vector<int>lp(N,0),hp(N,0);
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

 isPrime[0]=isPrime[1]=0;
    for(int i=2;i<N;i++){
        if(isPrime[i]){ 
            lp[i]=i,hp[i]=i; //lowest highest prime of a prime is itself
            for(int j=2*i;j<=N;j+=i){
                isPrime[j]=false;
                hp[j]=i;
                if(lp[j]==0)lp[j]=i;
            }
        }
    }
 

//prime factorization

int n;
cin>>n;
vector<int>factors;
while(n>1){
    int prime_factor=hp[n];
    while(n%prime_factor==0){
        n/=prime_factor;
        factors.push_back(prime_factor);
    }
}

//number of prime factors

unordered_map<int,int>prime_factors;
while(n>1){
    int prime_factor=hp[n];
    while(n%prime_factor==0){
        n/=prime_factor;
        prime_factors[prime_factor]++;
    }
}


return 0;
}