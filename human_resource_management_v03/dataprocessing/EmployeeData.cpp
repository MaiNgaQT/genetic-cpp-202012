#include "EmployeeData.h"
using json = nlohmann::json;
using namespace std;
EmployeeData::EmployeeData(): TableData(){
}
// EmployeeData::EmployeeData(Employee e){
//     if (_maxId < e.GetId() )
//         _maxId = e.GetId();
//     _data.push_back(e);
// }
EmployeeData::EmployeeData(string fileName){
    vector<string> vt = ReadFileToJson(fileName);
    Table *t;
    for (int i = 0; i < vt.size(); i++){
        json j = json::parse(vt[i]);
        string s = j["Sex"];
        Employee *e = new Employee(j["Id"], j["FName"], j["MInit"], j["LName"],  j["SSN"],  j["BDate"],  j["Address"],  s[0], j["Salary"], j["SuperSSN"], j["DNO"]);
        t = e;
        _data.push_back(t);
    }
 }
 int EmployeeData::ReadFileToObject(string fileName){
    vector<string> vt = ReadFileToJson(fileName);
    Table *t;
    for (int i = 0; i < vt.size(); i++){
        json j = json::parse(vt[i]);
        string s = j["Sex"];
        Employee *e = new Employee(j["Id"], j["FName"], j["MInit"], j["LName"],  j["SSN"],  j["BDate"],  j["Address"],  s[0], j["Salary"], j["SuperSSN"], j["DNO"]);
        t = e;
        _data.push_back(t);
    }
    return 0;
 }
// //write all data in EmployeeData to file
// int ExportToFile(string){
//     return 0;
// }        
//  //return id of Employee       
// int FindSSNByName(string name){
//     return 0;
// }        
// //retrun list of Employee according to id of management
// // vector<Employee> GetListEmployee(int id){} 


// int ExportToFile(string);        //write all data in TableData to file
// int Delete(int position);        //delete an Table inside TableData
// int Update(int position, Table); //update an Table inside TableData
// int FindById(int id);            //return position of Table