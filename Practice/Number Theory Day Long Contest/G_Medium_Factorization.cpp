#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e7+1;
vector<int>primes;
vector<bool>isPrime(N,1);
vector<int>lp(N,0),hp(N,0);
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
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 sieve();
int n;
while(scanf("%d", &n) != EOF){
    if(n==1) {
        printf("1\n");
        continue;
    }
//cin>>n;
vector<int>factors;
int tmp=n;

for(int p:primes){
    if(p*p>tmp) break;
    while(tmp%p==0){
        factors.push_back(p);
        tmp/=p;
    }
}
if(tmp>1) factors.push_back(tmp);

printf("1");

for(int f:factors){
    printf(" x %d",f);
}
printf("\n");
}
return 0;
}