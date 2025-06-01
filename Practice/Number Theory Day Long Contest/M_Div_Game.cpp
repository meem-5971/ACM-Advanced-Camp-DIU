#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;

int cnt=0;
for(ll i=2;i<=sqrt(n);++i){
    int powr=0;
    while(n%i==0){
        powr++;
        n/=i;
    }
    for(int j=1;powr-j>=0;j++){
        powr-=j;
        cnt++;
    }
}
if(n>1){
   cnt++;
}
cout<<cnt<<endl;
 
return 0;
}