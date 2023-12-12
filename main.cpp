#include <SFML/Graphics.hpp>
#include "ship/ship.h"



int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 480), "SFML Application");
    sf::CircleShape shape;
    shape.setRadius(40.f);
    shape.setPosition(100.f, 100.f);
    shape.setFillColor(sf::Color::Cyan);
    sf::Time time;
    sf::Clock clock;
    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
                shape.move(0, -10);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
                shape.move(-10, 0);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
                shape.move(10, 0);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
                shape.move(0, 10);
            }
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

}