#include <fstream>
#include "TableData.h"
using json = nlohmann::json;
using namespace std;
TableData::TableData(){
    _maxId = 0;
    _data.resize(0);
}
vector<string> TableData::ReadFileToJson(string fileName){
    _maxId = 0;
    _data.resize(0);
    
    vector<string> vt;
    vt.resize(0);
    ifstream inFile (fileName);
    string s;
    if (inFile.is_open()){
        while ( getline(inFile, s)){
           vt.push_back(s);
        }
    }    
    inFile.close();
    return vt;
}
int TableData::ReadFileToObject(string){
    return 0;
}
//add a Table object to the end of the list inside TableData
int TableData::PushBack(Table * t){
    //if e.id = 5, then maxId = 5
    if (_maxId < t->GetId()) _maxId = t->GetId();
    //add an Employee object to EmployeeData
    _data.push_back(t);
    return _maxId;
}
//return an employee object at postion i
Table* TableData::Get(int i){
    return _data[i];
}
//return size of TableData list
int TableData::GetSize(){
    return _data.size();
} 
//show all object of the list inside TableData
void TableData::DisplayData(){
    for (auto i : _data){
        cout << i->ToString() << endl;
    }
    cout << endl;
}
//write all data in TableData to file
int TableData::ExportToFile (string filename){
    ofstream outFile(filename);
    if ( !outFile) return 0;
    for (Table* e : _data)
        outFile << e->ToJson() << endl;
    outFile.close();
    return 1;
}
// virtual int Delete (int position);//delete an Table inside TableData
// virtual int Update (int position, Table); //update an Table inside TableData
// virtual int FindById(int id); //return position of Table