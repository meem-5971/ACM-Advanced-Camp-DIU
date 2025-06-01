#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m,a,b;
cin>>n>>m>>a>>b;

int d=n/m;
int e=n%m;
cout<<min(n*a,(d*b)+(e*a))<<endl;
 
return 0;
}