#include <iostream>
#include <vector>
#include <image.h>
#include <io_tools.h>
//using namespace igg;
namespace igg{
 
 	int& Image::at (const int& row, const int& cols){
 		return Image::data_[cols + Image::rows_*row];
 	}
 	// Fill the Image class with PGM file
	
 	bool Image::FillFromPgm(const std::string& file_name){
 		io_tools::ImageData dat = io_tools::ReadFromPgm(file_name);
        if (dat.data.empty()){
            std::cout<<"cannot find the file"<<std::endl;
            return false;
        }
 		data_ = dat.data;
 		rows_ = dat.rows;
 		cols_ = dat.cols;
 		max_val_ = dat.max_val;
 		return true;
 	}
 
 	void Image::WriteToPgm(const std::string& file_name){
 		const io_tools::ImageData dat = {rows_, cols_ , max_val_, data_};
 		//dat.data = vector <int> {20}; //data_;
 		//dat.rows = 20;//rows_;
 		//dat.cols = 20;//cols_;
 		//dat.max_val = 20 ;//max_val_;
 		bool confirm = io_tools::WriteToPgm(dat, file_name);
 		std::cout<<"Bool value true if write was success else false "<<confirm<<std::endl;
 	}
}