#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    STARTUPINFOA si = {};
    PROCESS_INFORMATION pi = {};

    si.cb = sizeof(si);

    char command[] = "cmd.exe /C ping 127.0.0.1 -n 3 > nul";

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
        // Wait for the child process to finish
        WaitForSingleObject(pi.hProcess, INFINITE);

        cout << "All done!" << endl;

        CloseHandle(pi.hThread);
        CloseHandle(pi.hProcess);
    }
    else
    {
        cout << "Child process could not be created." << endl;
    }

    return 0;
}