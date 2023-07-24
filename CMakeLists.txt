# CMakeList.txt: проект CMake для my_first_cmake_project; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required(VERSION 3.22.0)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project (my_first_cmake_project)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (my_first_cmake_program my_first_cmake_project.cpp )



# TODO: Добавьте тесты и целевые объекты, если это необходимо.
