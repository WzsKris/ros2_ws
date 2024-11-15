# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_tripod7_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED tripod7_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(tripod7_FOUND FALSE)
  elseif(NOT tripod7_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(tripod7_FOUND FALSE)
  endif()
  return()
endif()
set(_tripod7_CONFIG_INCLUDED TRUE)

# output package information
if(NOT tripod7_FIND_QUIETLY)
  message(STATUS "Found tripod7: 0.0.1 (${tripod7_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'tripod7' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${tripod7_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(tripod7_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${tripod7_DIR}/${_extra}")
endforeach()
