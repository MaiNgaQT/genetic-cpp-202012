#include <iostream>
#include <fstream>
#include <algorithm>
#include "../bussinessobject/Employee.h"
#include "../dataprocessing/EmployeeData.h"
#include "../libs/json.hpp"
using json = nlohmann::json;
using namespace std;
void displayEmployeeData (EmployeeData eData){
    for (int i = 0; i < eData.GetSize(); i++){
        Employee e = eData.Get(i);
        cout << e.ToString() << endl;
    }
}
void insertEmployee (EmployeeData eData, string fileName){
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
    eData.PushBack(e);
    // displayEmployeeData(eData);
    eData.ExportToFile(fileName);
}
void deleteEmployee (EmployeeData eData, string fileName){
    cout << "*** DELETE AN EMPLOYEE ***" << endl;
    int id;
    cout << "Enter the Employee id you want to delete: ";
    cin >> id;
    int position = eData.FindById(id);
    if (position == -1)
        cout << "Invalid Employee ID" << endl;
    else{
        eData.Delete(position);
        eData.ExportToFile(fileName);
        cout << "Successfully Deleted" << endl;
    }

}
int updateEmployee (EmployeeData eData, string fileName){
    cout << "UPDATE AN EMPLOYEE " << endl;
    int id;
    string fName, mInit, lName;
    long ssn;
    string bDate, address;
    char sex;
    int salary;
    long superSSN;
    int dno;
    char delim = '\n';
    cout << "Enter the Employee ID you want to update: ";
    cin >> id;
    int i = eData.FindById(id);
    if (i == -1)
        cout << "Invalid Employee ID" << endl;
    else{
        cout << "Enter NEW VALUES (PRESS ENTER if the value not changed):" << endl;
        cout << "New First Name: "; cin.ignore(); getline(cin, fName, delim); 
        cout << "New Middle Init: "; cin.ignore(); getline(cin, mInit, delim); 
        // cout << "New Last Name: "; cin >> lName;
        // cout << "New SSN: "; cin >> ssn;
        // cout << "New Birthday: "; cin >> bDate;
        cout << "New Address: "; cin.ignore(); getline(cin, address, delim); 
        // cout << "New Sex: "; cin >> sex;
        // cout << "New Salary: "; cin >> salary;
        // cout << "New Super SSN: "; cin >> superSSN;
        // cout << "New DNO: "; cin >> dno;
        
        Employee e = eData.Get(i);
        if (!fName.empty()) e.SetFName(fName);
        // if (!mInit.empty()) e.SetMInit(mInit);
        if (!address.empty()) e.SetAddress(address);
        eData.Update(i, e);    
        eData.ExportToFile(fileName);
        cout << "Successfully Updated" << endl;
    }
    
    return 0;
}
