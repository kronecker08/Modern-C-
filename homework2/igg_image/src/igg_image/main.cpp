#include <iostream>
#include <string>
#include <image.h>
#include <io_tools.h>
using namespace std;

int main()
{
	igg::Image img;
	std::string file_name = "~/modern_cpp/Modern-C-/homework2/igg_image/data/lena.ascii.pgm";
	bool check = img.FillFromPgm(file_name);
	std::cout<<"The value of bool is "<<check<<std::endl;
	igg::io_tools::ImageData dat = igg::io_tools::ReadFromPgm(file_name);
	cout<<dat.rows<<endl;
	igg::Image img2(20,20);
	img2.WriteToPgm("~/modern_cpp/Modern-C-/homework2/igg_image/data/lena2.ascii.pgm" );
	return 0;
}