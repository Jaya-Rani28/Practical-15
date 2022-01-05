#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 ofstream myFile("write.txt");
 if(!myFile.is_open())
 {
 cout<<"unable to open file."<<endl;
 }
 else{
 
 myFile<<"Hello! I'm Jaya Rani."<<endl;
 
 myFile.close();
 }
 return 0;
 }
