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
int i=1;
while(n>0){
    n--;
    if(i%m==0){
        n++;
    }
    ans++;
   i++;
}
 
 cout<<ans<<endl;
return 0;
}