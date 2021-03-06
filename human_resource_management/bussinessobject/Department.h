#ifndef project_businessobject_Department_H_
#define project_businessobject_Department_H_
#include<iostream>
#include<string>
#include "..\libs\json.hpp"
using namespace std;
using json = nlohmann::json;

class Department{
private:
    int DID;
    string DName;
    int DNumber;
    int MGRSSN;
    string MGRStartDate;
public:
    Department();
    Department(string dName, int dNumber, int mgrSsn, string mgrStartDate);
    string ToString();
    json ToJson();
    int getDNumber();
};
#endif