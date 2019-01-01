#include <iostream>

using namespace std;

//Command line arguments
int main(int argc, char *argv[])
{
    cout << argc << endl;

    
    for(size_t i = 0; i < argc; i++)
    {
        cout << argv[i]  << endl;
    }
    
}