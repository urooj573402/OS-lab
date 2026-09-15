#include <iostream>
using namespace std;


int main(int age, int argc,char*argv[])
{
if(argc > 1)
std::cout<<"hello,"<<argv[1]<<"1\n";
return 0;
}




/*#include <iostream>
#include <windows.h>
int main()
{
	std::cout <<"my process id is:"<<GetCurrentProcessId()<<"\n";
	return 0;
}*/

/*#include<iostream>
#include<thread>
#include<chrono>
int main()
{
	std::cout<<"going to sleep\n";
	std::this_thread::sleep_for(
	std::chrono::seconds(3));
	std::cout<<"waking up!\n";
	return 0;
}*/