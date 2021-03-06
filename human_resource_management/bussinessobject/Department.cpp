#include "Department.h"
Department::Department(){}
Department::Department(string dName, int dNumber, int mgrSsn, string mgrStartDate){
    DName = dName;
    DNumber = dNumber;
    MGRSSN = mgrSsn;
    MGRStartDate = mgrStartDate;
}
string Department::ToString(){
    string s;
    s = "{";
    s += "DName: " + DName + ", ";
    s += "DNumber: " + to_string(DNumber) + ", ";
    s += "MGRSSN: " + to_string(MGRSSN) + ", ";
    s += "MGRStartDate: " + MGRStartDate + "}";
    return s;
}
json Department::ToJson(){
    json j;
    j["DName"] = DName;
    j["DNumber"] = DNumber;
    j["MGRSSN"] = MGRSSN;
    j["MGRStartDate"] = MGRStartDate;
    return j;
}
int Department::getDNumber(){
    return DNumber;
}