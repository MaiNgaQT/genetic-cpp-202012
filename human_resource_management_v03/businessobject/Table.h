#ifndef project_businessobject_Table_H_
#define project_businessobject_Table_H_
#include<iostream>
#include "../libs/json.hpp"
using json = nlohmann::json;
using namespace std;
class Table{
public:
/*  * @brief Function converts an object to string
    * Function converts an object to string
    * @return a string
*/
    virtual string ToString(){
        return "";
    }
    virtual int GetId(){
        return -1;
    }
    virtual json ToJson(){
        json j;
        return j;
    }
};
#endif