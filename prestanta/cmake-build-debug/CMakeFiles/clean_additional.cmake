# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/prestanta_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/prestanta_autogen.dir/ParseCache.txt"
  "prestanta_autogen"
  )
endif()
