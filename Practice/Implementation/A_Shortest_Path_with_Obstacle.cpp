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
int xa,ya,xb,yb,xf,yf;
cin>>xa>>ya>>xb>>yb>>xf>>yf;
if((xa == xb && xa == xf && ((ya < yf && yf < yb) || (yb < yf && yf < ya))) || 
(ya == yb && ya == yf && ((xa < xf && xf < xb) || (xb < xf && xf < xa))) ){
    cout<<abs(xa - xb) + abs(ya - yb)+2<<endl;
}
else{
    cout<<abs(xa - xb) + abs(ya - yb)<<endl;
}
}
return 0;
}