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
int cnt=0;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x==1) cnt++;
}
if(cnt==0) cout<<"EASY"<<endl;
else cout<<"HARD"<<endl;
 
return 0;
}