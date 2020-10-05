#include<iostream>// standard i/o stream library
#include<fstream> // standard file stream library

// using functions with in the standard library
using namespace std;

int main(){
    char data[100]; // variable to store the data
    
    ofstream out_file;
    out_file.open("example_file.data");// open the file 

    cout<<"enter the name:"; 
    cin.getline(data,100);// getting user input  data 
    out_file<<data<<endl;// writing entered data to file

    out_file.close();// closing the opened file

    ifstream in_file;
    in_file.open("example_file.data");//open the file to read
    in_file>> data;

    cout<<"the name of the person is"<< data;

    in_file.close(); // closing the output file







}