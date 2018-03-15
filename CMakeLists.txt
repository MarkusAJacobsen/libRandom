cmake_minimum_required(VERSION 3.10.2)
project(markusja_RandomLibrary VERSION 1.0.0 DESCRIPTION "A set of function returning a random value")
include(GNUInstallDirs)

set(CMAKE_CXX_STANDARD 11)

add_library(markusja_RandomLibrary SHARED markusja_RandomLibrary.cpp)


set_target_properties(markusja_RandomLibrary PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(markusja_RandomLibrary PROPERTIES SOVERSION 1)
set_target_properties(markusja_RandomLibrary PROPERTIES PUBLIC_HEADER markusja_RandomLibrary.h)

configure_file(markusja_RandomLibrary.pc.in markusja_RandomLibrary.pc @ONLY)
target_include_directories(markusja_RandomLibrary PRIVATE .)


install(TARGETS markusja_RandomLibrary
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

install(FILES ${CMAKE_BINARY_DIR}/markusja_RandomLibrary.pc DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig)

#install(TARGETS markusja_RandomLibrary
 #       EXPORT markusja_RandomLibraryProject-targets
  #      DESTINATION lib
   #     )
# install(EXPORT markusja_RandomLibraryProject-targets
  #      DESTINATION cmake
   #     )