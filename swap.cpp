#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,n3,n4,n5,a,b,f1=0,f2=0,f3=0,f4=0,f5=0;
    cin>>n1>>n2>>n3>>n4>>n5;
    cout<<endl;
    cin>>a>>b;

    if(a==n1){
        n1=b;
        f1=1;}

    if(a==n2){
        n2=b;
        f2=1;}

    if(a==n3){
        n3=b;
        f3=1;}

    if(a==n4){
        n4=b;
        f4=1;}

    if(a==n5){
        n5=b;
        f5=1;}

    if(b==n1&&f1==0)
        n1=a;

    if(b==n2&&f2==0)
        n2=a;

    if(b==n3&&f3==0)
        n3=a;

    if(b==n4&&f4==0)
        n4=a;

    if(b==n5&&f5==0)
        n5=a;

    cout<<n1<<" "<<n2<<" "<<n3<<" "<<n4<<" "<<n5;

 return 0;
}
