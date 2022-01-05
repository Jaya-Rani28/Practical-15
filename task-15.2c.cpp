#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;  // Create Object of Ofstream
    ifstream fin;
    fin.open("app.txt");
    fout.open ("app.txt",ios::app); // Append mode
    if(fin.is_open())
        fout<< "\n This is the program to append a text to file.\n"; // Writing data to file
    cout<<"\n appended to file";
    fin.close();
    fout.close(); // Closing the file
    return 0;
}


