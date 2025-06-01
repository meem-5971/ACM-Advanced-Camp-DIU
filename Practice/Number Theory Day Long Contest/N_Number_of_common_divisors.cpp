#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e6;
vector<int>divisor_count(N+1,0);
void sieve(){
      for(int i=1;i<=N;i++){
        for(int j=i;j<=N;j+=i){
            divisor_count[j]++;
        }
      }  
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 sieve();
int t;
scanf("%d",&t);
while(t--){
int a,b;
scanf("%d %d", &a, &b); 

int gcd=__gcd(a,b);


printf("%d\n",divisor_count[gcd]);
}
return 0;
}