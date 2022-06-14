# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\To-do_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\To-do_autogen.dir\\ParseCache.txt"
  "To-do_autogen"
  )
endif()
