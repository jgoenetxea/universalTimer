CMAKE_MINIMUM_REQUIRED( VERSION 3.0 )

project(timerTestApp)

#---------------------------------------------------#
#              Project Files                        #
#---------------------------------------------------#
# List source files in a variable so we can use it later more conveniently
FILE( GLOB PROJECT_HEADERS "*.h" )
FILE( GLOB PROJECT_SRCS "*.cpp" )

#---------------------------------------------------#
#              Project Configuration                #
#---------------------------------------------------#
INCLUDE_DIRECTORIES( ${CMAKE_CURRENT_SOURCE_DIR}/..)

set(CMAKE_DEBUG_POSTFIX "_d")

add_executable(${PROJECT_NAME} ${PROJECT_SRCS} ${PROJECT_HEADERS})

# set c++14 as the used c++ standard for this library
# SET_PROPERTY(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 14)
# SET_PROPERTY(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD_REQUIRED ON)
