#include "Log.h"
void Log::SetDefaultFilename(string filename){
    _default_filename = filename;
}
void Log::WriteLog(string log){
    if (_file_out == nullptr)
}