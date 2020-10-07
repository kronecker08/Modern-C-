#################### Import the 'io_tools' library here ########################

 # find_library(TOOLS
#			 NAME io_tools.so 
#			 PATH ${PROJECT_SOURCE_DIR}/lib)
#
 # message(STATUS"!!!!!!!${PROJECT_SOURCE_DIR}")


add_library(image image.cpp)
# target_link_libraries(image TOOLS) ## why did i use $tools???
add_executable(main main.cpp)
target_link_libraries(main image)