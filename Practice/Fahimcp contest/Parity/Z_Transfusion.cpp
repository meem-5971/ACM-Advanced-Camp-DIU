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
ll n;
cin>>n;
ll sum1=0,sum2=0,sum=0;
vector<ll>a(n+1);
for(int i=1;i<=n;i++){
    cin>>a[i];
    if(i%2) sum1+=a[i];
    else sum2+=a[i];
    sum+=a[i];
}
if(sum%n==0){
    ll odd=(n+1)/2;
    ll ev=n-odd;
    ll avg=sum/n;
    if(sum1==odd*avg && sum2==ev*avg){
        cout<<"YES"<<endl;
        continue;
    }
   
}

    cout<<"NO"<<endl;
}

return 0;
}