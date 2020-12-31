#ifndef project_dataprocessing_TableData_H_
#define project_dataprocessing_TableData_H_
#include <iostream>
#include <string>
#include <vector>
#include "../businessobject/Table.h"
#include "../libs/json.hpp"
using json = nlohmann::json;
using namespace std;
class TableData{
protected:
    int _maxId;
    vector<Table*> _data;
public:
    TableData();
    vector<string> ReadFileToJson(string);//read data from file
    //add a Table object to the end of the list inside TableData
    int PushBack (Table*);
    //return an employee object at postion i
    Table* Get (int i);
    int GetSize(); //return size of TableData list
    void DisplayData();//show all object of the list inside TableData
    int ExportToFile (string);//write all data in TableData to file
    virtual int ReadFileToObject(string);
    // virtual int Delete (int position);//delete an Table inside TableData
    // virtual int Update (int position, Table); //update an Table inside TableData
    // virtual int FindById(int id); //return position of Table
    
};
#endif