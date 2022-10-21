#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");
    sf::CircleShape cabezita(100.f);
    sf::CircleShape ojitoLeft(20.f);
    sf::CircleShape cuerpito(142.f);
    sf::RectangleShape pata({ 20,90 });
    sf::RectangleShape pie({ 80,10 });
    sf::CircleShape Triangule(30, 3);
    sf::RectangleShape sombrero({ 180,50 });
    sf::RectangleShape sombrero2({ 105,90 });
    sf::RectangleShape line({ 105,20 });
    sf::CircleShape boton1(15.f);
    sf::CircleShape boton2(15.f);
    cabezita.setFillColor(sf::Color::Yellow);
    ojitoLeft.setFillColor(sf::Color::Black);
    cuerpito.setFillColor(sf::Color::Blue);
    pata.setFillColor(sf::Color::Red);
    pie.setFillColor(sf::Color::Red);
    Triangule.setFillColor(sf::Color::Red);
    sombrero.setFillColor(sf::Color::Blue);
    sombrero2.setFillColor(sf::Color::Blue);
    boton1.setFillColor(sf::Color::White);
    boton2.setFillColor(sf::Color::White);
    ojitoLeft.setPosition(sf::Vector2f{ 170,200 });
    cabezita.setPosition(sf::Vector2f{ 120,120 });
    cuerpito.setPosition(sf::Vector2f{ 250,250 });
    boton1.setPosition(sf::Vector2f{ 260,360 });
    boton2.setPosition(sf::Vector2f{ 264,401 });
    pata.setPosition(sf::Vector2f{ 380,530 });
    pie.setPosition(sf::Vector2f{ 350,610 });
    Triangule.setPosition(sf::Vector2f{ 145,231 });
    Triangule.rotate(150.f);
    sombrero.setPosition(sf::Vector2f{ 126,115 });
    sombrero2.setPosition(sf::Vector2f{ 165,38 });
    line.setPosition(sf::Vector2f{ 165,93 });


    

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(cabezita);
        window.draw(ojitoLeft);
        window.draw(cuerpito);
        window.draw(pata);
        window.draw(pie);
        window.draw(Triangule);
        window.draw(sombrero);
        window.draw(sombrero2);
        window.draw(line);
        window.draw(boton1);
        window.draw(boton2);
        window.display();
    }

    return 0;
}