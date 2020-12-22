#include<iostream>
#include<string>
#include<fstream>
#include <algorithm>
#include "EmployeeData.h"
#include "../libs/json.hpp"
using namespace std;
using json = nlohmann::json;
EmployeeData::EmployeeData(){
    MaxId = 0;
    _data.resize(0);
}
/*  * @brief Insert an Employee object to the list inside EmployeeData
    * Constructor inserts an Employee object to the list inside EmployeeData
    * 
*/
EmployeeData::EmployeeData(Employee e){
    if (MaxId < e.GetId()) MaxId = e.GetId();
    //add an Employee object to EmployeeData
    _data.push_back(e);
}
/*  * @brief Read data from file and add to the list inside EmployeeData
    * Constructor read all data from file
    * Then store them in _data
*/
EmployeeData::EmployeeData(string fileName){
    MaxId = 0;
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
    }else
    {
        cout << "Can not open file";
    }
    
    
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
    if (MaxId < e.GetId()) MaxId = e.GetId();
    //add an Employee object to EmployeeData
    _data.push_back(e);
    return MaxId;
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
int EmployeeData::Delete (int ssn){
    // int position = find(_data.begin(), _data.end(), ssn);
    // cout << "Position of " << ssn << " is " << position;
    // _data.erase(position);
}