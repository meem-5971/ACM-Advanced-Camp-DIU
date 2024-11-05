#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N=1e7+10;
vector<bool>isPrime(N,1);
void seive(){
    isPrime[0]=isPrime[1]=0;
    for(int i=2;i<N;i++){
        // without if condition : NlogN , with if : N(log(logN))
        if(isPrime[i]){ 
            for(int j=2*i;j<=N;j+=i){
                isPrime[j]=0;
            }
        }
    }
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    seive();
    if(isPrime[n]) cout<<n<<" is a prime number."<<endl;
    else cout<<n<<" is not a prime number."<<endl;
} 

return 0;
}