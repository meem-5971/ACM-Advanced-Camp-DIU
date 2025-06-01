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
char a[11][11];
for(int i=1;i<=10;i++){
    for(int j=1;j<=10;j++){
        cin>>a[i][j];
    }
}
int ans=0;
for(int i=1;i<=10;i++){
    for(int j=1;j<=10;j++){
        if(a[i][j]=='X'){
            if(i==1 || i==10 || j==1 ||j==10){
                ans+=1;
            }
            else if(i==2 || i==9 ||j==2||j==9){
                ans+=2;
            }
            else if(i==3 || i==8 || j==3 ||j==8){
                ans+=3;
            }
            else if(i==4 || i==7 || j==4 ||j==7){
                ans+=4;
            }
            else if(i==5 || i==6 || j==5 ||j==6){
                ans+=5;
            }
        }
    }
}
cout<<ans<<endl;
}
return 0;
}