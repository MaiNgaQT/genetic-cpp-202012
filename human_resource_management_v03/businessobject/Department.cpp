#include "Department.h"
Department::Department(){}
Department::Department(int id, string dName, int dNumber, int mgrSsn, string mgrStartDate){
    Id = id;
    DName = dName;
    DNumber = dNumber;
    MGRSSN = mgrSsn;
    MGRStartDate = mgrStartDate;
}
string Department::ToString(){
    string s;
    s = "{";
    s += "Id: " + to_string(Id) + ", ";
    s += "DName: " + DName + ", ";
    s += "DNumber: " + to_string(DNumber) + ", ";
    s += "MGRSSN: " + to_string(MGRSSN) + ", ";
    s += "MGRStartDate: " + MGRStartDate + "}";
    return s;
}
int Department::getDNumber(){
    return DNumber;
}
int Department::GetId(){
    return Id;
}