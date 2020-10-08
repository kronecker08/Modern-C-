#pragma once

#include <vector>
#include <string>

namespace igg {

class Image {
 public:
  
  Image() {} //Image constructor empty
  Image(int rows,int cols) : rows_{rows}, cols_{cols} {             //image constructor with input
    data_.resize(rows_*cols_);  
  }
  const int& rows() {return rows_;} // returns number of rows
  const int& cols() {return cols_;}  // returns number of cols
  int& at (const int& row, const int& cols);              //returns value of the pixel
  bool FillFromPgm(const std::string& file_name);
          //fills the vector with data from the pgm file
  void WriteToPgm(const std::string& file_name);          // wrote 
  ///////////////////// Create the public interface here ///////////////////////
  std::vector <float> ComputeHistogram(int bins);
 private:
  int rows_ = 0;
  int cols_ = 0;
  int max_val_ = 255;
  std::vector<int> data_;
};

}  // namespace igg