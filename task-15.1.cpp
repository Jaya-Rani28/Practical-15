#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 ofstream myFile;
 myFile.open("example.txt");
 myFile<<"This is cpp program!\n"<<endl;
 myFile.close();
 return 0;
 }
