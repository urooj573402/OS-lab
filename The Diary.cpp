#include <fstream>
using namespace std;
int main()
{
   std::ofstream file("diary.txt");
	file<<"hello os"<<endl;
	file.close();
	return 0;
	
}