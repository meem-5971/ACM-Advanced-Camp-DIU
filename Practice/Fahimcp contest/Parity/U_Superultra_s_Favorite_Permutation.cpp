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
if(n<=4) cout<<-1<<endl;
else{
    for(int i=1;i<=n;i+=2){
        if(i!=5) cout<<i<<" ";
    }
    cout<<"5 4 ";
    for(int i=2;i<=n;i+=2){
        if(i!=4) cout<<i<<" ";
    }
    cout<<endl;
}
}
return 0;
}