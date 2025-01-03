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
int ans=INT_MAX;
if(sum%2==0) cout<<0<<endl;
else{
    for(int i=0;i<n;i++){
            if(a[i]%2==1){
                int x=a[i];
                int cnt=0;
                while((x%2==1)){
                    x/=2;
                    cnt++;
                }
                ans=min(ans,cnt);
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                int x=a[i],cnt=0;
                while(x>0 and (x%2==0)){
                    x/=2;
                    cnt++;
                }
                ans=min(ans,cnt);
            }
        }
        cout<<ans<<endl;
}


}
return 0;
}