cmake_minimum_required(VERSION 4.3)

set(BASE_COMPILER_DIR "${CMAKE_CURRENT_SOURCE_DIR}/LLVM")

#if(CMAKE_HOST_SYSTEM_NAME MATCHES "Windows")
#    set(OS_FOLDER "Windows")
#    set(EXE_SUFFIX ".exe")
#elseif(CMAKE_HOST_SYSTEM_NAME MATCHES "Linux")
#    set(OS_FOLDER "Linux")
#    set(EXE_SUFFIX "")
#elseif(CMAKE_HOST_SYSTEM_NAME MATCHES "Darwin")
#    set(OS_FOLDER "Mac")
#    set(EXE_SUFFIX "")
#else()
#    message(FATAL_ERROR "你的操作系统 ${CMAKE_HOST_SYSTEM_NAME} 暂未预置编译器包")
#endif()
#
#if(CMAKE_HOST_SYSTEM_PROCESSOR MATCHES "(x86_64|AMD64|i386|i686)")
#    set(ARCH_FOLDER "x86")
#elseif(CMAKE_HOST_SYSTEM_PROCESSOR MATCHES "(arm64|aarch64)")
#    set(ARCH_FOLDER "ARM")
#elseif(CMAKE_HOST_SYSTEM_PROCESSOR MATCHES "(riscv64)")
#    set(ARCH_FOLDER "RISC-V")
#else()
#    # 如果本地架构不在列表中，可以尝试直接使用原始变量名（需确保文件夹存在）
#    set(ARCH_FOLDER "${CMAKE_HOST_SYSTEM_PROCESSOR}")
#    message(WARNING "未知架构，尝试使用文件夹: ${ARCH_FOLDER}")
#endif()
#
#set(CLANG_BIN_DIR "${BASE_COMPILER_DIR}/${OS_FOLDER}/${ARCH_FOLDER}/Clang/bin")
#set(CMAKE_C_COMPILER   "${CLANG_BIN_DIR}/clang${EXE_SUFFIX}")
#set(CMAKE_CXX_COMPILER "${CLANG_BIN_DIR}/clang++${EXE_SUFFIX}")
#
#if(NOT EXISTS "${CMAKE_C_COMPILER}")
#    message(FATAL_ERROR
#            "找不到 C 编译器: ${CMAKE_C_COMPILER}\n"
#            "请确保已通过 Git LFS 拉取对应平台的 Clang 二进制文件。"
#    )
#endif()
#if(NOT EXISTS "${CMAKE_CXX_COMPILER}")
#    message(FATAL_ERROR
#            "找不到 C++ 编译器: ${CMAKE_CXX_COMPILER}\n"
#            "请确保已通过 Git LFS 拉取对应平台的 Clang 二进制文件。"
#    )
#endif()
#
#message(STATUS "正在使用编译器: ${CMAKE_C_COMPILER}")

project(Cell)

#set(CMAKE_LINKER "${CLANG_BIN_DIR}/lld${EXE_SUFFIX}")
#set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fuse-ld=lld")

set(CMAKE_CXX_STANDARD 26)

add_subdirectory(FrontEnd)
add_subdirectory(BackEnd)
add_subdirectory(CellInstaller)