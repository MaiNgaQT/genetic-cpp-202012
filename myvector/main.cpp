#include <iostream>
#include <vector>
using namespace std;
int simple_vector(){
    vector<float> a;
    int n;
    cout << "Enter array size: ";
    cin >> n;
    if (n < 1){
        cout << "Invalid size";
        return 1;
    }
    a.resize(n);
    for (int i =0; i < n; i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    } 
    cout << "Data:";
    for (float f : a) {
        cout << f << "   ";
    }
    cout << endl;
    return 0;
}
istream& operator >> (istream& iDevice, vector<float> &a){
    float temp;
    a.resize(0);
    while (iDevice >> temp){ //nếu nhập vào là một số kiểu float thì vòng lặp thực hiện
        a.push_back(temp);
    }
    return iDevice;
}
ostream& operator << (ostream& oDevice, vector<float> &a){
    for (float f : a){
        oDevice << f << "   ";
    }
    return oDevice;
}
int main(){
   vector<float> a;
   cout << "Input: ";
   cin >> a;
   cout << "Output: ";
   cout << a;
    return 0;
}