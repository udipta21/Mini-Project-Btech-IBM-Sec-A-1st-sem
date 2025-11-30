#include <iostream>
using namespace std ;
int main(){
    int days = 7;
    int student = 10;
    int present =0;
    int absent =0;
    int atten[7][10];
    int totalPresent[10] = {0}; 
    int totalDay[7] = {0};    
    for(int i =0 ; i<student;i++){
        cout<<"Student "<<i+1<<" : ";
        for(int j=0;j<days;j++ ){
            cin>>atten[i][j];
            if(atten[i][j]==1){
               present++;
            }
            else if(atten[i][j]==0){
                absent++;
            }
            else if(atten[i][j]){
                cout<<"INVALID INPUT"<<endl;
                break;
            }
        }
    }
    
    cout<<endl;
cout<<"Present = "<<present<<endl;
cout<<"Absent = "<<absent<<endl;

cout << "Weekly Attendance Summary" << endl;
    cout << "-------------------------" << endl << endl;
    cout << "Total Present Days:" << endl;
    for (int i = 0; i < student; i++) {
        cout << "Student " << i + 1 << ": " << totalPresent[i] << endl;
    }
    cout << endl;
int maxPresent = totalPresent[0];
    int highestStudent = 0;
    for (int i = 1; i < student; i++) {
        if (totalPresent[i] > maxPresent ||
            (totalPresent[i] == maxPresent && i < highestStudent)) {
            maxPresent = totalPresent[i];
            highestStudent = i;
        }
    }

    cout << "Student with Highest Attendance: Student " << highestStudent + 1 << " (";


    int minDay = totalDay[0];
    int lowestDayIdx = 0;
    for (int j = 1; j < days; j++) {
        if (totalDay[j] < minDay) {
            minDay = totalDay[j];
            lowestDayIdx = j;
        }
    }
    cout << "Day with Lowest Overall Attendance: Day " << lowestDayIdx + 1 << endl;

    return 0;

}