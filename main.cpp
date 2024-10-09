// CMakeProject3.cpp: 定义应用程序的入口点。
//

#include "CMakeProject3.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>// CMakeProject3.cpp: 定义应用程序的入口点。
//

#include "CMakeProject3.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>


using namespace std;

int main() {
    // 创建窗口
    sf::RenderWindow window(sf::VideoMode(800, 600), "Simple Game");

    // 创建一个方块（代表玩家）
    sf::RectangleShape player(sf::Vector2f(50.f, 50.f)); // 50x50的方块
    player.setFillColor(sf::Color::Green); // 设置颜色为绿色
    player.setPosition(375.f, 275.f); // 初始化位置

    // 主循环
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // 移动方块
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            player.move(0.f, -5.f); // 向上移动
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            player.move(0.f, 5.f); // 向下移动
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            player.move(-5.f, 0.f); // 向左移动
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            player.move(5.f, 0.f); // 向右移动

        // 清屏
        window.clear(sf::Color::Black);

        // 绘制方块
        window.draw(player);

        // 显示窗口内容
        window.display();
    }

    return 0;
}
