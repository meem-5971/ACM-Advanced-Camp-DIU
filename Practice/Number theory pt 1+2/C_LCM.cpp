#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1000001;
int prime[N];
int isPrime[N];
int size[N];

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//prime_count keeps track of the total number of primes stored in prime[]
//The prime[] array stores all primes generated up to 𝑁=10^6 using the sieve.
int prime_count=0;
   
    for(int i=2;i<N;i++){
        if(!isPrime[i]){ 
            prime[prime_count++]=i;
            for(int j=2*i;j<=N;j+=i){
                isPrime[j]=1;
            }
        }
    }


int n;
while(cin>>n && n){
  memset(size,0,sizeof(size));
        //size[i] will store the power of the i-th prime in the LCM of numbers from 1 to 𝑛
        for (int i = 0; i < prime_count && prime[i] <= n; ++i) {
            long long now = prime[i];
            long long bound = n;
            size[i] = 0;
            //counting the power of prime factors
            while (now <= bound) {
                now *= prime[i];
                size[i]++;
            }
        }
        //size[0]--> 2 , size[1]-->3 ,size[2]-->5
        //size[0] contains the power of 2 ,size[2] contains the power of 5
        //equal number of 2,5 can't exist
        size[0] -= min(size[2],size[0]);  
        size[2] -= min(size[2],size[0]); 


//Powers of primes other than 2 and 5 exhibit cyclic patterns for their last digits modulo 10
//cycle(3,9,7,1)

        int ans = 1;
        for (int i = 0; i < prime_count && prime[i] <= n; ++i) {
            if (i != 0 && i != 2) { 
                size[i] %= 4; //removed unnecessary iterations
            }
            for (int j = size[i]; j > 0; --j) {
                ans = (ans * prime[i]) % 10; 
            }
        }

        cout << ans << endl;
}

return 0;
}