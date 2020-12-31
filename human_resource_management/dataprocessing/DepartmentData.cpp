   #include<fstream>
   #include "DepartmentData.h"

    DepartmentData::DepartmentData(){
        _maxID = 0;
        _data.resize(0);
    }
    // insert a department to _data.
    DepartmentData::DepartmentData(Department d){
        if (_maxID < d.getDNumber()) _maxID = d.getDNumber();
        _data.push_back(d);
    }
    //read data from file
    DepartmentData::DepartmentData(string fileName){
        _maxID = 0;
        _data.resize(0);
        ifstream inFile = ifstream(fileName);
        const int maxSize = 255;
        char buff[maxSize];
        while (inFile.getline(buff, maxSize)){
            json j = json::parse(buff);
            Department d (j["DName"], j["DNumber"], j["MGRSSN"], j["MGRStartDate"]);
            _data.push_back(d);
        }
        _maxID = _data[_data.size() - 1].getDNumber();
        inFile.close();
    }
    int DepartmentData::GetSize(){
        return _data.size();
    }
    Department DepartmentData::GetDepartment(int i){
        string s("index out of bound");
        if (i < 0) throw s;
        if (i > _data.size()) throw s;
        return _data[i];
    }