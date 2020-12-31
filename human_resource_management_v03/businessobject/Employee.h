#ifndef project_businessobject_Employee_H_
#define project_businessobject_Employee_H_
#include <iostream>
#include <string>
#include "Table.h"
using namespace std;
class Employee : public Table{
    //encapsulation: đóng gói lại thông tin của đối tượng vào một lớp
    int Id; //id is increasing number
    string FName, MInit, LName;
    long SSN;
    string BDate, Address;
    char Sex;
    int Salary;
    long SuperSSN;
    int DNO;
public: 
    Employee();
    Employee(int id, string fName, string mInit, string lName, long ssn, string bDate, string address, char sex, int salary, long superSSN, int dno); 
    string ToString(); //convert a object to string
    json ToJson();

    int GetId();
    string GetFName();
    string GetMInit();
    string GetLName();
    long GetSSN();
    string GetBDate();
    string GetAddress();
    char GetSex();
    int GetSalary();
    long GetSuperSSN();
    int GetDNO();

    void SetID(int);
    void SetFName(string);
    void SetMInit(string);
    void SetLNname(string);
    void SetSSN(long);
    void SetBDate(string);
    void SetAddress(string);
    void SetSex(char);
    void SetSalary(int);
    void SetSuperSSN(long);
    void SetDNO(int);
};
#endif