#include<bits/stdc++.h>
#define ll long long
using namespace std;
int solve(int n){
     int pos=1;
     int num=0;
     while(n){
        int dig=n%10;
        n/=10;
        if(dig){
            num+=dig*pos;
            pos*=10;
        }
     }  
     return num; 
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

 int a,b;
 cin>>a>>b;
 int c=a+b;
 int d=solve(a)+solve(b);
 if(solve(c)==d) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
return 0;
}