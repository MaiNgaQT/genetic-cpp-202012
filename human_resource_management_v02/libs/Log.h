#ifndef project_libs_Log_H_
#define project_libs_Log_H_
#include<string>
#include<iostream>
using namespace std;
class Log{
private:
    static string _default_filename = "logs.txt";
    static ofstream* _file_out = nullptr;
public:
    static void SetDefaultFilename(string filename);
    static void WriteLog(string log);
};
#endif