# Install script for directory: /home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC_XML/Support

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gccxml-0.9" TYPE FILE FILES "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC_XML/Support/gccxml_identify_compiler.cc")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibrary")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibrary")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gccxml-0.9" TYPE DIRECTORY FILES
    "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC_XML/Support/GCC"
    "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC_XML/Support/Intel"
    "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC_XML/Support/MIPSpro"
    "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC_XML/Support/Sun"
    "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC_XML/Support/IBM"
    REGEX "/find\\_flags$" PERMISSIONS OWNER_WRITE OWNER_READ GROUP_READ WORLD_READ OWNER_EXECUTE GROUP_EXECUTE WORLD_EXECUTE REGEX "/[^/]*\\.sh$" PERMISSIONS OWNER_WRITE OWNER_READ GROUP_READ WORLD_READ OWNER_EXECUTE GROUP_EXECUTE WORLD_EXECUTE REGEX "/CVS$" EXCLUDE REGEX "/CMakeLists\\.txt$" EXCLUDE REGEX "/\\.\\#[^/]*$" EXCLUDE)
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibrary")

