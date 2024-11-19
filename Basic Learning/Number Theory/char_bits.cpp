#include<bits/stdc++.h>
#define ll long long
using namespace std;
void printBinary(int num){
    for(int i=10;i>=0;i--){
    cout<<((num>>i)&1);
}     
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 char c;
 cin>>c;
 printBinary(int(c));

 //uppercase to lowercase
 char A='A';
 char a= A| ' ';
 cout<<a<<'\n';

 //lowercase to uppercase
 char B='b';
 char b= B& '_';
 cout<<b<<'\n';

 //ASCII value of a character
 char ch='A';
 cout<<int(ch)<<'\n';
 
return 0;
}