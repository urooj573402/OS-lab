#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    HANDLE readPipe, writePipe;

    // Create anonymous pipe
    if (!CreatePipe(&readPipe, &writePipe, NULL, 0))
    {
        cout << "Pipe creation failed!" << endl;
        return 1;
    }

    const char message[] = "Hello through the pipe!";

    DWORD written, read;
    char buffer[100] = {};

    // Write message into pipe
    if (!WriteFile(
        writePipe,
        message,
        sizeof(message),
        &written,
        NULL))
    {
        cout << "Write failed!" << endl;
        return 1;
    }

    // Read message from pipe
    if (!ReadFile(
        readPipe,
        buffer,
        sizeof(buffer) - 1,
        &read,
        NULL))
    {
        cout << "Read failed!" << endl;
        return 1;
    }

    // Display received message
    cout << buffer << endl;

    // Close pipe handles
    CloseHandle(readPipe);
    CloseHandle(writePipe);

    return 0;
}