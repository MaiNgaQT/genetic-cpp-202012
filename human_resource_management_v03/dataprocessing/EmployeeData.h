#ifndef projecet_dadtaprocessing_EmployeeData_H_
#define projecet_dadtaprocessing_EmployeeData_H
#include "TableData.h"
#include "../businessobject/Employee.h"
#include "../businessobject/Employee.h"
using namespace std;
class EmployeeData : public TableData{
public:
    EmployeeData ();
    // EmployeeData (Employee);
    EmployeeData (string); //read data from file
    int ReadFileToObject(string); 
    // // int GetSize ();
    // int ExportToFile (string);//write all data in EmployeeData to file
    // int FindSSNByName(string name);//return id of Employee
    // // vector<Employee> GetListEmployee(int id);//retrun list of Employee according to id of management

    // int PushBack (Table*); //add a Table object to the end of the list inside TableData
    // Table* Get (int i);//return an employee object at postion i
    // int GetSize(); //return size of TableData list
    // int ExportToFile (string);//write all data in TableData to file
    // int Delete (int position);//delete an Table inside TableData
    // int Update (int position, Table); //update an Table inside TableData
    int FindObjectPosition(string attribute, int value); //return position of employee object inside TableData
    
};
#endif