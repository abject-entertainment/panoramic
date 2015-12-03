cmake_minimum_required(VERSION 3.3.0)

project(panoramic)

include_directories(SYSTEM ../dependencies/SDL2-2.0.3/include)

add_library(core_obj OBJECT
	core/World.cpp
	)

add_library(panoramic $<TARGET_OBJECTS:core_obj>)
target_link_libraries(panoramic ../dependencies/SDL2-2.0.3/lib/x64/SDL2.lib)