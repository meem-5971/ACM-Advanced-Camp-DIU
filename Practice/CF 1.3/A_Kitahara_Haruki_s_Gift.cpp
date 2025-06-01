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
int cnt1=0,cnt2=0;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x==100) cnt1++;
    if(x==200) cnt2++;
}
if(n==1) cout<<"NO"<<endl;
else if(cnt2*2==cnt1)  cout<<"YES"<<endl;
else if(cnt2==0 && cnt1%2==0) cout<<"YES"<<endl;
else if(cnt1==0 && cnt2%2==0) cout<<"YES"<<endl;
else if(cnt1+1>cnt2){
    cnt1=(cnt1- 2*cnt2);
    if(cnt1%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
else if(cnt1%2==0 && cnt2%2==0){
    cout<<"YES"<<endl;
}
else if(cnt2%2==1 && cnt1%2==0 && cnt1>1){
    cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;
 
return 0;
}