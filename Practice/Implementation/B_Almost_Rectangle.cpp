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
int n;
cin>>n;
char a[n][n];
int x1=0,y1=0,x2=0,y2=0;
bool flag=false;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
        if(a[i][j]=='*'){
            if(!flag){
                x1=i,y1=j;
                flag=true;
            }
            else{
                x2=i,y2=j;
            }
        }
    }
}

int x3=0,y3=0,x4=0,y4=0;
if(x1==x2){
    if(x1<n-1){
         x3=(x1+1);
 x4=(x1+1);
    }
    else{
         x3=(x1-1);
 x4=(x1-1);
    }

 y3=y1;
 y4=y2;

}
else if(y1==y2){
   if(y1<n-1){
    y3=y1+1;
    y4=y1+1;
   }
   else{
    y3=y1-1;
    y4=y1-1;
   }
   x3=x1;
   x4=x2;
}
else{
   
        x3=x2,
        x4=x1,
        y3=y1,
        y4=y2;
    
   
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==x3 && j==y3){
            cout<<'*';
        }
        else if(i==x4 && j==y4){
            cout<<'*';
        }
        else{
            cout<<a[i][j];
        }
    }
    cout<<endl;
}
}
return 0;
}