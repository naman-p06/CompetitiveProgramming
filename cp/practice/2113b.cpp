#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long w,h,a,b;
    cin>>w>>h>>a>>b;
    long long x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    // first y axis 
    long long start=y1;
    long long end=y1+b;
    long long start2=y2;
    long long end2=y2+b;
    long long startx=x1;
    long long endx=x1+b;
    long long start2x=x2;
    long long end2x=x2+b;
    if(x1<=0&&a+x1>=w&&y1<=0&&y1+b>=h){
        cout<<"YES"<<endl;
        continue;
    }
    if(x2<=0&&a+x2>=w&&y2<=0&&y2+b>=h){
        cout<<"YES"<<endl;
        continue;
    }
    if((start2>=start&&start2<end)||(end2<=end&&end2>start)){
        // now check their x axis;
        if(x1+a<x2){
            long long diff=x2-x1-a;
            if(diff%a!=0){
                cout<<"NO"<<endl;
                continue;
            }
            else{
                cout<<"YES"<<endl;
                continue;
            }
        }
        else{
            long long diff=x1-x2-a;
            if(diff%a!=0){
                cout<<"NO"<<endl;
                continue;
            }
            else{
                cout<<"YES"<<endl;
                continue;
            }
        }
    }
    else{
        if((start2x>=startx&&start2x<endx)||(end2x<=endx&&end2x>startx)){
        // now check their x axis;
        if(y1+b<y2){
            long long diff=y2-y1-b;
            if(diff%b!=0){
                cout<<"NO"<<endl;
                continue;
            }
            else{
                cout<<"YES"<<endl;
                continue;
            }
        }
        else{
            long long diff=y1-y2-b;
            if(diff%b!=0){
                cout<<"NO"<<endl;
                continue;
            }
            else{
                cout<<"YES"<<endl;
                continue;
            }
        }
    }
    
}
if(y1+b<y2){
    if((y2-y1-b)%b==0||(x2-x1-a)%a==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
else{
    if((y1-y2-b)%b==0||(x1-x2-a)%a==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
// cout<<"YES"<<endl;
}
return 0;
}