#ifndef project_ui_EmployeeUI_H_
#define project_ui_EmployeeUI_H_
#include<iostream>
#include"TableUI.h"
#include "../dataprocessing/TableData.h"
using namespace std;
class EmployeeUI : public TableUI{
public:
    EmployeeUI();
    void ReadData(TableData*, string);
    void Update();
    void Insert(TableData*, string);
    void Delete();
};
#endif