#include<iostream>
using namespace std ;
int main(){

    int l ,b ;
    cout<<"Enter length : ";
    cin>>l;
    cout<<"Enter breadth : ";
    cin>>b;
    int area = l*b;
    int perimeter = 2*(l+b);
    cout<<"Area : "<<area<<endl;
    cout<<"Perimeter : "<<perimeter<<endl;




    return 0;
}