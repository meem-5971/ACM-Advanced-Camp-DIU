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
int cnt1=0,cnt2=0;
int cage=0,ans=0;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x==1){
        cnt1++;
    }
    else{
        cnt2+=cnt1;
        cnt1=0;
    }
    if(cnt2>0) cage=(cnt2/2)+1;
    ans=max(ans,cnt1+cage);
}
cout<<ans<<endl;
}
return 0;
}