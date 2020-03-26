file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cc)

set(SOURCES ${SOURCES})

add_library(${CMAKE_PROJECT_NAME} STATIC ${SOURCES})

target_link_libraries(${CMAKE_PROJECT_NAME} Eigen3::Eigen)