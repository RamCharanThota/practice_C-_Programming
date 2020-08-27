#include <iostream>
#include <cmath>
using namespace std;

// define variables here 
int N;
int marks [10];

float sum=0 , avg, dev, PowSum=0,diff,diffPower;

int main (){
    
    cout<<"Enter total number of students ";
    cin >> N ;
    if (N<0 || N>10){
        cout<<" Invalid number"<< N << endl;
        return -1;
    }
    
for (int i=0; i<N;i=i+1){
cout<<"enter the marks of student "<< i+1<<" ";
cin>> marks[i];
sum=sum+marks[i];
}
avg=sum/N;

cout<< " the average value of marks is "<< avg ;

for (int i=0; i<N;i=i+1){
  diff =avg-marks[i];
   diffPower=pow(diff,2.0);
   PowSum=PowSum+diffPower;
 }
 
 float devAvg=PowSum/N;
 dev= sqrt(devAvg);
 cout<< " the deviation value of marks is "<< dev;
 




}