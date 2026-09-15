#include<iostream>
using namespace std;
int main()
{
const char* user=std::getenv("username");
if(user!=nullptr)
std::cout<<"current user is:"<<user<<"\n";	
}