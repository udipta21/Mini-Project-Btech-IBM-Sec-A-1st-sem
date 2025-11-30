#include<iostream>
using namespace std;
int main(){
    int n;
    int e[n];
    cout<<"No. of days : ";
    cin>>n;
    for(int i=0 ;i<=n;i++){
        cout<<"exercise times "<<i+1<<" : ";
        cin>>e[i];
    }
    cout<<endl;
    
    for(int i=n-1;i<=n;i--){
        cout<<e[i]<<endl;
    }

cout<<endl;









    return 0;
}
