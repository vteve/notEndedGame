cmake_minimum_required(VERSION 3.23)
project(oop3)

set(CMAKE_CXX_STANDARD 23)

add_executable(oop3 main.cpp ship/ship.h ship/ship.cpp ship/cruiser.h weapon/weapon.h weapon/weapon.cpp ammunition/ammunition.h ship/shipWeapon.h ship/cruiser.cpp ship/carrier.h ship/carrier.cpp ship/aviaCarrier.h airplane/airplane.h airplane/airplane.cpp ship/aircraftCarrier.h ship/aircraftCarrier.cpp map/map.h map/map.cpp unit/Unit.cpp unit/Unit.h ship/shipWeapon.cpp ship/aviaCarrier.cpp hashTable/myHashMap.cpp hashTable/myHashMap.h hashTable/HashNode.h hashTable/KeyHash.h)

#add_executable(oop3 main.cpp)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/SFML/lib/cmake/SFML)

find_package(SFML COMPONENTS system window graphics audio network REQUIRED)
include_directories(C:/SFML/include)
target_link_libraries(oop3 sfml-system sfml-window sfml-graphics sfml-audio)