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
int n,m;
cin>>n>>m;
char grid[n][m];
int row=0;
int mx=0;
for(int i=0;i<n;i++){
    int cnt=0;
    for(int j=0;j<m;j++){
     cin>>grid[i][j];
     if(grid[i][j]=='#'){
        cnt++;
     }
    }
    if(cnt>mx){
        row=i;
        mx=cnt;
    }
}
int start=0,end=0;
for(int i=0;i<m;i++){
    if(grid[row][i]=='#'){
        start=i;
        break;
    }
}
for(int i=m-1;i>=0;i--){
    if(grid[row][i]=='#'){
        end=i;
        break;
    }
}

cout<<row+1<<" "<<((start+end)/2)+1<<endl;
}
return 0;
}