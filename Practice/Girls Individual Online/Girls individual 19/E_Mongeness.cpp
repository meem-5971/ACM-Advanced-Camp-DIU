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
int grid[h][w];
for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
        cin>>grid[i][j];
    }
}
bool flag=true;
for(int i=0;i<h-1;i++){
    for(int j=0;j<w-1;j++){
        if((grid[i+1][j]+grid[i][j+1])<(grid[i][j]+grid[i+1][j+1])){
            flag=false;
            break;
        }
    }
    if(!flag) break;
}
if(flag) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
return 0;
}