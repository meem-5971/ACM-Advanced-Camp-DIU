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
if(n<m){
    cout<<-1<<endl;
}
else{
    bool flag=false;
    int mv=(n)/2;
    if(mv%m==0 && n%2==0) cout<<mv<<endl;
    else{
    int t=0;
    for(int i=(n/2)+1;i<=n;i++){
        t++;
        if(i%m==0){
          mv+=t;
            flag=true;
            break;
        }
        
    }
    if(!flag) cout<<-1<<endl;
    else cout<<mv<<endl;
    }
}
return 0;
}