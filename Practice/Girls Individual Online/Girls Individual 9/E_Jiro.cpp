#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
string Sab,Sac,Sbc;
cin>>Sab>>Sac>>Sbc;
int a=0,b=0,c=0;

if(Sab=="<"){
    b++;
}
else if(Sab==">"){
    a++;
}
if(Sac=="<"){
    c++;
}
else if(Sac==">"){
    a++;
}
if(Sbc=="<"){
    c++;
}
else if(Sbc==">"){
    b++;
}

if((a>b && a<c) || (a>c && a<b)){
    cout<<"A"<<endl;
}
else if((b>a && b<c) || (b>c && b<a)){
    cout<<"B"<<endl;
}
else{
    cout<<"C"<<endl;
}

 
return 0;
}