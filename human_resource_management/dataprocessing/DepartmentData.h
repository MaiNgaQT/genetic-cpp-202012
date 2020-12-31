#ifndef project_dataprocessing_DepartmentData_H_
#define project_dataprocessing_DepartmentData_H_
#include<iostream>
#include<string>
#include "../bussinessobject/Department.h"

using namespace std;
class DepartmentData{
private:
    int _maxID;
    vector<Department> _data;
public:
    DepartmentData();
    DepartmentData(Department); // insert a department to _data.
    DepartmentData(string fileName); //read data from file
    int GetSize(); //return size of _data
    Department GetDepartment(int i);//return a department at position i
};
#endif