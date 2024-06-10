//#pragma once
//#include "iostream"
//#include "Plant.h"
//#include "../coordinates.h"
//#include "../Elements/Pea.h"
//#include <SFML/Graphics.hpp>
//#include <iostream>
//#include <ctime>
//using namespace sf;
//using namespace std;
//
//struct PeaNode {
//    Pea pea;
//    PeaNode* next;
//
//    PeaNode(const Pea& pea) : pea(pea), next(nullptr) {}
//};
//
//class PeaShooter : public Plant {
//public:
//    PeaNode* head = nullptr;
//   
//public:
//    PeaShooter(int r, int c):Plant(c,r)
//    {
//        if (!plantImage.loadFromFile("../SFML/Images/Spritesheets/Peashooter.png")) {
//            // Error handling: unable to load image
//            std::cerr << "Failed to load frame sheet image!" << std::endl;
//            // You may add additional error handling or throw an exception here
//        }
//        plantTexture.loadFromImage(plantImage);
//        plantSprite.setTexture(plantTexture);
//        plantSprite.setTextureRect(plantSourceRect);
//        plantSprite.setPosition(coord.y, coord.x);
//        plantSprite.setOrigin(0, 0);
//
//        currentFrame = 0;
//        numFrames = 13;
//        frameDuration = 80.0f; // adjust as needed
//        frameClock.restart();
//        //shootClock.restart();
//        costPlant = 100;
//    }
//    
//    virtual void displayAndUpdateAnimation() override {
//        //std::cout << "Elapsed time: " << frameClock.getElapsedTime().asMicroseconds() << " seconds" << std::endl;
//        //std::cout << "Frame duration: " << frameDuration << " seconds" << std::endl;
//    
//        if(frameClock.getElapsedTime().asMilliseconds() >= frameDuration) //(frameClock.getElapsedTime().asMicroseconds() >= frameDuration) {
//        {
//            currentFrame = (currentFrame + 1) % numFrames;
//            plantSourceRect.left = currentFrame * 92;
//            plantSprite.setTextureRect(plantSourceRect);
//            frameClock.restart();
//        }
//    }
//    //void shootPea(Pea peaNew)
//    //{
//    //    this->pea = peaNew;
//    //    if (shootClock.getElapsedTime().asMilliseconds() >= 5.0f) 
//    //    {
//    //        shootClock.restart();
//    //        coordinats newPos = pea.getPosition();
//    //        newPos.x += 10;
//    //        //pea.renderPea();
//    //        
//    //        // Create a pea and shoot it towards the target
//    //        //Pea pea(/* Parameters for pea position, direction, etc. */);
//    //        // Send the pea to the game's logic for further handling
//    //    }
//    //}
//    ~PeaShooter() 
//    {
//        PeaNode* current = head;
//        while (current != nullptr) {
//            PeaNode* toDelete = current;
//            current = current->next;
//            delete toDelete;
//        }
//    }
//    void shootPea() {
//        Pea newPea(plantSprite.getPosition().x + 50, plantSprite.getPosition().y, 100, 0); // shoot right
//        PeaNode* newNode = new PeaNode(newPea);
//        newNode->next = head;
//        head = newNode;
//    }
//
//    void update(float deltaTime) {
//        PeaNode** current = &head;
//        while (*current != nullptr) {
//            (*current)->pea.update(deltaTime);
//            if ((*current)->pea.getX() > 800) { // Assuming right edge of window is at x = 800
//                PeaNode* toDelete = *current;
//                *current = (*current)->next;
//                delete toDelete;
//            }
//            else {
//                current = &(*current)->next;
//            }
//        }
//    }
//
//    void render(sf::RenderWindow& window) {
//        for (PeaNode* current = head; current != nullptr; current = current->next) {
//            current->pea.render(window);
//        }
//    }
//};

#pragma once
#include "iostream"
#include "Plant.h"
#include "../coordinates.h"
#include "../Elements/Pea.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <ctime>
using namespace sf;
using namespace std;

struct PeaNode {
    Pea pea;
    PeaNode* next;

    PeaNode(const Pea& pea) : pea(pea), next(nullptr) {}
};

class PeaShooter : public Plant {
public:
    PeaNode* head = nullptr;

public:
    PeaShooter(int r, int c) :Plant(c, r)
    {
        if (!plantImage.loadFromFile("../SFML/Images/Spritesheets/Peashooter.png")) {
            // Error handling: unable to load image
            std::cerr << "Failed to load frame sheet image!" << std::endl;
            // You may add additional error handling or throw an exception here
        }
        plantTexture.loadFromImage(plantImage);
        plantSprite.setTexture(plantTexture);
        plantSprite.setTextureRect(plantSourceRect);
        plantSprite.setPosition(coord.y, coord.x);
        plantSprite.setOrigin(0, 0);

        currentFrame = 0;
        numFrames = 13;
        frameDuration = 80.0f; // adjust as needed
        frameClock.restart();
        //shootClock.restart();
        costPlant = 100;
    }

    virtual void displayAndUpdateAnimation() override {
        //std::cout << "Elapsed time: " << frameClock.getElapsedTime().asMicroseconds() << " seconds" << std::endl;
        //std::cout << "Frame duration: " << frameDuration << " seconds" << std::endl;

        if (frameClock.getElapsedTime().asMilliseconds() >= frameDuration) //(frameClock.getElapsedTime().asMicroseconds() >= frameDuration) {
        {
            currentFrame = (currentFrame + 1) % numFrames;
            plantSourceRect.left = currentFrame * 92;
            plantSprite.setTextureRect(plantSourceRect);
            frameClock.restart();
        }
    }
    //void shootPea(Pea peaNew)
    //{
    //    this->pea = peaNew;
    //    if (shootClock.getElapsedTime().asMilliseconds() >= 5.0f) 
    //    {
    //        shootClock.restart();
    //        coordinats newPos = pea.getPosition();
    //        newPos.x += 10;
    //        //pea.renderPea();
    //        
    //        // Create a pea and shoot it towards the target
    //        //Pea pea(/* Parameters for pea position, direction, etc. */);
    //        // Send the pea to the game's logic for further handling
    //    }
    //}
    ~PeaShooter()
    {
        PeaNode* current = head;
        while (current != nullptr) {
            PeaNode* toDelete = current;
            current = current->next;
            delete toDelete;
        }
    }
    void shootPea() {
        Pea newPea(plantSprite.getPosition().x + 50, plantSprite.getPosition().y, 100, 0); // shoot right
        PeaNode* newNode = new PeaNode(newPea);
        newNode->next = head;
        head = newNode;
    }

    void update(float deltaTime) {
        PeaNode** current = &head;
        while (*current != nullptr) {
            (*current)->pea.update(deltaTime);
            if ((*current)->pea.getX() > 800) { // Assuming right edge of window is at x = 800
                PeaNode* toDelete = *current;
                *current = (*current)->next;
                delete toDelete;
            }
            else {
                current = &(*current)->next;
            }
        }
    }

    void render(sf::RenderWindow& window) {
        for (PeaNode* current = head; current != nullptr; current = current->next) {
            current->pea.render(window);
        }
    }
};