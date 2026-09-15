#include <iostream>
#include <thread>

using namespace std;

void worker()
{
    cout << "Worker thread is running" << endl;
}

int main()
{
    thread t(worker);

    cout << "Main thread is running" << endl;

    t.join();

    return 0;
}