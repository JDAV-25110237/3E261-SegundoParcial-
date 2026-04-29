#include <iostream>
using namespace std;

int main() {
   
    int a = 5; 


    cout << "int:" << sizeof(a) << endl;
    cout << "long:" << sizeof(long) << endl;
    cout << "char:" << sizeof(char) << endl;
    cout << "bool:" << sizeof(bool) << endl;
    cout << "float:" << sizeof(float) << endl;
    cout << "double:" << sizeof(double) << endl;

    cout << "Direccion (&a): " << &a << endl;
    cout << "Valor (a): " << a << endl;
    cout << "Valor via puntero (*(&a)): " << *(&a) << endl;
    cout << sizeof (int*) << endl;
    cout << sizeof (long*) << endl;
    cout << sizeof (char*) << endl;
    cout << sizeof (bool*) << endl;
    cout << sizeof (float*) << endl;
    cout << sizeof (double*) << endl;
int* direccion;
cout<<direccion<<endl; 
cout<<&direccion<<endl;  
cout<<*direccion<<endl;  
    return 0;
}