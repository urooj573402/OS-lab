#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    FILE* file = fopen("ghost.txt", "r");

    if (file == NULL)
    {
        perror("Failed to open file");
    }
    else
    {
        cout << "File opened successfully!" << endl;
        fclose(file);
    }

    return 0;
}