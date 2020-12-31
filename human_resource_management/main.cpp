#include <iostream>
#include <fstream>
#include <algorithm>
#include "bussinessobject/Employee.h"
#include "dataprocessing/EmployeeData.h"
#include "dataprocessing/DepartmentData.h"
#include "libs/json.hpp"
using json = nlohmann::json;
using namespace std;

void displayEmployeeData (EmployeeData eData);
void insertEmployee (EmployeeData eData, string fileName);
int updateEmployee (EmployeeData eData, string fileName);
int deleteEmployee (EmployeeData eData, string filename);
int showEmployeeAccording2Management(EmployeeData eData, string managementName);
void displayDepartmentData (DepartmentData dData);
int selectTable();//select a table

int main(){
    //read Employee data from file
    string employeeFile ("EmployeeData.data"); EmployeeData eData(employeeFile);
    //read Department data from file
    string departmentFile ("DepartmentData.data"); DepartmentData dData (departmentFile);

    cout << "EMPLOYEE MANAGEMENT APPLICATION" << endl;
    cout << "1. Read data from file." << endl;
    cout << "2. Insert data." << endl;
    cout << "3. Update data" << endl;
    cout << "4. Delete data" << endl;
    cout << "5. Displays the names of all employees being monitored by a particular manager." << endl;
    cout << "6. Show all employee names that dependent is daughter or son." << endl;
    cout << "Choose the action number: ";   
    int yourChoice, tableChoice;
    cin >> yourChoice;
    switch (yourChoice)
    {
    case 1: //READ DATA FROM FILE
        tableChoice = selectTable();
        if (tableChoice < 0 || tableChoice > 6)
            cout << "Invalid Choice" << endl;
        else{
            if (tableChoice == 1){
                cout << "***READ EMPLOYEE DATA FROM FILE ***" << endl;
                EmployeeData eData(employeeFile);
                displayEmployeeData(eData);
            }
            if (tableChoice == 2){
                cout << "***READ DEPARTMENT DATA FROM FILE ***" << endl;
                DepartmentData dData (departmentFile);
                displayDepartmentData(dData);
            }
            if (tableChoice == 3){
                cout << "***READ DEPARTMENT-LOCATION DATA FROM FILE ***" << endl;
            }
            if (tableChoice == 4){
                cout << "***READ PROJECT DATA FROM FILE ***" << endl;
            }
            if (tableChoice == 5){
                cout << "***READ WORKS-ON DATA FROM FILE ***" << endl;
            }
            if (tableChoice == 6){
                cout << "***READ DEPENDENT DATA FROM FILE ***" << endl;
            }
        }
        break;
    case 2: //INSERT DATA
        tableChoice = selectTable();
        if (tableChoice < 0 || tableChoice > 6)
            cout << "Invalid Choice" << endl;
        else{
            if (tableChoice == 1){
               insertEmployee(eData, employeeFile);
            }
            if (tableChoice == 2){
                cout << "*** INSERT A DEPARTMENT ***" << endl;
                //
            }
            if (tableChoice == 3){
                cout << "*** INSERT A DEPARTMENT-LOCATION ***" << endl;
                //
            }
            if (tableChoice == 4){
                cout << "*** INSERT A PROJECT ***" << endl;
                //
            }
            if (tableChoice == 5){
                cout << "*** INSERT A WORKS-ON ***" << endl;
                //
            }
            if (tableChoice == 6){
                cout << "*** INSERT A DEPENDENT ***" << endl;
                //
            }
        }
        break;
    case 3: //UPDATE DATA
        tableChoice = selectTable();
        if (tableChoice < 0 || tableChoice > 6)
            cout << "Invalid Choice" << endl;
        else{
            if (tableChoice == 1){
                cout << "*** UPDATE AN EMPLOYEE ***" << endl;
                updateEmployee(eData, employeeFile);
            }
            if (tableChoice == 2){
                cout << "*** UPDATE A DEPARTMENT ***" << endl;
                //
            }
            if (tableChoice == 3){
                cout << "*** UPDATE A DEPARTMENT-LOCATION ***" << endl;
                //
            }
            if (tableChoice == 4){
                cout << "*** UPDATE A PROJECT ***" << endl;
                //
            }
            if (tableChoice == 5){
                cout << "*** UPDATE A WORKS-ON ***" << endl;
                //
            }
            if (tableChoice == 6){
                cout << "*** UPDATE A DEPENDENT ***" << endl;
                //
            }
        }
        break;
    case 4: //DELETE DATA
        tableChoice = selectTable();
        if (tableChoice < 0 || tableChoice > 6)
            cout << "Invalid Choice" << endl;
        else{
            if (tableChoice == 1){
                cout << "*** DELETE AN EMPLOYEE ***" << endl;
                deleteEmployee(eData, employeeFile);
            }
            if (tableChoice == 2){
                cout << "*** DELETE A DEPARTMENT ***" << endl;
                //
            }
            if (tableChoice == 3){
                cout << "*** DELETE A DEPARTMENT-LOCATION ***" << endl;
                //
            }
            if (tableChoice == 4){
                cout << "*** DELETE A PROJECT ***" << endl;
                //
            }
            if (tableChoice == 5){
                cout << "*** DELETE A WORKS-ON ***" << endl;
                //
            }
            if (tableChoice == 6){
                cout << "*** DELETE A DEPENDENT ***" << endl;
                //
            }
        }
        break;
    case 5:
        string managementName;
        cout << "Enter management name: (firstname + lastname)";
        cin.ignore(); getline(cin, managementName);
        showEmployeeAccording2Management(eData, managementName);
        break;
    // default:
    //     cout << "default";
    //     break;
    }
   return 0;
}