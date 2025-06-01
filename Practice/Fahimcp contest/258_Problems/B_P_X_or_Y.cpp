#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x,y;
cin>>x>>y;


    int cnt=0;
    for(int i=1;i<=6;i++){
        for(int j=1;j<=6;j++){
            if((i+j)>=x ||abs(i-j)>=y) cnt++;
        }
    }
    double ans=(double)cnt/36.0;
    cout<<fixed<<setprecision(10)<<ans<<endl;

 
return 0;
}