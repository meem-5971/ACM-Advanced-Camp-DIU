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
char pix[n][m];
bool flag=false;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>pix[i][j];
        if(pix[i][j]=='C' || pix[i][j]=='Y' || pix[i][j]=='M'){
            flag=true;
        }
    }
}
if(flag) cout<<"#Color"<<endl;
else cout<<"#Black&White"<<endl;
 
return 0;
}