cmake_minimum_required (VERSION 3.13)

project (matrix_tools VERSION 1.0.1 DESCRIPTION "matrix_tools library")
include (GNUInstallDirs)
add_library (matrix_tools SHARED src/Matrix.cpp)
set_target_properties(matrix_tools PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION 1
    PUBLIC_HEADER src/Matrix.hpp)

  configure_file (matrix_tools.pc.in matrix_tools.pc @ONLY)
target_include_directories (matrix_tools PRIVATE .)
install(TARGETS matrix_tools
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
install(FILES ${CMAKE_BINARY_DIR}/matrix_tools.pc
    DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig)
