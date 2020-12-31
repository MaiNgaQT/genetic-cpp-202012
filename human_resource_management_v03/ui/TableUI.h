#ifndef project_ui_TableUI_H_
#define project_ui_TableUI_H_
#include<iostream>
#include <string>
#include "../dataprocessing/TableData.h"
using namespace std;
class TableUI{
public:
    virtual int ReadData(TableData*, string) = 0;
    virtual int Update(TableData*, string) = 0;
    virtual int Insert(TableData*, string) = 0;
    virtual int Delete(TableData*, string) = 0;
    //show all object of the list inside TableData


};
#endif