
#pragma once
#include "iostream"
#include "../coordinates.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <ctime>
#include <cstdlib>


class Pea {
private:
	sf::Sprite peaSprite;
	sf::Texture peaTexture;
	sf::IntRect peaTextureRect;
	float posX, posY; // X and Y coordinates for position
	float velX, velY; // X and Y velocities

public:
	Pea(float startX = 0, float startY = 0, float velocityX = 0, float velocityY = 0)
		: posX(startX), posY(startY), velX(velocityX), velY(velocityY) {
		if (!peaTexture.loadFromFile("../SFML/Images/pea.png")) {
			std::cerr << "Failed to load pea texture!" << std::endl;
		}
		peaTextureRect = sf::IntRect(10, 10, 20, 20);
		peaSprite.setTexture(peaTexture);
		peaSprite.setTextureRect(peaTextureRect);
		peaSprite.setPosition(posX, posY);
	}

	void update(float deltaTime) {
		posX += velX * deltaTime;
		posY += velY * deltaTime;
		peaSprite.setPosition(posX, posY);
	}

	void render(sf::RenderWindow& window) {
		window.draw(peaSprite);
	}

	float getX() const {
		return posX;
	}

	float getY() const {
		return posY;
	}

	void setPosition(float x, float y) {
		posX = x;
		posY = y;
		peaSprite.setPosition(posX, posY);
	}
};
