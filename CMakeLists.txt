cmake_minimum_required(VERSION 2.8)

# Name of the project (will be the name of the plugin)
project(addon)

set(SOURCE_FILES
        src/ioctl-list.cpp)

# Build a shared library named after the project from the files in `src/`
file(GLOB SOURCE_FILES "src/*.cc" "src/*.h")

include(CheckIncludeFiles)
check_include_files("asm-i386/socket.h" HAVE_SOCKET_H)
check_include_files("asm-i386/termios.h" HAVE_TERMIOS_H)
check_include_files("linux/ax25.h" HAVE_AX25_H)
check_include_files("linux/cdk.h" HAVE_CDK_H)
check_include_files("linux/cdrom.h" HAVE_CDROM_H)
check_include_files("linux/cm206.h" HAVE_CM206_H)
check_include_files("linux/cyclades.h" HAVE_CYCLADES_H)
check_include_files("linux/fd.h" HAVE_FD_H)
check_include_files("linux/fs.h" HAVE_FS_H)
check_include_files("linux/hdreg.h" HAVE_HDREG_H)
check_include_files("linux/if_eql.h" HAVE_IF_EQL_H)
check_include_files("linux/if_plip.h" HAVE_IF_PLIP_H)
check_include_files("linux/if_ppp.h" HAVE_IF_PPP_H)
check_include_files("linux/ipx.h" HAVE_IPX_H)
check_include_files("linux/kd.h" HAVE_KD_H)
check_include_files("linux/lp.h" HAVE_LP_H)
check_include_files("linux/mroute.h" HAVE_MROUTE_H)
check_include_files("linux/msdos_fs.h" HAVE_MSDOS_FS_H)
check_include_files("linux/mtio.h" HAVE_MTIO_H)
check_include_files("linux/netrom.h" HAVE_NETROM_H)
check_include_files("uapi/linux/wireless.h" HAVE_WIRELESS_H)
check_include_files("linux/sbpcd.h" HAVE_SBPCD_H)
check_include_files("linux/scc.h" HAVE_SCC_H)
check_include_files("linux/scsi.h" HAVE_SCSI_H)
check_include_files("linux/smb_fs.h" HAVE_SMB_FS_H)
check_include_files("uapi/linux/sockios.h" HAVE_SOCKIOS_H)
check_include_files("linux/soundcard.h" HAVE_SOUNDCARD_H)
check_include_files("linux/timerfd.h" HAVE_TIMERFD_H)
check_include_files("linux/umsdos_fs.h" HAVE_UMSDOS_FS_H)
check_include_files("linux/vt.h" HAVE_VT_H)

add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})

# Gives our library file a .node extension without any "lib" prefix
set_target_properties(${PROJECT_NAME} PROPERTIES PREFIX "" SUFFIX ".node")

# Essential include files to build a node addon,
# You should add this line in every CMake.js based project
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_JS_INC})

# Essential library files to link to a node addon
# You should add this line in every CMake.js based project
target_link_libraries(${PROJECT_NAME} ${CMAKE_JS_LIB})