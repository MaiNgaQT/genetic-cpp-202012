#include "Employee.h"
#include<fstream>
Employee::Employee(){}
Employee::Employee(int id, string fname, string mInit, string lName, long ssn, string bDate, string address, char sex, int salary, long superSSN, int dno){
    Id = id;
    FName = fname;
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
/*  * @brief Function converts an Employee object to string
    * Function converts an Employee object to string
    * @return a string
*/
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
int Employee::GetId(){
    return Id;
}
/*  * @brief Function converts an Employee object to json
    * Function converts an Employee object to json
    * @return a json object
    * Example: Employee e(4, "Nga", "Mai", "Duong", 111222333, "1983-06-02", "Quang Tri", 'F', 2000, 222333444, 4)
    * -> {"Id": 4, "FName": "Nga", "MInit": "Mai", "LName": "Duong", "SSN": 111222333, "BDate": "1983-06-02", "Sex": "F", "Salary": 2000, "SuperSSN": 222333444, "DNO": 4}
*/
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
