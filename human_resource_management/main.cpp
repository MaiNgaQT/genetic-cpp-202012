#include <iostream>
#include <fstream>
#include "bussinessobject/Employee.h"
#include "dataprocessing/EmployeeData.h"
#include "libs/json.hpp"
using json = nlohmann::json;
using namespace std;

void displayEmployeeData (EmployeeData eData);
void insertEmployee (EmployeeData eData, string fileName);
int updateEmployee (EmployeeData eData, string fileName);

int main(){
    //read Employee data
    string fileName ("EmployeeData.data");
    cout << "***READ DATA FROM FILE ***" << endl;
    EmployeeData eData(fileName);
    displayEmployeeData(eData);

    //insert an Employee
    //insertEmployee(eData, fileName);

    //update Employee's birthday
    updateEmployee(eData, fileName);
    //delete an Employee
    
    
    return 0;
}