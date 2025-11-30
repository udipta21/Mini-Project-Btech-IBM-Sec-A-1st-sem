#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Total no. of students : ";
    
    cin>>n;
    int marks[n];
    for(int i=0;i<n;i++){
        cout<<"Enter marks of student "<<i+1<<" : ";
        cin>>marks[i];
    }
    int large = marks[1];

    for(int i=1;i<n;i++){
       if(large<marks[i]){
        large=marks[i];
       }
    }
    cout<<"Highest Marks is "<<large<<endl;

    int lowest = marks[1];

    for(int i=1;i<n;i++){
       if(lowest>marks[i]){
        lowest=marks[i];
       }
    }
    cout<<"Lowest Marks is "<<lowest<<endl;

}
