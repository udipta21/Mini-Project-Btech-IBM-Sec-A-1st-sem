#include<iostream>
using namespace std;
int main(){

    int n,a;
    cout<<"Total no. of students : ";
    cin>>n;
    int pr=0;
    int ab=0;
    cout<<"NOTE : 0 for Absent and 1 for Present"<<endl;

    for(int i=1;i<=n;i++){
        cout<<"Student attendence (0 or 1) : ";
        cin>>a;

        if(a==0){
            ab++;
        }
        else if(a==1){
            pr++;
        }
    }
    

    cout<<"No. of Students Present : "<<pr<<endl;
    cout<<"No. of Students Absent : "<<ab<<endl;








    return 0;
}