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
int n,h,m;
cin>>n>>h>>m;
int ans=0;
int res=INT16_MAX;
while(n--){
    ans=0;
    int hh ,mm;
    cin>>hh>>mm;
    if(hh<h){
        ans+=((24-h)+hh);
    }
    else{
        ans+=(hh-h);
    }
    ans*=60;
    
   
   if(m==0){
   
    ans+=mm;
   }
   else{
       if(mm<m){
            ans+=(60-m);
            ans+=mm;
           
        }
        else{
           ans+=(mm-m);
        }
    
   }
   if(h!=hh) ans-=60;
    
    res=min(res,ans);
}
cout<<res/60<<" "<<res%60<<endl;

}
return 0;
}