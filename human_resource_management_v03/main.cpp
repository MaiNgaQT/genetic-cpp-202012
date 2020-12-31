#include<iostream>
#include "businessobject/Table.h"
#include "businessobject/Employee.h"
#include "businessobject/Department.h"
#include "dataprocessing/TableData.h"
#include "dataprocessing/EmployeeData.h"
#include "dataprocessing/DepartmentData.h"
#include "ui/TableUI.h"
#include "ui/EmployeeUI.h"
using namespace std;

int main(){

    //read all data from file
    string employeeFile ("EmployeeData.data"); EmployeeData eData(employeeFile);
    // string departmentFile ("DepartmentData.data"); DepartmentData dData (departmentFile);
    
    bool isContinue = true;
    bool isTableContinue;
    int mainChoice, tableChoice;
    TableData *tData = &eData;
    while (isContinue){
        cout << "*** EMPLOYEE MANAGEMENT APPLICATION ***" << endl;
        cout << "1. Manupulate EMPLOYEE Table." << endl;
        cout << "2. Manupulate DEPARTMENT Table." << endl;
        cout << "3. Manupulate DEPT-LOCATION Table" << endl;
        cout << "4. Manupulate PROJECT Table" << endl;
        cout << "5. Manupulate WORKS-ON Table" << endl;
        cout << "6. Manupulate DEPENDENT Table" << endl;
        cout << "7. Displays the names of all employees being monitored by a particular manager." << endl;
        cout << "8. Show all employee names that dependent is daughter or son." << endl;
        cout << "=> YOUR CHOICE (press -1 if you want to stop): ";   
        EmployeeUI employeeUI;
        cin >> mainChoice;
        switch (mainChoice)
        {
        case 1:
            isTableContinue = true;
            while (isTableContinue){
                cout << "*** EMPLOYEE TABLE ***" << endl;
                cout << "1. Read Data" << endl;
                cout << "2. Insert an Employee" << endl;
                cout << "3. Update an Employee" << endl;
                cout << "4. Delete an Employee" << endl;
                cout << "=> YOUR CHOICE (press -1 if you want to stop): ";
                cin >> tableChoice;
                if (tableChoice == -1)
                    break;
                else if (tableChoice == 1){
                    tData = &eData;
                    employeeUI.ReadData(tData, employeeFile);
                }else if (tableChoice == 2){
                    TableData *t = &eData;
                    employeeUI.Insert(t, employeeFile);
                }else if (tableChoice == 3){
                    employeeUI.Update(tData, employeeFile);
                }else if (tableChoice == 4){
                    employeeUI.Delete(tData, employeeFile);
                }
            }
            break;
        
        default:
            isContinue = false;
            break;
        }
    }

    // Table *t;
    // Employee e1(1, "Nga", "Mai", "Duong", 111222333, "1983-06-02", "Dong Ha", 'F', 2000, 222333444, 5);
    // Employee e2(1, "ngoc", "Mai", "Duong", 222333444, "1984-12-04", "Dong Ha", 'F', 5000, -1, 5);
    // t = &e1;
    // EmployeeData eData("EmployeeData.data");
    // eData.PushBack(t);
    // t = &e2;
    // eData.PushBack(t);
    // t = eData.Get(1);
    // for (int i = 0; i < eData.GetSize(); i++)
    //  cout << "Main: " << eData.Get(i)->ToString() << endl;
    
    // Department d(1, "Research", 5, 111222333, "2020-12-30");
    // t = &d;
    // DepartmentData dData;
    // dData.PushBack(t);
    // t = dData.Get(0);
    // cout << t->ToString() << endl;
    return 0;
}