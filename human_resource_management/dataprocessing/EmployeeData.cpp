#include<iostream>
#include<string>
#include<fstream>
#include <algorithm>
#include "EmployeeData.h"
#include "../libs/json.hpp"
using namespace std;
using json = nlohmann::json;
EmployeeData::EmployeeData(){
    _maxId = 0;
    _data.resize(0);
}
/*  * @brief Insert an Employee object to the list inside EmployeeData
    * Constructor inserts an Employee object to the list inside EmployeeData
    * 
*/
EmployeeData::EmployeeData(Employee e){
    if (_maxId < e.GetId()) _maxId = e.GetId();
    //add an Employee object to EmployeeData
    _data.push_back(e);
}
/*  * @brief Read data from file and add to the list inside EmployeeData
    * Constructor read all data from file
    * Then store them in _data
*/
EmployeeData::EmployeeData(string fileName){
    _maxId = 0;
    _data.resize(0);
    ifstream inFile (fileName);
    const int maxSize = 255;
    char buff[maxSize];
    if (inFile.is_open()){
        while ( inFile.getline(buff, maxSize)){
            json j = json::parse(buff);
            string s = j["Sex"];
            Employee e (j["Id"], j["FName"], j["MInit"], j["LName"],  j["SSN"],  j["BDate"],  j["Address"],  s[0], j["Salary"], j["SuperSSN"], j["DNO"]);
            _data.push_back(e);
        }
    }    
    _maxId = _data[_data.size() - 1].GetId();
    inFile.close();
}
/*  * @brief Function returns an Employee object at a position inside the list inside EmployeeData
    * Function returns an Employee object at a position inside the list inside EmployeeData
    * @rerurn Employee Object
    * if fail, return "index out of bound"
*/
Employee EmployeeData::Get(int i){
    string s("index out of bound");
    if (i < 0) throw s;
    if (i >= _data.size()) throw s;
    return _data[i];
}
/*  * @brief Funtion returns size of list of EmployeeData
    * Funtion returns size of list of EmployeeData
    * @return size of list of EmployeeData
*/
int EmployeeData::GetSize(){
    return _data.size();
}   
/*  * @bried Function adds an Employee to the end of the list inside EmployeeData
    * Function adds an Employee to the end of the list inside EmployeeData
    * @return maxId of the Employee object inside EmployeeData
*/
int EmployeeData::PushBack (Employee e){
    //if e.id = 5, then maxId = 5
    if (_maxId < e.GetId()) _maxId = e.GetId();
    //add an Employee object to EmployeeData
    _data.push_back(e);
    return _maxId;
}
/*  * @brief Function writes all data in EmployeeData to file
    * Function writes all data in EmployeeData to file
    * @return 1 if success, 0 if fail
*/
int EmployeeData::ExportToFile(string filename){
    ofstream outFile(filename);
    if ( !outFile) return 0;
    for (Employee e : _data)
        outFile << e.ToJson() << endl;
    outFile.close();
    return 1;
}

//delete an Employee in EmployeeData
int EmployeeData::Delete (int position){
    if (position < 0 || position > _data.size()) return -1;
    _data.erase(_data.begin() + position);
    return 0;
}
int EmployeeData::Update (int position, Employee e){
    if (position < 0 || position > _data.size()) return -1;
    _data[position] = e;
    return 0;
}
 //return position of Employee which has Id is id
int EmployeeData::FindById(int id){
    vector<Employee>::iterator it = find_if(_data.begin(), _data.end(), [id](Employee &e) {return e.GetId() == id;});
    if (it == _data.end()) return -1;
    return it - _data.begin();
}
//return id of Employee
int EmployeeData::FindSSNByName(string name){
    int position = name.find(' ');
    string fname = name.substr(0, position);
    string lname = name.substr(position + 1);
    vector<Employee>::iterator it = find_if(_data.begin(), _data.end(), 
                    [fname, lname] (Employee &e){
                        return ( !(e.GetFName().compare(fname) && e.GetLName().compare(lname)) );
                    });
    Employee e (_data[it - _data.begin()]); //found at index it - _data.begin()
    return e.GetSSN();
 }
vector<Employee> EmployeeData::GetListEmployee(int ssn){
    vector<Employee> vt (_data.size());
    //copy employee
    vector<Employee>::iterator it = copy_if(_data.begin(), _data.end(), vt.begin(),
                     [ssn](Employee &e){
                        return e.GetSuperSSN() == ssn;
                     });
    
    vt.resize(distance(vt.begin(),it));  // shrink container to new size
    return vt;
}