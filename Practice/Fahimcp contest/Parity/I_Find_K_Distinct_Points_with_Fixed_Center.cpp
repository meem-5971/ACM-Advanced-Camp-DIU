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
int x,y,k;
cin>>x>>y>>k;
if(k%2==0){
    for(int i=1;i<=k/2;i++){
        cout<<x-i<<" "<<y-i<<endl;
        cout<<x+i<<" "<<y+i<<endl;
    }
}
else{
    cout<<x<<" "<<y<<endl;
      for(int i=1;i<=k/2;i++){
        cout<<x-i<<" "<<y-i<<endl;
        cout<<x+i<<" "<<y+i<<endl;
    }
}
}
return 0;
}