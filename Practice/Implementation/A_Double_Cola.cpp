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
while(n>5){
    n/=2;
    n-=2;
}
if(n==1) cout<<"Sheldon"<<endl;
else if(n==2) cout<<"Leonard"<<endl;
else if(n==3) cout<<"Penny"<<endl;
else if(n==4) cout<<"Rajesh"<<endl;
else if(n==5) cout<<"Howard"<<endl;
return 0;
}