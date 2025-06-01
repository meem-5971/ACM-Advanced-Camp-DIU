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
int a,b,c;
cin>>a>>b>>c;
bool flag=false;
int na=b-(c-b);
if(na>=a && na%a==0 && na!=0){
    flag=true;
   
}
int nb=a+(c-a)/2;
if(nb>=b && nb%b==0 && nb!=0 && (c-a)%2==0){
    flag=true;
    
}
int nc=b+(b-a);
if(nc>=c && nc%c==0 && nc!=0){
    flag=true;
  
}
if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
return 0;
}