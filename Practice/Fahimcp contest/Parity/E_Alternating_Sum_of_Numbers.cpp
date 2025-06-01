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
for(int i=1;i<=n;i++){
    int x;
    cin>>x;
    if(i%2==1) sum+=x;
    else sum-=x;
}
cout<<sum<<endl;
}
return 0;
}