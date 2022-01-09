#include<iostream>
#include<ostream>
#include<istream>
#include<sstream>
#include<string>
using namespace std;

int main()
{
 int n=70;
 cout<<dec<<n<<'\n';
 cout<<hex<<n<<'\n';
 char  a,b,c;
 stringstream s("  123");
 s>>skipws>>a>>b>>c;
 cout <<a <<b<< c<<endl;
	
 stringstream p("  123");
 p>>noskipws>>a>>b>>c;
 cout <<a <<b<< c<<endl;
 }
 
