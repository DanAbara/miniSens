project(miniSens LANGUAGES CXX)

qt_add_executable(helloworld
    main.cpp
    mainwindow.cpp
    ${CMAKE_SOURCE_DIR}/include/mainwindow.hpp
)

target_link_libraries(helloworld PRIVATE 
    Qt6::Core
    Qt6::Widgets
)
