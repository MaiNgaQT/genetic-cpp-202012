#include <iostream>
#include <fstream>
#include "libs/json.hpp"
using namespace std;
using nlohmann::json;
int main(){
    // auto a = 5.5;
    // cout << typeid(a).name() << endl;
    //json
    // parse explicitly
    // auto j3 = json::parse("{ \"happy\": true, \"pi\": 3.141 }");
    // cout << "j3: pi = " << j3["pi"] << endl;

    // auto j4 = R"({"happy": true,"pi": 3.141})"_json;
    //  cout << "j4: happy = " << j4["happy"]<< endl;

    // string s = "{ \"happy\": true, \"pi\": 3.141 }";
    // auto j5 = json::parse(s);
    // cout << "j5: happy = " << j5["happy"]<< endl;

    // ifstream inFile ("EmployeeData.data");
    // string line;
    // if (inFile.is_open()){
    //     while (!inFile.eof()){
    //         getline(inFile, line);
    //         cout << line << endl;
    //         auto j6 = json::parse(line);
    //         auto c = j6["sex"].array();
    //         cout << "data type: " << c.type_name();
    //         cout << "j6: happy = " << typeid(j6["happy"]).name()<< endl;
    //     }
    // }
    // else cout << "Can not open file";

    printf ("The value of -3.1416 is %lf\n", fabs (-3.1416));

    //test lambda expression
    int m = 0;
   int n = 0;
    
   auto func = [&, n] (int a) mutable
   {
       m = ++n + a;
   };
    
   func(4);
   cout << "Test lambda expression: m = " << m  << ", n = " << n << endl;
    return 0;
}