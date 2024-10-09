cmake_minimum_required(VERSION 3.10)
set(SFML_DIR "D://app//vcpkg-master//installed//x64-windows//share//sfml")

# 项目名称
project(SFMLTest)

# 如果你想使用静态 SFML 库，取消注释以下行
# set(SFML_STATIC_LIBRARIES TRUE)

# 查找 SFML 的图形和音频模块
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

# 添加可执行文件
add_executable(SFMLTest main.cpp)

# 链接 SFML 的图形和音频模块
target_link_libraries(SFMLTest sfml-graphics sfml-audio)

