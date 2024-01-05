#include <iostream>
#include <fstream>
#include <Windows.h>

int main()
{
	std::cout << "PETools..." << std::endl;

	std::string exe_path;

	std::cout << "Input exe path: " << std::endl;
	std::cin >> exe_path;

	std::ifstream exe_stream;
	exe_stream.open(exe_path, std::ios::binary | std::ios::in);

	IMAGE_DOS_HEADER dos_header;
	if (exe_stream.is_open())
	{
	

		exe_stream.read((char*)&dos_header, sizeof(IMAGE_DOS_HEADER));

	}

	return 0;
}