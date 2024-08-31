//23070123014 Akshit Mathur
//Aim:to ckecck the addresses of the pointers after incrementing  
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;
    float b = 2.5;
    float *fptr = &b;
    char c = 's';
    char *cptr = &c;
    bool d = 1;
    bool *dptr = &d;
    
    cout << "For integer:"<<*ptr<< endl;
    cout << "Before increment" << endl;
    cout << "Address: " << ptr << endl;
    ptr++;
    cout << "After increment" << endl;
    cout << "Address: " << ptr << endl;
    cout << endl;
    
    cout << "For float:"<<*fptr<< endl;
    cout << "Before increment" << endl;
    cout << "Address: " << fptr << endl;
    fptr++;
    cout << "After increment" << endl;
    cout << "Address: " << fptr << endl;
    cout << endl;
    
    cout << "For boolean:"<<*dptr<< endl;
    cout << "Before increment" << endl;
    cout << "Address: " << dptr << endl;
    dptr++;
    cout << "After increment" << endl;
    cout << "Address: " << dptr << endl;
    cout << endl;
    
    cout << "For character:"<<*cptr<< endl;
    cout << "Before increment" << endl;
    cout << "Address: " << (void*)cptr << endl;
    cptr++;
    cout << "After increment" << endl;
    cout << "Address: " << (void*)cptr << endl;
    cout << endl;

    return 0;
}
//output
/*
For integer:10
Before increment
Address: 0x6ffdec
After increment
Address: 0x6ffdf0

For float:2.5
Before increment
Address: 0x6ffde8
After increment
Address: 0x6ffdec

For boolean:1
Before increment
Address: 0x6ffde6
After increment
Address: 0x6ffde7

For character:s
Before increment
Address: 0x6ffde7
After increment
Address: 0x6ffde8
*/

