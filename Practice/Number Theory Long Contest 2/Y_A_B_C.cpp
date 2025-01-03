#include<bits/stdc++.h>
#define ll long long
using namespace std;
int binExp(int a, int b,int M){
    int res = 1;

    while(b > 0){
        if(b & 1) res = (res * 1ll*a) % M;
        a = (a *1ll* a) % M;
        b >>= 1;
    }
    return res;
}

int c2[5]={6, 2, 4, 8};
int c3[5]= {1,3, 9, 7};
int c4[3]={6,4};
int c8[5]= {6, 8, 4, 2};
int c7[5]={1,7, 9, 3};
int c9[3]={1,9};

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a,b,c;
cin>>a>>b>>c;
a=a%10;

if(a==0) cout<<0<<endl;
else if(a==1) cout<<1<<endl;
else if(a==2){
    cout<<c2[binExp(b,c,4)]<<endl;
}
else if(a==3){
    cout<<c3[binExp(b,c,4)]<<endl;
}
else if(a==4){
    cout<<c4[binExp(b,c,2)]<<endl;
}
else if(a==5){
    cout<<5<<endl;
}
else if(a==6){
    cout<<6<<endl;
}
else if(a==7){
    cout<<c7[binExp(b,c,4)]<<endl;
}
else if(a==8){
    cout<<c8[binExp(b,c,4)]<<endl;
}
else if(a==9){
    cout<<c9[binExp(b,c,2)]<<endl;
}
 
return 0;
}