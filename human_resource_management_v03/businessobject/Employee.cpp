#include "Employee.h"
using namespace std;
Employee::Employee(){}
Employee::Employee(int id, string fName, string mInit, string lName, long ssn, string bDate, string address, char sex, int salary, long superSSN, int dno){
    Id = id;
    FName = fName;
    MInit = mInit;
    LName = lName;
    SSN = ssn;
    BDate = bDate;
    Address = address;
    Sex = sex;
    Salary = salary;
    SuperSSN = superSSN;
    DNO = dno;
}
string Employee::ToString(){
    string s;
    s += "{Id: " + to_string(Id) + ", ";
    s += "FName: " + FName + ", "; 
    s += "MInit: " + MInit + ", ";
    s += "LName: " + LName + ", ";
    s += "SSN: " + to_string(SSN) + ", ";
    s += "BDate: " + BDate + ", ";
    s += "Address: " + Address + ", ";
    //convert char to string
    string str = string(1, Sex); 
    s += "Sex: " + str + ", ";
    s += "Salary: " + to_string(Salary) + ", ";
    s += "SuperSSN: " + to_string(SuperSSN) + ", ";
    s += "DNO: " + to_string(DNO) + "}";
    return s;
}
json Employee::ToJson(){
    json j;
    j["Id"] = Id;
    j["FName"] = FName;
    j["MInit"] = MInit;
    j["LName"] = LName;
    j["SSN"] = SSN;
    j["BDate"] = BDate;
    j["Address"] = Address;
    string str = string(1, Sex); 
    j["Sex"] = str;
    j["Salary"] = Salary;
    j["SuperSSN"] = SuperSSN;
    j["DNO"] = DNO;
    return j;
}

int Employee::GetId(){
    return Id;
}
string Employee::GetFName(){
    return FName;
}
string Employee::GetMInit(){
    return MInit;
}
string Employee::GetLName(){
    return LName;
}
long Employee::GetSSN(){
    return SSN;
}
string Employee::GetBDate(){
    return BDate;
}
string Employee::GetAddress(){
    return Address;
}
char Employee::GetSex(){
    return Sex;
}
int Employee::GetSalary(){
    return Salary;
}
long Employee::GetSuperSSN(){
    return SuperSSN;
}
int Employee::GetDNO(){
    return DNO;
}

void Employee::SetID(int id){
    Id = id;
}
void Employee::SetFName(string fName){
    FName = fName;
}
void Employee::SetMInit(string mInit){
    MInit = mInit;
}
void Employee::SetLNname(string lName){
    LName = lName;
}
void Employee::SetSSN(long ssn){
    SSN = ssn;
}
void Employee::SetBDate(string bDate){
    BDate = bDate;
}
void Employee::SetAddress(string address){
    Address = address;
}
void Employee::SetSex(char sex){
    Sex = sex;
}
void Employee::SetSalary(int salary){
    Salary = salary;
}
void Employee::SetSuperSSN(long supperSSN){
    SuperSSN = supperSSN;
}
void Employee::SetDNO(int dno){
    DNO = dno;
}