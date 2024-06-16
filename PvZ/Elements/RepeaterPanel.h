#pragma once
#include "iostream"
#include "../coordinates.h"
#include "ShopPanel.h"
#include <SFML/Graphics.hpp>
#include <iostream>

class RepeaterPanel :public shopPanel {
private:

public:
	RepeaterPanel()
	{
		//loading image
		if (!shopPanelImage.loadFromFile("../SFML/Images/Shop/card_repeaterpea.png")) {
			// Error handling: unable to load image
			std::cerr << "Failed to load frame sheet image!" << std::endl;
			// You may add additional error handling or throw an exception here
		}
		shopPanelTexture.loadFromImage(shopPanelImage);
		shopPanelSprite.setTexture(shopPanelTexture);
		shopPanelSprite.setTextureRect(shopPanelSourceRect);
		shopPanelSprite.setPosition(placeHere, 5);
		//placeHere += 55;
	}
};