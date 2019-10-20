cmake_minimum_required(VERSION 3.4.1)

project (little_csd)

aux_source_directory(. DIR_SRCS)

add_executable(cc ${DIR_SRCS})