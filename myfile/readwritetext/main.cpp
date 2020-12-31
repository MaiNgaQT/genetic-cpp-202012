#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    fstream fileOut("test.txt", ios::out);
    // ofstream fileOut("test.txt");
    fileOut << "Hello world" << endl;
    int i = 200;
    float f = 12.15;
    fileOut << i << "   " << f;
    fileOut.close();

    fstream fileIn("test.txt", ios::in);
    // ifstream fileIn("test.txt");
    string s;
    fileIn >> s;
    cout << s << endl;
    fileIn >> s;
    cout << s << endl;
    fileIn >> i;
    cout << i << endl;
    fileIn >> f;
    cout << f << endl;
    fileIn.close();
    
    return 0;
}