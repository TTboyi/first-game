// CMakeProject3.cpp: ����Ӧ�ó������ڵ㡣
//

#include "CMakeProject3.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>// CMakeProject3.cpp: ����Ӧ�ó������ڵ㡣
//

#include "CMakeProject3.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>


using namespace std;

int main() {
    // ��������
    sf::RenderWindow window(sf::VideoMode(800, 600), "Simple Game");

    // ����һ�����飨������ң�
    sf::RectangleShape player(sf::Vector2f(50.f, 50.f)); // 50x50�ķ���
    player.setFillColor(sf::Color::Green); // ������ɫΪ��ɫ
    player.setPosition(375.f, 275.f); // ��ʼ��λ��

    // ��ѭ��
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // �ƶ�����
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            player.move(0.f, -5.f); // �����ƶ�
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            player.move(0.f, 5.f); // �����ƶ�
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            player.move(-5.f, 0.f); // �����ƶ�
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            player.move(5.f, 0.f); // �����ƶ�

        // ����
        window.clear(sf::Color::Black);

        // ���Ʒ���
        window.draw(player);

        // ��ʾ��������
        window.display();
    }

    return 0;
}
