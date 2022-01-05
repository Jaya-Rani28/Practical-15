#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 ifstream myFile;
 string data;
 myFile.open("example.txt");
 while(getline(myFile, data))
 {
 cout<<data<<endl;
 }
 myFile.close();
 return 0;
 }
