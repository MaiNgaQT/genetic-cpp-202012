#include <iostream>
#include "EmployeeUI.h"
#include "../dataprocessing/EmployeeData.h"
#include "../businessobject/Employee.h"
using namespace std;
EmployeeUI::EmployeeUI(){}
void EmployeeUI::ReadData(TableData *tData, string fileName){
    tData->ReadFileToObject(fileName);
    tData->DisplayData();
}
void EmployeeUI::Update(){
    cout << "abc" << endl;
}
void EmployeeUI::Insert(TableData *tData, string fileName){
    //insert an Employee
    int id;
    string fName, mInit, lName;
    long ssn;
    string bDate, address;
    char sex;
    int salary;
    long superSSN;
    int dno;
    cout << "*** INSERT AN EMPLOYEE ***" << endl;
    cout << "Enter id: "; cin >> id; 
    cout << "Enter first name: "; cin >> fName;
    cout << "Enter middle init: "; cin >> mInit;
    cout << "Enter last name: "; cin >> lName;
    cout << "Enter ssn: "; cin >> ssn;
    cout << "Enter birthdate: "; cin >> bDate; cin.ignore();
    cout << "Enter address: "; getline(cin, address);
    cout << "Enter sex: "; cin >> sex;
    cout << "Enter salary: "; cin >> salary;
    cout << "Enter super SSN: "; cin >> superSSN;
    cout << "Enter dapartment number: "; cin >> dno;
    Employee e(id, fName, mInit, lName, ssn, bDate, address, sex, salary, superSSN, dno);
    Table *t = &e;
    tData->PushBack(t);
    // displayEmployeeData(eData);
    tData->ExportToFile(fileName);
}
void EmployeeUI::Delete(){
    cout << "abc" << endl;
}