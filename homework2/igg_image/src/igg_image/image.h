#pragma once

#include <vector>

namespace igg {

class Image {
 public:
 	
 	Image();
 	Image(int rows,int cols) : rows_{rows}, cols_{cols} {
 		data_.resize(rows_*cols_);
 	}
 	const int& rows() {return rows_;}
 	const int& cols() {return cols_;}
 	int& at (const int& row, const int& cols);
 	bool FillFromPgm(const std::string& file_name);
 	//void WriteToPgm(const std::string& file_name);
  ///////////////////// Create the public interface here ///////////////////////
 private:
  int rows_ = 0;
  int cols_ = 0;
  int max_val_ = 255;
  std::vector<int> data_;
};

}  // namespace igg