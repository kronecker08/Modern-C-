#include <iostream>
#include <vector>
#include <image.h>
//#include "./io_tools.h"
using namespace std;
namespace igg{
	Image();
 	Image(int rows,int cols) : rows_{rows}, cols_{cols} {
 		data_.resize(rows_*cols_);
 	}
 	const int& rows() {return rows_;}
 	const int& cols() {return cols_;}
 	int& Image::at (const int& row, const int& cols){
 		return data_[cols + Image::rows_*row];
 	}
 	/*
 	bool FillFromPgm(const std::string& file_name){
 		igg::io_tools::ImageData dat = igg::io_tools::ReadFromPgm(file_name);
 		data_ = dat.data;
 		rows_ = dat.rows;
 		cols_ = dat.cols;
 		max_val_ = dat.max_val;
 		if (data_.empty()){
 			return false;
 		}
 		else{
 			return true;
 		}
 	}
 	
 	void WriteToPgm(const std::string& file_name){
 		const igg::io_tools::ImageData dat;
 		dat.data = data_;
 		dat.rows = rows_;
 		dat.cols = cols_;
 		dat.max_val = max_val_;
 		bool confirm = WriteToPgm(dat, file_name);
 		cout<<"Bool value true if write was success else false "<<confirm<<endl;
 	}
 	*/



}