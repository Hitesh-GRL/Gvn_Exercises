// Program to demonstrate implicit and explicit conversion for all data types 

# include<iostream>
using namespace std;

int main()
{
    // all data types to bool 
    cout<<"Implicit Conversion";
    bool a;
    cout<<"all data types to bool\n";
    a = 'a';  // char
    cout<<a<<endl;

    a = 4;  // int
    cout<<a<<endl;

    a = 10.01;  // floating point
    cout<<a<<"\n\n";

    // all data types to char (implicit)
    char b;
    cout<<"all data types to char\n";
    b = true ;      // bool
    cout<<b<<endl;

    b = 4;         // int
    cout<<b<<endl;

    b = 1.23;       // floating point
    cout<<b<<"\n\n";

    // All data types to int 
    int c;
    cout<<"all data types to int\n";
    c = true;       // bool
    cout<<c<<endl;

    c = 'a';        // char
    cout<<c<<endl;

    c = 10.23;      // floating point
    cout<<c<<"\n\n";

    // all data types to float
    float d;
    cout<<"all data types to float\n";
    d = true;       // bool
    cout<<d<<"\n";

    d = 'a';        // char
    cout<<d<<"\n";

    d = 10;         // int 
    cout<<d<<"\n";

    d = 10.01;     // floating point 
    cout<<d<<"\n\n";

    // all data types to float
    cout<<"all data types to double\n";
    double e;
    e = true;       // bool
    cout<<e<<"\n";

    e = 'a';        // char
    cout<<e<<"\n";

    e = 10;         // int 
    cout<<e<<"\n";

    e = 10.01;     // floating point 
    cout<<e<<"\n\n";

    //  Explict Conversion |
    //                     V

    // all data types to bool 
    cout<<"Explicit Conversion";
    
    cout<<"all data types to bool\n";
    a = (bool)'a';  // char
    cout<<a<<endl;

    a = (bool)4;  // int
    cout<<a<<endl;

    a = (bool)10.01;  // floating point
    cout<<a<<"\n\n";

    // all data types to char (implicit)
 
    cout<<"all data types to char\n";
    b = (char)true ;      // bool
    cout<<b<<endl;

    b = (char)4;         // int
    cout<<b<<endl;

    b = (char)1.23;       // floating point
    cout<<b<<"\n\n";

    // All data types to int 

    cout<<"all data types to int\n";
    c = (int)true;       // bool
    cout<<c<<endl;

    c = (int)'a';        // char
    cout<<c<<endl;

    c = (int)10.23;      // floating point
    cout<<c<<"\n\n";

    // all data types to float

    cout<<"all data types to float\n";
    d = (float)true;       // bool
    cout<<d<<"\n";

    d = (float)'a';        // char
    cout<<d<<"\n";

    d = (float)10;         // int 
    cout<<d<<"\n";

    d = (float)10.01;     // floating point 
    cout<<d<<"\n\n";

    // all data types to float
    cout<<"all data types to double\n";
   
    e = (double)true;       // bool
    cout<<e<<"\n";

    e = (double)'a';        // char
    cout<<e<<"\n";

    e = (double)10;         // int 
    cout<<e<<"\n";

    e = (double)10.01;     // floating point 
    cout<<e<<"\n\n";
    return 0;
}