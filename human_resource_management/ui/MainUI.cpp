#include <iostream>
using namespace std;
int selectTable(){
    int tableSelection;
    cout << "1. Employee" << endl;
    cout << "2. Department" << endl;
    cout << "3. Department-Location" << endl;
    cout << "4. Project" << endl;
    cout << "5. Works-On" << endl;
    cout << "6. Dependent" << endl;
    cout << "Choose table: ";
    cin >> tableSelection;
    return tableSelection;
}
int showEmployeeAccording2Management(EmployeeData eData, string managementName){
    int ssn = eData.FindSSNByName(managementName);
    cout << "SSN = " << ssn << endl;
    vector<Employee> vt = eData.GetListEmployee(ssn);
    if (vt.size() != 0){
        cout << "Employees monitored by \"" << managementName << "\": " << endl;
        for (auto e : vt){
            cout << e.ToString() << endl;
        }
    }else{
        cout << "No Employee monitored by \"" << managementName << "\": " << endl;
    }
    return 0;
}