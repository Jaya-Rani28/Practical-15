#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 ifstream myFile;
 char data;
 myFile.open("example.txt");
 while(!myFile.eof())
 {
 myFile>>data;
 cout<<data<<endl;
 }
 myFile.close();
 return 0;
 }
