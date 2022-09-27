#include <iostream>
#include <windows.h>

int main()
{
	for  (int num = 1000; num > 0; num -=7)
	{
		std::cout << num << " - 7?" << std::endl;
		Sleep(30);
	}
	std::cout << "I'm bezdar" << std::endl;
	return 0;
}
