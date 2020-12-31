#ifndef project_ui_TableUI_H_
#define project_ui_TableUI_H_
#include<iostream>
#include <string>
#include "../dataprocessing/TableData.h"
using namespace std;
class TableUI{
public:
    virtual void ReadData(TableData*, string) = 0;
    virtual void Update() = 0;
    virtual void Insert(TableData*, string) = 0;
    virtual void Delete() = 0;
    //show all object of the list inside TableData


};
#endif