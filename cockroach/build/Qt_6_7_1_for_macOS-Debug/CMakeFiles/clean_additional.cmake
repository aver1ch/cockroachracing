# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/cockroach_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/cockroach_autogen.dir/ParseCache.txt"
  "cockroach_autogen"
  )
endif()
