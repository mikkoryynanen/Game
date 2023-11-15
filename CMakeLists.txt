cmake_minimum_required(VERSION 3.0.0)
project(sfml-project VERSION 0.1.0)

# Copy all the required SFML libs and main executable to bin/
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin/)

############################################################
# SFML
include(FetchContent)
FetchContent_Declare(SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)
############################################################

# ================================================================================
# Loguru
include(FetchContent)
FetchContent_Declare(LoguruGitRepo
        GIT_REPOSITORY "https://github.com/emilk/loguru"
        GIT_TAG        "master"
)

set(LOGURU_WITH_STREAMS TRUE)
FetchContent_MakeAvailable(LoguruGitRepo)
# ================================================================================

# Collect all the source and header files
file(GLOB ALL_SOURCE_FILES src/*.cpp *.hpp)

# Add the main target.
add_executable(${PROJECT_NAME} ${ALL_SOURCE_FILES} ${ALL_HEADER_FILES})

# Use C++17 standards
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)

# Include directories for main target
target_include_directories(
        ${PROJECT_NAME}
        PRIVATE ${PROJECT_SOURCE_DIR}/include/
        PRIVATE ${PROJECT_SOURCE_DIR}/vendors/sfml/include/
)

# Link required libraries (add sfml-audio and sfml-network if needed)
target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-window sfml-system loguru::loguru)
