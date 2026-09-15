#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    HANDLE process = GetCurrentProcess();

    if (SetPriorityClass(process, BELOW_NORMAL_PRIORITY_CLASS))
    {
        cout << "Process priority changed successfully." << endl;
    }
    else
    {
        cout << "Could not change process priority." << endl;
    }

    return 0;
}