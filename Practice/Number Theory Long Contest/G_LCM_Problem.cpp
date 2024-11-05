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
ll l,r;
cin>>l>>r;

if(r%l==0){
    cout<<l<<" "<<r<<endl;
}
else if((r-l)>=l){
    cout<<l<<" "<<2*l<<endl;
}
else{
    cout<<-1<<" "<<-1<<endl;
}

}
return 0;
}