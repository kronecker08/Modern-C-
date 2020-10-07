#include <iostream>
#include <string>
using namespace std;
#include "./image.h"
int main()
{
	igg::Image img(10,10);
	cout<<img.rows()<<endl;
	/*const std::string file_name = "lena.ascii.pgm";
	bool check = img.FillFromPgm(file_name);
	std::cout<<"The value of bool is "<<check<<std::endl;
	*/
	return 0;

}