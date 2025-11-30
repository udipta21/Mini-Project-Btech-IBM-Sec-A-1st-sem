#include<iostream>
using namespace std ;
int main(){
    int num ;
    cout<<"Enter number : ";
    cin>>num;
    if(num%2==0){
        cout<<"It is even "<<endl;
    }
    else if(num==0){
        cout<<"0 is neither even nor odd ";
    }
    else{
        cout<<"It is odd"<<endl;
    }
    if(num%5==0){
        cout<<"It is divisible by 5"<<endl;
    }
    else if(num%5 != 0){
        cout<<"Not divisible by 5"<<endl;
    }



}