#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
ll n,p;
cin>>n>>p;
ll res=1;
if(n==1) cout<<p<<endl;
else{
    for(ll i=2;i*i<=p;i++){
       ll powr=0;
       while(p%i==0){
        //factorization
        powr++;//power count of factors
        p/=i;
       } 

       while(powr>=n){
        //power distribution of factors for n numbers
        powr-=n;
        res*=i;
       }
    }
    cout<<res<<endl;
}
return 0;
}