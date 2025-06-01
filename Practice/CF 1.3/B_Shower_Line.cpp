#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int g[7][7];
for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        cin>>g[i][j];
    }
}
int pos[7]={0,1,2,3,4,5};
ll ans=0;
do{
    ll sum=0;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j+=2){
            sum+=g[pos[j]][pos[j+1]]+g[pos[j+1]][pos[j]];
        }
    }
    ans=max(ans,sum);
}while(next_permutation(pos+1,pos+6));

cout<<ans<<endl;
 
return 0;
}