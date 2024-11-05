#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
ll extended_euclid(ll a,ll b,ll&x,ll &y){
 if(b==0){
 x=1;
 y=0;
 return a;
 }
ll x1,y1;
 ll gcd=extended_euclid(b,a%b,x1,y1);
 x=y1;
 y=x1-floor(a/b)*y1;
 //cout<<x<<" "<<y<<endl;
 return gcd;
}
 
int main(){
ll x,y;
ll m,n;
while(cin>>m>>n){
 ll gcd=extended_euclid(m,n,x,y);
 cout<<x<<" "<<y<<" "<<gcd<<endl;
}

 return 0;
}

