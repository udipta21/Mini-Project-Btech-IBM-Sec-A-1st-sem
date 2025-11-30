#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"No. you will enter : ";
    cin>>n;
    int pos=0;
    int neg =0;
    int zero =0;
    for(int i = 1;i<=n;i++ ){
        cout<<"Enter number "<<i<<" : ";
        cin>>a;

        if(a>0){
            pos++;
            
        }
        if(a<0){
            neg++;
            
        }
        if(a==0){
            zero++;
            
        }

    }
    

      cout<<"Positive : "<<pos<<endl;
      cout<<"Negative : "<<neg<<endl;
      cout<<"Zero : "<<zero<<endl;


    return 0;
}