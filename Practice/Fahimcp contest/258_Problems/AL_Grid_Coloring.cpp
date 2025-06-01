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
int n;
cin>>n;
vector<int>a(n+1);
for(int i=1;i<=n;i++) cin>>a[i];
vector<vector<int>>grid(h, vector<int>(w));
int color=1,cnt=0;int k=1;
for(int i=0;i<h;i++){
    if(i%2==0){
        for(int j=0;j<w;j++){

            grid[i][j]=color;
            cnt++;
            if(cnt==a[k]){
                color++;
                k++;
                cnt=0;
            }

        }
    }
    else{
        for(int j=w-1;j>=0;j--){

            grid[i][j]=color;
            cnt++;
            if(cnt==a[k]){
                color++;
                k++;
                cnt=0;
            }

        }
    }
}
for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
        cout<<grid[i][j]<<" ";
    }
    cout<<endl;
}
 
return 0;
}