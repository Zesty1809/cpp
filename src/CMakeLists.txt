# Add the executable
add_executable(app main.cpp)

set_property(TARGET app PROPERTY CXX_STANDARD 23)

# Find SDL2 package
find_package(SDL2 REQUIRED)

# Include SDL2 directories
target_include_directories(app PRIVATE ${SDL2_INCLUDE_DIRS})

# Link SDL2 library
target_link_libraries(app PRIVATE ${SDL2_LIBRARIES})