# libpion  - CMake Package Configuration File
#
#   To use libpion in your software, simply add the following to your 
#   CMakeLists.txt :
#
#       find_package(libpion  REQUIRED)
#       link_directories(${LIBPION_LIBRARY_DIRS}) 
#       include_directories(${LIBPION_INCLUDE_DIRS})
#
#   Once this done you can simply add *pion* to your target_link_libraries, e.g:
#       target_link_libraries(yourTarget ${LIBPION_LIBRARIES})
#       

set(LIBPION_VERSION_MAJOR 5)
set(LIBPION_VERSION_MINOR 0)
set(LIBPION_VERSION_PATCH 7)
set(LIBPION_PACKAGE_VERSION 5.0.7)

set(LIBPION_INSTALL_PREFIX "/home/lilelr/firmament/build/third_party/pion/src/pion/bin")
set(LIBPION_INCLUDE_DIRS ${LIBPION_INSTALL_PREFIX}/include)
set(LIBPION_LIBRARY_DIRS ${LIBPION_INSTALL_PREFIX}/lib)
set(LIBPION_LIBRARIES ${LIBPION_INSTALL_PREFIX}/lib/libpion.so)
