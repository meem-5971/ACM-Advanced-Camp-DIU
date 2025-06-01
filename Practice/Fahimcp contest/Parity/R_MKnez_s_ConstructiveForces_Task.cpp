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
if(n%2==0){
    cout<<"YES"<<endl;
    for(int i=0;i<n;i+=2){
        cout<<1<<" "<<-1<<" ";
    }
    cout<<endl;
}
else if(n==1 || n==3){
    cout<<"NO"<<endl;
}
else{
       cout<<"YES"<<endl;
       int x=n/2;
    for(int i=0;i<n-1;i+=2){
        cout<<-1*(x-1)<<" "<<x<<" ";
    }
    cout<<-1*(x-1)<<endl;
}
}
return 0;
}