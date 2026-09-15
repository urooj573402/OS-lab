#include <iostream>
#include <windows.h>

using namespace std;

BOOL WINAPI Handler(DWORD signal)
{
    if (signal == CTRL_C_EVENT)
    {
        cout << "You can't close me!" << endl;
        return TRUE;
    }

    return FALSE;
}

int main()
{
    SetConsoleCtrlHandler(Handler, TRUE);

    while (true)
    {
        cout << "Running..." << endl;
        Sleep(1000);
    }

    return 0;
}