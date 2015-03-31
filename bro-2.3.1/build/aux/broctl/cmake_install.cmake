# Install script for directory: /home/benjamin/Bro/bro-2.3.1/aux/broctl

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local/bro")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM RENAME "broctl" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/broctl.in.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts" TYPE PROGRAM RENAME "archive-log" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/archive-log.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts" TYPE PROGRAM RENAME "cflow-stats" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/cflow-stats.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts" TYPE PROGRAM RENAME "check-config" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/check-config.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts" TYPE PROGRAM RENAME "crash-diag" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/crash-diag.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts" TYPE PROGRAM RENAME "create-link-for-log" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/create-link-for-log.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts" TYPE PROGRAM RENAME "delete-log" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/delete-log.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts" TYPE PROGRAM RENAME "expire-logs" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/expire-logs.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts" TYPE PROGRAM RENAME "local-interfaces" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/local-interfaces.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts" TYPE PROGRAM RENAME "make-archive-name" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/make-archive-name.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts" TYPE PROGRAM RENAME "post-terminate" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/post-terminate.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts" TYPE PROGRAM RENAME "remove-link-for-log" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/remove-link-for-log.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts" TYPE PROGRAM RENAME "run-bro" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/run-bro.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts" TYPE PROGRAM RENAME "send-mail" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/send-mail.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts" TYPE PROGRAM RENAME "stats-to-csv" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/stats-to-csv.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts" TYPE PROGRAM RENAME "update" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/update.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts/helpers" TYPE PROGRAM RENAME "cat-file" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/helpers/cat-file.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts/helpers" TYPE PROGRAM RENAME "check-pid" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/helpers/check-pid.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts/helpers" TYPE PROGRAM RENAME "df" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/helpers/df.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts/helpers" TYPE PROGRAM RENAME "exists" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/helpers/exists.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts/helpers" TYPE PROGRAM RENAME "gdb-attach" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/helpers/gdb-attach.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts/helpers" TYPE PROGRAM RENAME "get-childs" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/helpers/get-childs.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts/helpers" TYPE PROGRAM RENAME "is-dir" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/helpers/is-dir.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts/helpers" TYPE PROGRAM RENAME "rmdir" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/helpers/rmdir.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts/helpers" TYPE PROGRAM RENAME "run-cmd" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/helpers/run-cmd.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts/helpers" TYPE PROGRAM RENAME "start" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/helpers/start.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts/helpers" TYPE PROGRAM RENAME "stop" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/helpers/stop.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts/helpers" TYPE PROGRAM RENAME "to-bytes.awk" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/helpers/to-bytes.awk.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts/helpers" TYPE PROGRAM RENAME "top" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/helpers/top.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts/postprocessors" TYPE PROGRAM RENAME "summarize-connections" FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/bin/postprocessors/summarize-connections.dehashbanged")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/broctl" TYPE DIRECTORY FILES "/home/benjamin/Bro/bro-2.3.1/aux/broctl/BroControl" REGEX "/options\\.py$" EXCLUDE REGEX "/plugins[^/]*$" EXCLUDE)
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/broctl/BroControl" TYPE FILE FILES "/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/BroControl/options.py")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/broctl" TYPE DIRECTORY FILES "/home/benjamin/Bro/bro-2.3.1/aux/broctl/BroControl/plugins")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/broctl/scripts" TYPE DIRECTORY FILES "/home/benjamin/Bro/bro-2.3.1/aux/broctl/bin/" FILES_MATCHING REGEX "/[^/]*$" PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE REGEX "/broctl\\.in$" EXCLUDE)
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/bro/share/bro/")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/bro/share/bro" TYPE DIRECTORY FILES "/home/benjamin/Bro/bro-2.3.1/aux/broctl/scripts/" FILES_MATCHING REGEX "/[^/]*\\.bro$")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/spool" TYPE DIRECTORY FILES "")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/spool/tmp" TYPE DIRECTORY FILES "")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/logs" TYPE DIRECTORY FILES "")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  
            if ("$ENV{DESTDIR}" STREQUAL "")
                execute_process(COMMAND "/usr/bin/cmake" -E create_symlink
                                /usr/local/bro/spool/broctl-config.sh
                                /usr/local/bro/share/broctl/scripts/broctl-config.sh)
            else ()
                execute_process(COMMAND "/usr/bin/cmake" -E create_symlink
                                /usr/local/bro/spool/broctl-config.sh
                                $ENV{DESTDIR}//usr/local/bro/share/broctl/scripts/broctl-config.sh)
            endif ()
        
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  
        set(_destfile "/usr/local/bro/etc/broctl.cfg")
        if (NOT "$ENV{DESTDIR}" STREQUAL "")
            # prepend install root prefix with install-time DESTDIR
            set(_destfile "$ENV{DESTDIR}//usr/local/bro/etc/broctl.cfg")
        endif ()
        if (EXISTS ${_destfile})
            message(STATUS "Skipping: ${_destfile} (already exists)")
            execute_process(COMMAND "/usr/bin/cmake" -E compare_files
                /home/benjamin/Bro/bro-2.3.1/build/aux/broctl/etc/broctl.cfg ${_destfile} RESULT_VARIABLE _diff)
            if (NOT "${_diff}" STREQUAL "0")
                message(STATUS "Installing: ${_destfile}.example")
                configure_file(/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/etc/broctl.cfg ${_destfile}.example COPYONLY)
            endif ()
        else ()
            message(STATUS "Installing: ${_destfile}")
            # install() is not scriptable within install(), and
            # configure_file() is the next best thing
            configure_file(/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/etc/broctl.cfg ${_destfile} COPYONLY)
            # TODO: create additional install_manifest files?
        endif ()
    
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  
        set(_destfile "/usr/local/bro/etc/networks.cfg")
        if (NOT "$ENV{DESTDIR}" STREQUAL "")
            # prepend install root prefix with install-time DESTDIR
            set(_destfile "$ENV{DESTDIR}//usr/local/bro/etc/networks.cfg")
        endif ()
        if (EXISTS ${_destfile})
            message(STATUS "Skipping: ${_destfile} (already exists)")
            execute_process(COMMAND "/usr/bin/cmake" -E compare_files
                /home/benjamin/Bro/bro-2.3.1/aux/broctl/etc/networks.cfg ${_destfile} RESULT_VARIABLE _diff)
            if (NOT "${_diff}" STREQUAL "0")
                message(STATUS "Installing: ${_destfile}.example")
                configure_file(/home/benjamin/Bro/bro-2.3.1/aux/broctl/etc/networks.cfg ${_destfile}.example COPYONLY)
            endif ()
        else ()
            message(STATUS "Installing: ${_destfile}")
            # install() is not scriptable within install(), and
            # configure_file() is the next best thing
            configure_file(/home/benjamin/Bro/bro-2.3.1/aux/broctl/etc/networks.cfg ${_destfile} COPYONLY)
            # TODO: create additional install_manifest files?
        endif ()
    
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  
        set(_destfile "/usr/local/bro/etc/node.cfg")
        if (NOT "$ENV{DESTDIR}" STREQUAL "")
            # prepend install root prefix with install-time DESTDIR
            set(_destfile "$ENV{DESTDIR}//usr/local/bro/etc/node.cfg")
        endif ()
        if (EXISTS ${_destfile})
            message(STATUS "Skipping: ${_destfile} (already exists)")
            execute_process(COMMAND "/usr/bin/cmake" -E compare_files
                /home/benjamin/Bro/bro-2.3.1/aux/broctl/etc/node.cfg ${_destfile} RESULT_VARIABLE _diff)
            if (NOT "${_diff}" STREQUAL "0")
                message(STATUS "Installing: ${_destfile}.example")
                configure_file(/home/benjamin/Bro/bro-2.3.1/aux/broctl/etc/node.cfg ${_destfile}.example COPYONLY)
            endif ()
        else ()
            message(STATUS "Installing: ${_destfile}")
            # install() is not scriptable within install(), and
            # configure_file() is the next best thing
            configure_file(/home/benjamin/Bro/bro-2.3.1/aux/broctl/etc/node.cfg ${_destfile} COPYONLY)
            # TODO: create additional install_manifest files?
        endif ()
    
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/aux/pysubnettree/cmake_install.cmake")
  INCLUDE("/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/aux/capstats/cmake_install.cmake")
  INCLUDE("/home/benjamin/Bro/bro-2.3.1/build/aux/broctl/aux/trace-summary/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

