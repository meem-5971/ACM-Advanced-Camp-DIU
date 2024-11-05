#include<bits/stdc++.h>
#define ll long long
using namespace std;


const ll MOD=998244353;
int main(){

 

ll n;
cin>>n;

n%=MOD;

if(n<0) n+=MOD;

cout<<n<<endl;

return 0;
}