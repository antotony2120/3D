#include"SFML/Graphics.hpp"
#include"cube.h"
#include <iostream>

using namespace std;

const int SCREEN_SIZE_X = 480;
const int SCREEN_SIZE_Y = 320;

int main()
{
    sf::RenderWindow wind(sf::VideoMode(SCREEN_SIZE_X, SCREEN_SIZE_Y), "Lol");
    wind.setPosition(sf::Vector2i(0, 0));
    sf::RectangleShape rect(sf::Vector2f(10, 10));


    // fps initialization

    clock_t fps;
    double fps_double;
    string fps_string = "";
    sf::Font arial;
    arial.loadFromFile("C:\\My Folder\\Code\\C++\\Cube\\Cube\\12228.ttf"); //скачать и добавить нужный формат шрифтов
    sf::Text FPS(fps_string, arial);
    FPS.setPosition(sf::Vector2f(SCREEN_SIZE_X - 10, SCREEN_SIZE_Y - 10));
    FPS.setCharacterSize(20);
    sf::Color col(255,255,255);
    FPS.setColor(col);


    int x = 235, y = 155;
    rect.setPosition(sf::Vector2f(x, y));
    Vector camerapos(0, 0, 0);
    Vector view(1, 0, 0);
    while (wind.isOpen()){
        fps = clock();
        sf::Event event;
        while (wind.pollEvent(event))
        {
            if (event.type == sf::Event::KeyPressed){
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                    wind.close();
            }
            if (event.type == sf::Event::Closed)
                wind.close();
        }


        // object move

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
            rect.setPosition(sf::Vector2f(--x, y));
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)){
            rect.setPosition(sf::Vector2f(x, --y));
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)){
            rect.setPosition(sf::Vector2f(x, ++y));
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
            rect.setPosition(sf::Vector2f(++x, y));
        }
        sf::Mouse::setPosition(sf::Vector2i(x,y), wind);


        // calculating of fps

        fps = clock() - fps;
        fps_double = 1000.0/(fps>0?fps:1);
        fps_string = std::to_string(fps_double);
        FPS.setString(fps_string);


        wind.clear();
        wind.draw(rect);
        wind.draw(FPS);
        wind.display();
    }
    return 0;
}
