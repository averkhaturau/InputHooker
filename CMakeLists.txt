project(InputHooker)

set(DLL_NAME ${PROJECT_NAME})

set(SRC
	input-hooker.h
	input-hooker.cpp
	input-event.cpp
	input-event.h
	event-logger.h
	keycodes.h
	keycodes-anonimized.h
)

add_definitions(-DDLL_NAME=${DLL_NAME})

add_library(${DLL_NAME} SHARED input-hooker-dll.cpp input-hooker-dll.h win.rc)
set_property(TARGET ${PROJECT_NAME} PROPERTY FOLDER "libs")

add_library(${DLL_NAME}_ STATIC ${SRC})
set_property(TARGET ${PROJECT_NAME}_ PROPERTY FOLDER "libs")

add_executable(${PROJECT_NAME}_test hooker-test.cpp)
add_dependencies(${PROJECT_NAME}_test ${PROJECT_NAME}_)
target_link_libraries(${PROJECT_NAME}_test ${PROJECT_NAME}_)
set_property(TARGET ${PROJECT_NAME}_test PROPERTY FOLDER "Tests")

set(VERS_CONF ${CMAKE_CURRENT_SOURCE_DIR}/../InEfAn-tray/Version.inl.conf)
set(VERS_FILE ${CMAKE_CURRENT_BINARY_DIR}/Version.inl)
VersionConf(${PROJECT_NAME} ${VERS_CONF} ${VERS_FILE})

set(INSTALLER_COMPONENT ${DLL_NAME})
list(APPEND INSTALLER_COMPONENTS ${INSTALLER_COMPONENT})
set(INSTALLER_COMPONENTS ${INSTALLER_COMPONENTS} PARENT_SCOPE)

install(TARGETS ${DLL_NAME} RUNTIME DESTINATION . COMPONENT ${INSTALLER_COMPONENT})
