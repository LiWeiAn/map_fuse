# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_laser_geometry_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED laser_geometry_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(laser_geometry_FOUND FALSE)
  elseif(NOT laser_geometry_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(laser_geometry_FOUND FALSE)
  endif()
  return()
endif()
set(_laser_geometry_CONFIG_INCLUDED TRUE)

# output package information
if(NOT laser_geometry_FIND_QUIETLY)
  message(STATUS "Found laser_geometry: 0.0.0 (${laser_geometry_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'laser_geometry' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${laser_geometry_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(laser_geometry_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${laser_geometry_DIR}/${_extra}")
endforeach()
