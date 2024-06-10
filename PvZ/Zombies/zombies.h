#pragma once


using namespace sf;
using namespace std;

struct position
{
    int x;
    int y;
    int xbottom;
    int ybottom;
    position(int x, int y) :x(x),y(y),xbottom(x),ybottom(y+ 144) {}



};

class Zombie {
public:
    int life;
    int speed;
    int damage;
    Texture texture;
    Sprite sprite;
    position positionZ;
    Clock animationClock;

    Zombie(int x, int y,int life, int speed, int damage): positionZ(x,y), life(life),speed(speed), damage(damage) {}
    virtual ~Zombie() {}
    virtual void animation()=0;


};


//
//#pragma once
//#include <SFML/Graphics.hpp>
//#include "../Grid.h"
//#include "zombies.h"
//#include "simpleZ.h"
//#include "bucketZ.h"
//class zombieFactory
//{
//public:
//    Zombie** zArray;
//    int zCount;
//    Clock clockSimpleZforMove;
//
//
//    zombieFactory()
//    {
//        zArray = new Zombie * [20];
//        zCount = 0;
//    }
//    virtual void generateZombie()
//    {
//
//        // zoo[zCount] = new simpleZ;
//        srand(time(0));
//        int pRow = rand() % 5;
//        int randomZombie = rand() % 2; // Assumes you have only two types of zombies
//
//        if (zCount != 19)
//            zCount++;
//
//        // Choose zombie type based on random number
//        if (randomZombie == 0) {
//            zArray[zCount - 1] = new simpleZ(1110, 130 + pRow * 109);
//        }
//        else {
//            zArray[zCount - 1] = new bucketZ(1110, 130 + pRow * 109);
//        }
//
//
//        zArray[zCount - 1]->positionZ.x = 1200;
//
//        zArray[zCount - 1]->positionZ.y = (130 + pRow * 109);
//
//
//        //gameGrid.oGrid[0][6].iGrid[0][1] = 1;
//        cout << zCount << endl;
//    }
//
//    void spawnZombie(RenderWindow& window)
//    {
//        sf::RectangleShape rectangle(sf::Vector2f(23, 23)); // Rectangle size
//
//        rectangle.setFillColor(sf::Color::Blue); // Set fill color
//
//        for (int i = 0; i < zCount; i++)
//        {
//            zArray[i]->animation();
//            zArray[i]->sprite.setPosition(zArray[i]->positionZ.x, zArray[i]->positionZ.y);
//            //rectangle.setPosition(188 + (92 * i), 130 + (109 * i)); 
//            window.draw(zArray[i]->sprite);
//            //window.draw(rectangle);
//            zArray[i]->sprite.setPosition(zArray[i]->positionZ.x, zArray[i]->positionZ.y);
//            window.draw(zArray[i]->sprite);
//
//        }
//
//    }
//    void updatePosition(position& positionZ, int speed)
//    {
//        if (positionZ.x >= 188 && positionZ.y >= 130)
//        {
//            if (speed == 1)
//                positionZ.x -= 2;
//            else if (speed == 2)
//                positionZ.x -= 2.5;
//
//        }
//
//    }
//    bool movementUpdate(RenderWindow& window, pGrid& pzGrid, Zombie**)
//    {
//        int xPos;
//        int yPos;
//        if (clockSimpleZforMove.getElapsedTime().asMilliseconds() < 50)
//            return false;
//
//        //   gameGrid.display();
//        clockSimpleZforMove.restart();
//        /* if (zArray != nullptr)
//             for (int i = 0; i < zCount; i++)
//             {
//                 updatePosition(zArray[i]->positionZ);
//                xPos= zArray[i]->positionZ.x;
//                yPos = zArray[i]->positionZ.y;
//
//             if (pzGrid.oGrid[(yPos - 130) / 109][(xPos - 188) / 92-1].plantId == 1)
//                             {
//                                 cout << "Zombie reached the plant" << endl;
//                                  zArray[i]->positionZ.x+=2;
//                                  zArray[i]->texture.loadFromFile("../SFML/Images/zombieAttack.png");
//                                  zArray[i]->sprite.setTexture(zArray[i]->texture);
//
//                                  break;
//                             }
//
//                             if (zArray[i]->positionZ.x <= 188)
//                             {
//                                 cout << "Zombie reached the house" << endl;
//                                  break;
//                             }
//             }*/
//        return true;
//
//    }
//
//};