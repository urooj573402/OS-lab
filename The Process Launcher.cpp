#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    STARTUPINFOA si = {};
    PROCESS_INFORMATION pi = {};

    si.cb = sizeof(si);

    char command[] = "cmd.exe /C echo I am the child";

    if (CreateProcessA(
        NULL,
        command,
        NULL,
        NULL,
        FALSE,
        0,
        NULL,
        NULL,
        &si,
        &pi))
    {
        cout << "I am the parent" << endl;

        CloseHandle(pi.hThread);
        CloseHandle(pi.hProcess);
    }
    else
    {
        cout << "Child process could not be created." << endl;
    }

    return 0;
}