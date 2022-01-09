#include<iostream>
#include<ostream>
#include<istream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
 stringstream t("  this is a string");
 string line;
 
 getline(t >> ws,line);
 cout << line<<endl;
 }
 
