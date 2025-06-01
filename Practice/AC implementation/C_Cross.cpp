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
int d=min(h,w);
char grid[h+1][w+1];
for(int i=1;i<=h;i++){
    for(int j=1;j<=w;j++){
        cin>>grid[i][j];
    }
}
map<int,int>mp;
for(int i=2;i<=h-1;i++){
    for(int j=2;j<=w-1;j++){
            int ans=0;
            for(int k=1;k<=d;k++){
                if(i+k>h || i-k<=0||j+k>w ||j-k<=0||grid[i][j]=='.'||grid[i+k][j+k]=='.'||grid[i+k][j-k]=='.'||grid[i-k][j+k]=='.'||grid[i-k][j-k]=='.'){
                    break;
                }
                else{
                    ans=k;
                }
            }
            mp[ans]++;

        
    }
}
for(int i=1;i<=d;i++){
    cout<<mp[i]<<" ";
}
 
return 0;
}