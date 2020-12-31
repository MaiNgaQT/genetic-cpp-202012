#ifndef project_dataprocessing_EmployeeData_h_
#define project_dataprocessing_EmployeeData_h_
#include <vector>
#include "../bussinessobject/Employee.h"
class EmployeeData{
public: 
    int _maxId;
private:
    vector<Employee> _data;
public:
    EmployeeData ();
    EmployeeData (Employee);
    EmployeeData (string); //read data from file
    int PushBack (Employee); //add an Employee to the end of the list inside EmployeeData
    Employee Get (int i);//return an employee object at postion i
    int GetSize ();
    int ExportToFile (string);//write all data in EmployeeData to file
    int Delete (int position);//delete an Employee inside EmployeeData
    int Update (int position, Employee); //update an Employee inside EmplpoyeeData
    int FindById(int id); //return position of Employee
    int FindSSNByName(string name);//return id of Employee
    vector<Employee> GetListEmployee(int id);//retrun list of Employee according to id of management
};
#endif