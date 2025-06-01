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
int a;
cin>>a;
//sum of the exterior angle of a regular polygon is 360
if(360%(180-a)!=0) cout<<"NO"<<endl;
else cout<<"YES"<<endl;
}
return 0;
}