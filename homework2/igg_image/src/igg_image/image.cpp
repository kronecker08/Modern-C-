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
 		bool confirm = io_tools::WriteToPgm(dat, file_name);
 		std::cout<<"Bool value true if write was success else false "<<confirm<<std::endl;
 	}
 	std::vector <float> Image::ComputeHistogram(int bins){
 	 	float factor = 255.0 / bins;
 	 	std::vector <float> result;
 	 	for (int j = 1; j<=bins; j++)
 	 	{//checks for the vlue to be less than 
 	 		float res = 0.0 ; //number of values less than 
 	 		for(auto & i : data_){
 	 			if (((j-1)*factor)<i && i<(j*factor)){
 	 				res = res + 1.0;
 	 			}
 	 		}
 	 		float size = data_.size();
 	 		result.emplace_back(res/size);
 	 	}
 	 	return result;
 	}


}//namespace igg