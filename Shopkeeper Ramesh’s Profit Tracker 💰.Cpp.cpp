#include <iostream>
using namespace std ;
int main(){
    int n,a;
    cout<<"No. of days : ";
    cin>>n;
    int arr[n];
    int pr=0;
    int loss=0;
    for(int i=0;i<=n;i++){
    	cout<<"Profit/Loss of day "<<i+1<<" : ";
    	cin>>arr[n];
    	if(arr[i]>0){
    		
    		pr+=arr[n];
		}
		else if(arr[i]<0){
			loss+=arr[n];
		}
	}

    cout<<"Total Profit : Rs."<<pr<<endl;
    cout<<"Total Loss : Rs."<<loss<<endl;
	cout<<"Net Balance : Rs."<<pr+loss<<endl;










    return 0;
}
