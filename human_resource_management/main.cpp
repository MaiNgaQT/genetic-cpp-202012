#include <iostream>
#include <fstream>
#include "bussinessobject/Employee.h"
#include "dataprocessing/EmployeeData.h"
#include "libs/json.hpp"
using json = nlohmann::json;
void displayEmployeeData (EmployeeData eData){
    for (int i = 0; i < eData.GetSize(); i++){
        Employee e = eData.Get(i);
        cout << e.ToString() << endl;
    }
}
using namespace std;
int main(){
    //read Employee data
    cout << "***READ DATA FROM FILE ***" << endl;
    EmployeeData eData("EmployeeData.data");
    displayEmployeeData(eData);

    //insert an Employee
    // int id;
    // string fName, mInit, lName;
    // long ssn;
    // string bDate, address;
    // char sex;
    // int salary;
    // long superSSN;
    // int dno;
    // cout << "*** INSERT AN EMPLOYEE ***" << endl;
    // cout << "Enter id: "; cin >> id; 
    // cout << "Enter first name: "; cin >> fName;
    // cout << "Enter middle init: "; cin >> mInit;
    // cout << "Enter last name: "; cin >> lName;
    // cout << "Enter ssn: "; cin >> ssn;
    // cout << "Enter birthdate: "; cin >> bDate; cin.ignore();
    // cout << "Enter address: "; getline(cin, address);
    // cout << "Enter sex: "; cin >> sex;
    // cout << "Enter salary: "; cin >> salary;
    // cout << "Enter super SSN: "; cin >> superSSN;
    // cout << "Enter dapartment number: "; cin >> dno;
    // Employee e(id, fName, mInit, lName, ssn, bDate, address, sex, salary, superSSN, dno);
    // eData.PushBack(e);
    // // displayEmployeeData(eData);
    // eData.ExportToFile("EmployeeData.data");

    //delete an Employee
    
    cout << "*** INSERT AN EMPLOYEE ***" << endl;
    int inSSN;
    cout << "Enter the Employee SSN you want to delete: ";
    cin >> inSSN;
    eData.Delete (inSSN);
    displayEmployeeData(eData);
    //eData.ExportToFile("EmployeeData.data");
    
    return 0;
}