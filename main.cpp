#include <SFML/Graphics.hpp>
#include <iostream>
#include "classes/Ship.h"
using namespace std;

const int width = 200;
const int height = 200;
int ms_time = 1000/60;


const Ship * player = new Ship(10, 10, 10);

void drawShip(sf::RenderWindow &window, Ship* ship) {
    sf::RectangleShape rect;
    rect.setPosition(sf::Vector2f(ship->getX(), ship->getY()));
    rect.setFillColor(sf::Color::White);
    rect.setOutlineColor(sf::Color::Red);
    rect.setSize(sf::Vector2f(10, 10));
    window.draw(rect);
}

int main() {
    sf::RenderWindow window(sf::VideoMode(width, height), "afSpace-Game-Run", sf::Style::Titlebar | sf::Style::Close);
   
    while(window.isOpen()) {
        sf::Event e;
        while(window.pollEvent(e)) {
            if(e.type == sf::Event::Closed) {
                window.close();
                return 0;
            }
            if(e.type == sf::Event::MouseButtonPressed) {
               
            }
            if(e.type == sf::Event::MouseMoved) {
                int x = e.mouseButton.x;
                int y = e.mouseButton.y;
                printf("%i, %i\n", x, y);
            }
        }

        drawShip(window, (Ship *) player);

        window.display();
        window.clear();
		sf::sleep(sf::milliseconds(ms_time));
    }

    return 0;
}
