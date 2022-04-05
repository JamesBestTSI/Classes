# Create a libary linker
add_library(
    weaponClass STATIC
    weapon.h
    weapon.cpp
)

# Include the files when creating this Libary
target_include_directories(weaponClass PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")