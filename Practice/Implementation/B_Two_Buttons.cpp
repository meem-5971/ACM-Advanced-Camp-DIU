#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
int ans=0;
while(n!=m){
    if(m>n){
        if(m%2==0){
            m/=2;
            ans++;
        }
        else{
            m++;
            ans++;
        }
    }
    else if(n>m){
        m++;ans++;
    }
}
cout<<ans+(n-m)<<endl;
 
return 0;
}