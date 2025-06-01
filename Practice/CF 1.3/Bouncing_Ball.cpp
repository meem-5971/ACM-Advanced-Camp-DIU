#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int t;
cin>>t;
while(t--){
int n;
cin>>n;
ll sum=0;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
}
ll leftsum=0;
ll ans=0;
for(int i=0;i<n;i++){
    if(a[i]==0){
        ll rightsum=sum-leftsum;
        if(abs(rightsum-leftsum)==0){
            ans+=2;
        }
        else if(abs(rightsum-leftsum)==1){
            ans+=1;
        }
    }
    leftsum+=a[i];
}
cout<<ans<<"\n";
}

return 0;
}