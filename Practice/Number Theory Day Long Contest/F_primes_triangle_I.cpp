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
         //   primes.push_back(i);
            for(ll j=i*i*1ll;j<=N;j+=i){
                isPrime[j]=0;
            }
        }
     } 
     for(int i=2;i<=N;i++){
        if(isPrime[i]){
            primes.push_back(i);
        }
     }  
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 sieve();
 vector<pair<int,int>>primepos(N+1,{-1,-1});
int id=0;
int row=1;

while(id<primes.size()){
 for(int col=0;col<row;col++){
    if(id>=primes.size()) break;
    int prime=primes[id];
    primepos[prime]={row,col+1};
    id++;
 }
 row++;
}

int t;
cin>>t;
while(t--){
int n;
cin>>n;
if(primepos[n].first!=-1){
    cout<<primepos[n].first<<" "<<primepos[n].second<<endl;
}
else{
    cout<<-1<<endl;
}
}
return 0;
}