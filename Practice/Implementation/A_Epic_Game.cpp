#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a,b,n;
cin>>a>>b>>n;

int k=0;
while(n>=0){
    if(k==0){
    n-=__gcd(a,n);
    k=1;
    } 
    else{
        n-=__gcd(b,n);
        k=0;
    }
}
cout<<k<<endl;
return 0;
}