#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll a,b,c;
cin>>a>>b>>c;

ll d=abs(b-a), e=abs(c-b);

if(a>b && b<c) cout<<(d+e)/2<<endl;
else cout<< abs(d-e)<<endl;
 
return 0;
}