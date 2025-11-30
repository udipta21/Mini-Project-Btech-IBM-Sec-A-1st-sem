#include<iostream>
using namespace std ;
int main(){
    int num,count =0;
    cout<<"Enter Number : ";
    cin>>num;
    for(int i=2;i<=num;i++){
        if(num%i==0){
           count++;
        }
    }

    if(count==0){
        cout<<"It is prime "<<endl;
    }
    else{
        cout<<"Not prime"<<endl;
    }

    if(num%2==0){
        cout<<"It is even "<<endl;
    }
    
    else{
        cout<<"It is odd"<<endl;
    }
    


}







