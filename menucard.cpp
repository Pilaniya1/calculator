#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"choose from below menu: \n 1.add \n 2.subtract \n 3.multiply \n 4.divide";
    int i;
    cin>>i;
    if(i>4){
        cout<<"wrong input";
        return 0;
    }
    cout<<"\n";
    int a,b;
    cout<<"enter two values here";
    cin>>a;
    cin>>b;
    cout<<a<<endl;
    cout<<b<<endl;

    if(i==1){
        cout<<"Addition : ";
        cout<<a+b;
    }else if(i==2){
        cout<<"subtraction : ";
        cout<<(a-b);

    }else if(i==3){
        cout<<"multiplication : ";
        cout<<(a*b);

    }else if(i==4){
        cout<<"division : ";
        cout<<(a/b);
    }else{
        cout<<"wrong input";
    }
    return 0;
}