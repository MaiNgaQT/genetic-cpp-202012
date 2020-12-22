#include <iostream>
#include <vector>
#include <algorithm> //chứa các hàm như sort, find_if
#include <cmath> //chứa các hàm như abs
using namespace std;
void print_vector (vector<int> A){
    for (int x : A){
        cout << x << "   ";
    }
    cout << endl;
}
int main(){
    vector<int> A;
    A.resize(0);
    A.push_back(91);
    A.push_back(3);
    A.push_back(37);
    A.push_back(350);
    A.push_back(-5);
    A.push_back(-50);

    auto B(A);
    print_vector(A);
    //sắp xếp nổi bọt
    for (int i = 0; i < A.size() - 1; i++)
        for (int j = i + 1; j < A.size(); j ++)
            if (A[i] > A[j]){
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
    cout << "Vector A after sort: ";
    print_vector(A);
    cout << "Vector B after sort A: ";
    print_vector(B);

    sort(B.begin(), B.end()); //sắp xếp theo thứ tự tăng dần
    cout << "Vector B after sort ascending: ";
    print_vector(B);

    //sắp xếp theo thứ tự tăng dần của trị tuyệt đối
    sort(B.begin(), B.end(), 
                [] (int a, int b){
                    return (abs(a) < abs(b));
                }
    ); 
    cout << "Vector B after sort ascending absolute: ";
    print_vector(B);
    cout << "Hello";
}