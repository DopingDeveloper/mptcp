# Install script for directory: /home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC_XML

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/dkoe/mptcp/arch/sim/test/buildtop/build")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibrary")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gccxml-0.9" TYPE FILE FILES "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/objdir/GCC_XML/GXFront/InstallOnly/gccxml_config")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibrary")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/objdir/GCC_XML/KWSys/cmake_install.cmake")
  INCLUDE("/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/objdir/GCC_XML/Support/cmake_install.cmake")
  INCLUDE("/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/objdir/GCC_XML/GXFront/cmake_install.cmake")
  INCLUDE("/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/objdir/GCC_XML/Testing/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

