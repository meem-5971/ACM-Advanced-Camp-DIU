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
char a[n][n];
char b[n][n];

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>b[i][j];
    }
}
int res1=0,res2=0;
bool flag=true;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(a[i][j]!=b[i][j]){
            res1=i+1;
         res2=j+1;
         flag=flag;
         break;
        }
    }
    if(!flag) break;
}
cout<<res1<<" "<<res2<<endl;
return 0;
}