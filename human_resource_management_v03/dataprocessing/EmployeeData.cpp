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
int EmployeeData::FindObjectPosition(string attribute, int value){
    vector<Table*>::iterator it = find_if(_data.begin(), _data.end(), 
                    [attribute, value](Table *t) {
                        json j = t->ToJson();
                        return j[attribute] == value;
                    });
    if (it == _data.end()) return -1;
    return it - _data.begin();
}