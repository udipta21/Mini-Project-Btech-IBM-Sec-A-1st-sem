#include <iostream>
using namespace std ;
int main(){
    int sub;
    double marks;
    double total = 0;
    double avg; 
    cout<<"No. of students : ";
    cin>>sub;
    
    for(int i = 1; i<=sub;i++){
        cout<<"Enter marks of student "<<i<<" : ";
        cin>>marks;
        total+=marks;
        avg=total/sub;
        
    }

    cout<<"Total Marks = "<<total<<endl;
    cout<<"Average Marks = "<<avg<<endl;

}