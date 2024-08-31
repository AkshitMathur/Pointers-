// 23070123014 Akshit Mathur
//Aim: To print the address of the variable usng pointers.
#include <iostream>
using namespace std;
int main() {
    int a=10;
    int *aptr;
    aptr=&a;
    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;

    return 0;
}
//output
/*0x6ffe14
0x6ffe14
10*/
