#ifndef project_ui_EmployeeUI_H_
#define project_ui_EmployeeUI_H_
#include<iostream>
#include"TableUI.h"
#include "../dataprocessing/TableData.h"
using namespace std;
class EmployeeUI : public TableUI{
public:
    EmployeeUI();
    int ReadData(TableData*, string);
    int Update(TableData*, string);
    int Insert(TableData*, string);
    int Delete(TableData*, string);
};
#endif