#ifndef project_dataprocessing_EmployeeData_h_
#define project_dataprocessing_EmployeeData_h_
#include <vector>
#include "../bussinessobject/Employee.h"
class EmployeeData{
private: 
    int _maxId;
    vector<Employee> _data;
public:
    EmployeeData ();
    int PushBack (Employee); //add an Employee to the end of the list inside EmployeeData
    // Employee Get (int i);//return an employee object at postion i
    int GetSize ();
    Employee* GetPointer(int i);
};
#endif