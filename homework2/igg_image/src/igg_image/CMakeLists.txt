#################### Import the 'io_tools' library here ########################
find_library(TOOLS
             NAMES io_tools
             PATHS ${PROJECT_SOURCE_DIR}/lib)

#################### Create a library 'image' below this line ##################
add_library(image image.cpp)

target_link_libraries(image ${TOOLS})

#################### Create example executable
add_executable(main main.cpp)

target_link_libraries(main image)


