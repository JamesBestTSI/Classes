# Set minimum required CMake version
cmake_minimum_required(VERSION 3.10)

# Set the project_name and version
project(WeaponClasses VERSION 1.0)

add_subdirectory(src/include)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the executable
add_executable(WeaponClasses src/main.cpp)
target_link_libraries(WeaponClasses PRIVATE weaponClass)

# Add the targeted cpp features
target_compile_features(WeaponClasses PUBLIC cxx_std_20)