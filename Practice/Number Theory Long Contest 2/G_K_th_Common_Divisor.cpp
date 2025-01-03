#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a,b,k;
cin>>a>>b>>k;

int x=min(a,b);
int t=0,ans=0;
for(int i=x;i>=1;i--){
    if(a%i==0 && b%i==0){
        t++;    
    }
    if(t==k){
        ans=i;
        break;
    }

}
cout<<ans<<endl;
 
return 0;
}