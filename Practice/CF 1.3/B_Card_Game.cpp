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
int a1,a2,b1,b2;
cin>>a1>>a2>>b1>>b2;
int count=0;
if(a1 >b1 && a2>b2) count++;
if(a1>b2 && a2>b1) count++;
if(a2>b1 && a1>b2) count++;
if(a2>b2 && a1>b1) count++;
if(a1==b1 && a2> b2) count+=2;
if(a1==b2 && a2>b1) count+=2;
if(a2==b1 && a1> b2) count+=2;
if(a2==b2 && a1>b1) count+=2;
cout<<count<<endl;
}
return 0;
}