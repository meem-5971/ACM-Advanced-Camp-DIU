#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int ans=2;
    int t=0;
    for(int i=2;i<=n;i++){
       
       int sum=0;
       for(int j=2;j<=n;j++){
       if(j%i==0){
        sum+=j;
       }
       }
       if(sum>t){
        ans=i;
        t=sum;
       }
       
        
    }
    cout<<ans<<"\n";
 
}
return 0;
}