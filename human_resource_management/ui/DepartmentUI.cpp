#include <iostream>
#include<string>
#include "../dataprocessing/DepartmentData.h"
#include "../bussinessobject/Department.h"
void displayDepartmentData (DepartmentData dData){
    for (int i = 0; i < dData.GetSize(); i++){
        Department d = dData.GetDepartment(i);
        cout << d.ToString() << endl;
    }
}