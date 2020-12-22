#ifndef project_dataprocessing_EmployeeData_h_
#define project_dataprocessing_EmployeeData_h_
#include <vector>
#include "../bussinessobject/Employee.h"
class EmployeeData{
public: 
    int MaxId;
public:
    vector<Employee> _data;
public:
    EmployeeData ();
    EmployeeData (Employee);
    EmployeeData (string); //read data from file
    int PushBack (Employee); //add an Employee to the end of the list inside EmployeeData
    Employee Get (int i);//return an employee object at postion i
    int GetSize ();
    int ExportToFile (string);//write all data in EmployeeData to file
    int Delete (int ssn);//delete an Employee in EmployeeData
};
#endif