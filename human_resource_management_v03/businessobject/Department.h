#ifndef project_businessobject_Department_H_
#define project_businessobject_Department_H_
#include<iostream>
#include<string>
#include "Table.h"
using namespace std;

class Department : public Table{
private:
    int Id;
    int DID;
    string DName;
    int DNumber;
    int MGRSSN;
    string MGRStartDate;
public:
    Department();
    Department(int id, string dName, int dNumber, int mgrSsn, string mgrStartDate);
    string ToString();
    int getDNumber();
    int GetId();
};
#endif