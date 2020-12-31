#include <iostream>
#include "EmployeeUI.h"
#include "../dataprocessing/EmployeeData.h"
#include "../businessobject/Employee.h"
#include "../libs/json.hpp"
using json=nlohmann::json;
using namespace std;
EmployeeUI::EmployeeUI(){}
int EmployeeUI::ReadData(TableData *tData, string fileName){
    tData->ReadFileToObject(fileName);
    tData->DisplayData();
    return 0;
}
int EmployeeUI::Update(TableData* tData, string fileName){
    int ssn;
    cout << "Enter Employee SSN: "; cin >> ssn;
    int index = tData->FindObjectPosition("SSN", ssn);
    if (index == -1){
        return -1;
    }else{
        //get Employee at position index
        Table *t = tData->Get(index);
        json j = t->ToJson();
        string s = j["Sex"];
        Employee *e = new Employee(j["Id"], j["FName"], j["MInit"], j["LName"],  j["SSN"],  j["BDate"],  j["Address"],  s[0], j["Salary"], j["SuperSSN"], j["DNO"]);

        int id;
        string fName, mInit, lName;
        long ssn;
        string bDate, address;
        char sex;
        int salary;
        long superSSN;
        int dno;
        string temp;
        char delim = '\n';
        cout << "Enter NEW VALUES (PRESS ENTER if the value not changed):" << endl;
        cin.ignore(); 
        cout << "New First Name: "; getline(cin, fName); 
        cout << "New Middle Init: ";  getline(cin, mInit); 
        cout << "New Last Name: "; getline(cin, lName);
        cout << "New Birthday: "; getline(cin, bDate);
        cout << "New Address: ";  getline(cin, address); 
        // cout << "New Sex: "; cin >> sex;
        // cout << "New Salary: "; cin >> salary;
        // cout << "New Super SSN: "; cin >> superSSN;
        // cout << "New DNO: "; cin >> dno;
        // cout << fName << ": " << mInit << ": " << address << endl;
        if (!fName.empty()) e->SetFName(fName);
        if (!mInit.empty()) e->SetMInit(mInit);
        if (!lName.empty()) e->SetLNname(lName);
        if (!bDate.empty()) e->SetBDate(bDate);
        if (!address.empty()) e->SetAddress(address);
        t = e;
        tData->Update(index, t);
        tData->ExportToFile(fileName);
    }
    return 0;
}
int EmployeeUI::Insert(TableData *tData, string fileName){
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
    return 0;
}
int EmployeeUI::Delete(TableData* tData, string fileName){
    int ssn;
    cout << "Enter Employee SSN: "; cin >> ssn;
    int index = tData->FindObjectPosition("SSN", ssn);
    if (index == -1){
        return -1;
    }else{
        tData->Delete(index);
        tData->ExportToFile(fileName);
    }
    return 0;
}