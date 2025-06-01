#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int h,w;
cin>>h>>w;
vector<vector<char>>grid(h, vector<char>(w));
for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
        cin>>grid[i][j];
    }
}
int row=0, col=0;
int uprow=INT_MAX,colstr=INT_MAX,lowrow=0,colend=0;
for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
        if(grid[i][j]=='#'){
           uprow=min(uprow,i);
           lowrow=max(lowrow,i);
          colstr=min(colstr,j);
          colend=max(colend,j);
        }
    }
}
for(int i=uprow;i<=lowrow;i++){
    for(int j=colstr;j<=colend;j++){
        if(grid[i][j]=='.'){
            cout<<i+1<<' '<<j+1<<endl;
            break;
        }
    }
}
 
return 0;
}