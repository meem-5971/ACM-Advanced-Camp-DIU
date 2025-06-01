#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
bool flag=true;
int x3=0,y3=0,x4=0,y4=0;
if(x1==x2){
    y3=min(y1,y2);
    y4=max(y1,y2);
    x3=x4=(abs(y1-y2)+x1);
}
else if(y1==y2){
    x3=min(x1,x2);
    x4=max(x1,x2);
    y3=y4=(abs(x1-x2)+y1);
}
else{
    if(abs(x1-x2)==abs(y1-y2)){
        x3=x1,
        x4=x2,
        y3=y2,
        y4=y1;
    }
    else{
        flag=false;
    }
}

if(flag) cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
else cout<<-1<<endl;
 
return 0;
}