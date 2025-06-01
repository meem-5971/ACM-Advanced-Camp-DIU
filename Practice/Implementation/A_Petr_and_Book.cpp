#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<int>a(7);
ll sum=0;
for(int i=0;i<7;i++){
    cin>>a[i];
    sum+=a[i];
}
int ans=0;
    int i=0;
    while(n>0){
        
        n-=a[i%7];
        ans++;
        i++;
    }

if(ans%7==0) cout<<7<<endl;
else cout<<ans%7<<endl;

 
return 0;
}