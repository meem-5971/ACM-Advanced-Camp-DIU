#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e6;
const int MaxFactor=10;
vector<int>factors(N+1,0);
int prefix[N+1][MaxFactor+1];
void factorize(){
    for(int i=2;i<=N;i++){
        if(factors[i]==0){//i is a prime number
            for(int j=i;j<=N;j+=i){
                factors[j]++;//storing i as prime factors in its each multiple(j)
            }
        }
    }
//prefix sum array
    for(int i=1;i<=N;i++){
        for(int n=0;n<=MaxFactor;n++){
            prefix[i][n]=prefix[i-1][n]+(factors[i]==n); //1 added if i has n distinct prime factors
        }
    }
        
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 factorize();
int t;
cin>>t;
while(t--){
int a,b,n;
cin>>a>>b>>n;
//fact[1]=0
if(a>1){
    cout<<prefix[b][n]-prefix[a-1][n]<<endl;
}
else{
     cout<<prefix[b][n]<<endl;
}
}
return 0;
}