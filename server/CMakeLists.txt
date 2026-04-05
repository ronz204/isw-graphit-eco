cmake_minimum_required(VERSION 4.2)
project(happy-gr4 VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Crow CONFIG REQUIRED)
find_package(nlohmann_json CONFIG REQUIRED)

find_package(SQLite3 REQUIRED)
find_package(SqliteOrm CONFIG REQUIRED)

file(GLOB_RECURSE SOURCES "source/*.cpp")
add_executable(happy-gr4 ${SOURCES})

target_link_libraries(happy-gr4
  PRIVATE
  Crow::Crow
  SQLite::SQLite3
  sqlite_orm::sqlite_orm
  nlohmann_json::nlohmann_json
)

if(WIN32)
  target_link_libraries(happy-gr4 PRIVATE ws2_32 mswsock)
  target_compile_options(happy-gr4 PRIVATE -Wa,-mbig-obj)
elseif(UNIX)
  target_link_libraries(happy-gr4 PRIVATE pthread)
endif()
