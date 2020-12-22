#ifndef Project_businessobject_Employee_h_
#define Project_businessobject_Employee_h_
#include <string>
#include <iostream>
#include "../libs/json.hpp"
using json = nlohmann::json;
using namespace std;
class Employee{
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
    json ToJson();  //convert a object to json
    int GetId();
};
#endif