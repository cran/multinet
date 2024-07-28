cmake_minimum_required( VERSION 3.15...3.23 )

# Meta information about the project
#include( "${PROJECT_SOURCE_DIR}/project-meta-info.in" )

set (META_LIBRARY_NAME			"uunet")
set (META_PROJECT_HOMEPAGE 		"https://github.com/uuinfolab/uunet")
set (META_PROJECT_DESCRIPTION 	"Network analysis library")

# Configure version header
#configure_file(${CMAKE_SOURCE_DIR}/src/config.hpp.in ${CMAKE_CURRENT_BINARY_DIR}/include/config.hpp @ONLY)

file( GLOB_RECURSE HEADERS CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/src/*.hpp" )
file( GLOB_RECURSE HEADERS_IMP CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/src/*.ipp" )
file( GLOB_RECURSE SOURCES CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/src/*.cpp" "${CMAKE_SOURCE_DIR}/ext/eclat/*.c" "${CMAKE_SOURCE_DIR}/ext/infomap/*.cpp")

add_library( ${META_LIBRARY_NAME} SHARED
	${SOURCES}
	${HEADERS}
	${HEADERS_IMP} )

include( GNUInstallDirs )

target_include_directories ( ${META_LIBRARY_NAME}
	PUBLIC
		$<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}>/ext/eclat/eclat/src
		$<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}>/ext/eclat/tract/src
		$<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}>/ext/eclat/math/src
		$<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}>/ext/eclat/util/src
		$<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}>/ext/eclat/apriori/src
		$<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}>/ext/infomap
        $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}>/ext/boost
		$<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}>
		$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}> )

add_definitions(-DNS_INFOMAP -DONLY_C_LOCALE=1 -DISR_CLOMAX)

set_target_properties ( ${META_LIBRARY_NAME} PROPERTIES
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	VERSION ${META_LIBRARY_VERSION_FULL}
	SOVERSION ${META_LIBRARY_VERSION} )

set_target_properties ( ${META_LIBRARY_NAME} PROPERTIES 
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED YES
	CXX_EXTENSIONS OFF ) 

if( MSVC )
	set ( LIBRARY_DEBUG_OPTIONS /W4 /WX )
else()
	set ( LIBRARY_DEBUG_OPTIONS -Wall -Wextra -Wpedantic )
endif()

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON) # to create a .lib file besides the .dll (windows)

target_compile_features( ${META_LIBRARY_NAME} PUBLIC cxx_std_17 )
target_compile_options( ${META_LIBRARY_NAME} PUBLIC "$<$<CONFIG:DEBUG>:${LIBRARY_DEBUG_OPTIONS}>" )

# IDEs should put the headers in a nice place
source_group( TREE "${PROJECT_SOURCE_DIR}/include" PREFIX "Header Files" FILES ${HEADER_LIST} )

install(
	TARGETS ${META_LIBRARY_NAME}
	EXPORT
	${META_LIBRARY_NAME}-config
	COMPONENT ${META_LIBRARY_NAME}_dev
	RUNTIME
		DESTINATION ${CMAKE_INSTALL_BINDIR}
		COMPONENT ${META_LIBRARY_NAME}_rt
	LIBRARY
		DESTINATION ${CMAKE_INSTALL_LIBDIR}
		COMPONENT ${META_LIBRARY_NAME}_rt
		NAMELINK_COMPONENT ${META_LIBRARY_NAME}_dev 
	ARCHIVE
		DESTINATION ${CMAKE_INSTALL_LIBDIR}
		COMPONENT ${META_LIBRARY_NAME}_dev )

install(
	DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/							# source directory
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${META_LIBRARY_NAME}	# target directory
	FILES_MATCHING 													# install only matched files
	PATTERN "*.hpp" 												# select header files
	PATTERN "*.ipp" ) 												# select header files

install(
	FILES ${CMAKE_CURRENT_BINARY_DIR}/include/config.hpp			# source file
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${META_LIBRARY_NAME} )	# target directory

install(
	EXPORT ${META_LIBRARY_NAME}-config
    NAMESPACE {PROJECT_NAME}::
	DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${META_LIBRARY_NAME}
	COMPONENT ${META_LIBRARY_NAME}_dev )

file (GLOB_RECURSE ECLAT_HEADERS ${PROJECT_SOURCE_DIR}/ext/eclat/*.h)
install(FILES ${ECLAT_HEADERS} # source directory
        DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/eclat" # target directory
)

install(DIRECTORY "${PROJECT_SOURCE_DIR}/ext/infomap" # source directory
        DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}" # target directory
        FILES_MATCHING # install only matched files
        PATTERN "*.h" # select header files
)

install(DIRECTORY "${PROJECT_SOURCE_DIR}/ext/boost" # source directory
        DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}" # target directory
        FILES_MATCHING # install only matched files
        PATTERN "*.hpp" # select header files
)
