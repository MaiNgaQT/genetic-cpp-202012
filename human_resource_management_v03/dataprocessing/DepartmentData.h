#ifndef project_dataprocessing_DepartmentData_H_
#define project_dataprocessing_DepartmentData_H_
#include<iostream>
#include<string>
#include "../businessobject/Department.h"
#include "TableData.h"
using namespace std;
class DepartmentData : public TableData{
public:
    DepartmentData();
    // DepartmentData(Department); // insert a department to _data.
    // DepartmentData(string fileName); //read data from file
    // int GetSize(); //return size of _data
    // Department GetDepartment(int i);//return a department at position i
};
#endif