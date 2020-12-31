#include<fstream>
#include "EmployeeData.h"
EmployeeData::EmployeeData() (
    _maxId = 0;
    _data.resize(0);
)
int EmployeeData::PushBack (Employee) //add an Employee to the end of the list inside EmployeeData
Employee* EmployeeData:: GetPointer(int i){
        Employee e = nullptr;
        if (i >= 0 && i < _data.size())
            e = _data[i];
        return e;
}
int EmployeeData::Export(string fileName){
    ofstream outFile(fileName);
    ofstream << _data.
}