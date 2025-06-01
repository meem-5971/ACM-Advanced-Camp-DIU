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
char grid[n][n];
char subgrid[m][m];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>grid[i][j];
    }
}
for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        cin>>subgrid[i][j];
    }
}
bool paichi=false;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i+m>n ||j+m>n) continue;
        bool milche=true;;
        for(int x=0;x<m;x++){
            for(int y=0;y<m;y++){
                if(grid[i+x][j+y]!=subgrid[x][y]){
                    milche=false;
                }
            }
        }
        if(milche) paichi=true;

    }
}
if(paichi) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
return 0;
}