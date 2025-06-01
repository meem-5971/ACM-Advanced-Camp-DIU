#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=5000000;
vector<int>PrimeFactors(N+1,0);
vector<ll>PreSum(N+1,0);
void factorize(){
    for(int i=2;i<=N;i++){
        if(PrimeFactors[i]==0){
            for(int j=i;j<=N;j+=i){
                int num=j;
                while(num%i==0){
                    PrimeFactors[j]++;
                    num/=i;
                }
            }
        }
    }

    for(int i=1;i<=N;i++){
        PreSum[i]=PreSum[i-1]+PrimeFactors[i];
    }
        
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 factorize();
int t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;
//(a!/b!) ranges from a to b+1
cout<<PreSum[a]-PreSum[b]<<endl;
}
return 0;
}