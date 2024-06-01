//
//class Offense : public Plant {
//private:
//	bool peaLife;
//	int peaShotTime;
//	int numOfPeasShot;
//public:
//
//};
//class Defense : public Plant {
//private:
//
//public:
//
//};
//class Worker : public Plant {
//private:
//	int sunLoadTime;
//public:
//
//};


	//void updateAnimation(float dt) {
	//	// Update elapsed time
	//	elapsedTime += dt;
	//	// If enough time has passed, move to the next frame
	//	if (elapsedTime >= frameDuration) {
	//		currentFrame = (currentFrame + 1) % numFrames; // Update current frame
	//		elapsedTime = 0.0f; // Reset elapsed time
	//	}
	//	// Calculate the position of the current frame in the frame sheet
	//	int frameX = currentFrame * frameWidth;
	//	int frameY = 0; // Assuming all frames are in the same row
	//	// Set the texture rectangle of the sprite to display the current frame
	//	plantSprite.setTexture(frameSheet);
	//	plantSprite.setTextureRect(sf::IntRect(frameX, frameY, frameWidth, frameHeight));
	//}

	//void updateAnimation(float dt) {
	//	// Update elapsed time
	//	elapsedTime += dt;
	//	// If enough time has passed, move to the next frame
	//	if (elapsedTime >= frameDuration) {
	//		currentFrame = (currentFrame + 1) % numFrames; // Update current frame
	//		elapsedTime = 0.0f; // Reset elapsed time
	//	}
	//	// Calculate the position of the current frame in the frame sheet
	//	int frameX = currentFrame * frameWidth;
	//	int frameY = 0; // Assuming all frames are in the same row
	//	// Set the texture rectangle of the sprite to display the current frame
	//	plantSprite.setTextureRect(sf::IntRect(frameX, frameY, frameWidth, frameHeight));
	//}

		////sf::Clock frameClock; // Rename the clock object

		//Time elapsedTime = frameClock.restart();

		//// If enough time has passed, move to the next frame
		//if (elapsedTime.asSeconds() >= frameDuration) {
		//	//currentFrame = (currentFrame + 1) % numFrames; // Update current frame
		//	currentFrame++;
		//}

		//// Calculate the position of the current frame in the frame sheet
		//int frameX = currentFrame * frameWidth;
		//int frameY = 0; // Assuming all frames are in the same row

		//// Set the texture rectangle of the sprite to display the current frame
		//plantSprite.setTextureRect(sf::IntRect(frameX, frameY, frameWidth, frameHeight));
		////currentFrame++;

		//static double m = 0;
		//m += 0.02;
		//sf::CircleShape circle(10);
		//circle.setPosition(280 +(m*x), 130);// Set position
		//circle.setFillColor(sf::Color::Red);

		//sf::CircleShape circle2(10);
		//circle2.setPosition(280+x+(m*x), 130);// Set position
		//circle2.setFillColor(sf::Color::Red);

		//sf::CircleShape circle3(10);  
		//circle3.setPosition(280 + (m * x), 130+y);  // Set position
		//circle3.setFillColor(sf::Color::Green);

		//sf::CircleShape circle4(10);  
		//circle4.setPosition(280+x+(m * x), 130+y);  // Set position
		//circle4.setFillColor(sf::Color::Green);

		//sf::CircleShape circle5(10);
		//cout << (300 + (m * x) + 392 + (m * x) / 2)<<endl;
		//cout << 300 + (m * x) << endl;
		//cout << 392 + (m * x) << endl;
		//circle5.setPosition(((280 + (m * x)+ x + (m * x))/2), (130+280+y)/2);// Set position
		//circle5.setFillColor(sf::Color::Red);


		//// 300 , 153_______392 , 153
		//// //Mid point: 346 , 415
		//// 300 , 262-------392 , 262
		////

#pragma once
//#include "iostream"
//#include "Plant.h"
//#include "PeaShooter.h"
//#include <SFML/Graphics.hpp>
//#include <iostream>
//#include <ctime>
//using namespace std;
//using namespace sf;
//
////class PlantFactory {
////public:
////	Plant* plant;
////
////};
//
//#include "Plant.h"
//
//const int MAX_PLANTS = 9*5; // Maximum number of plants
//
//class PlantFactory {
//public:
//    Plant* plants[MAX_PLANTS]; // Array to store pointers to plant objects
//    int plantCount; // Number of plants currently stored in the array
//    PeaShooter ps;
//
//public:
//    // Constructor
//    PlantFactory() : plantCount(0)//, plants()
//    {
//        plants[0] = &ps;
//    }
//
//    // Destructor
//    ~PlantFactory() {
//        // Cleanup: Delete all created plant objects
//        for (int i = 0; i < plantCount; ++i) {
//            delete plants[i];
//        }
//    }
//
//    // Method to create a new plant and add it to the array
//    void createPlant(Plant* newPlant) {
//        // Check if the array is not full
//        //
//        //if (plantCount < MAX_PLANTS) {
//        //    // Add the new plant object to the array
//        //    cout << plantCount << endl;
//        //    plants[plantCount++] = newPlant;
//        //}
//        //else {
//        //    // Handle error: Array is full, cannot create more plants
//        //    std::cout << "Error: Maximum number of plants reached!" << std::endl;
//        //}
//        
//        
//    }
//    // Method to render all plants
//    void renderPlants(sf::RenderWindow& window) {
//        //cout << "ok" << endl;
//        //for (int i = 0; i < plantCount; ++i) {
//        //    plants[i]->displayAndUpdateAnimation(); // Call render method for each plant
//        //    window.draw(plants[i]->plantSprite);
//        //}
//        /*ps.displayAndUpdateAnimation();
//        window.draw(ps.plantSprite);*/
//        
//        plants[0]->displayAndUpdateAnimation();
//        window.draw(plants[0]->plantSprite);
//        
//    }
//};
//


//class PeaShooter : public Plant {
//private:
//	//Texture frameSheet; // Texture for the frame sheet image
//	int frameWidth; // Width of each frame in the frame sheet
//	int frameHeight; // Height of each frame in the frame sheet
//	int currentFrame; // Index of the current frame
//	int numFrames; // Total number of frames in the frame sheet
//	float frameDuration; // Duration of each frame
//	float elapsedTime; // Time elapsed since the last frame change
//	Clock frameClock;
//	IntRect plantSourceRect;
//public:
//	//PeaShooter()
//	//{
//	//	if (!frameSheet.loadFromFile("../SFML/Images/Peashooter.png")) {
//	//		// Error handling: unable to load image
//	//		std::cerr << "Failed to load frame sheet image!" << std::endl;
//	//		// You may add additional error handling or throw an exception here
//	//	}
//	//	//plantImage.loadFromFile("../SFML/Images/Peashooter.png");
//	//	//plantTexture.loadFromImage(plantImage);
//	//	//plantSprite.setTexture(plantTexture);
//	//	//plantSprite.setPosition(280, 130);
//	//	frameWidth = 92; // Assuming each frame is 32 pixels wide
//	//	frameHeight = 109; // Assuming each frame is 32 pixels high
//	//	currentFrame = 0; // Start from the first frame
//	//	numFrames = 8; // Assuming there are 4 frames in the frame sheet
//	//	frameDuration = 0.1f; // Duration of each frame (adjust as needed)
//	//	elapsedTime = 0.0f;
//	//	// Set initial position
//	//	plantSprite.setPosition(280, 130);
//	//}
//
//
//	PeaShooter() : plantSourceRect(0, 0, 92, 109)
//	{
//		frameWidth = 92; // Assuming each frame is 92 pixels wide
//		frameHeight = 109; // Assuming each frame is 109 pixels high
//		currentFrame = 0; // Start from the first frame
//		numFrames = 13; // Assuming there are 13 frames in the frame sheet
//		frameDuration = 1.0f; // Duration of each frame (adjust as needed)
//		elapsedTime = 0.0f;
//
//		//sf::Image plantImage;
//		if (!plantImage.loadFromFile("../SFML/Images/Spritesheets/Peashooter.png")) {
//			// Error handling: unable to load image
//			std::cerr << "Failed to load frame sheet image!" << std::endl;
//			// You may add additional error handling or throw an exception here
//		}
//		//loading texture from Image
//		plantTexture.loadFromImage(plantImage);
//		//sprite from texture
//		plantSprite.setTexture(plantTexture);
//		//setting texture rect 
//		//plantSourceRect(0,0, frameWidth, frameHeight);
//		plantSprite.setTextureRect(plantSourceRect);
//
//		// Set initial position
//		plantSprite.setPosition(280, 130);
//		frameClock.restart();
//	}
//
//	void updateAnimation() {
//
//		std::cout << "Frame duration: " << frameDuration << " seconds" << std::endl;
//		std::cout << "Elapsed time: " << frameClock.getElapsedTime().asSeconds() << " seconds" << std::endl;
//
//		if (frameClock.getElapsedTime().asSeconds() >= frameDuration)
//		{
//			//currentFrame++;
//			if (plantSourceRect.left == frameWidth * (numFrames - 1))
//			{
//				plantSourceRect.left = 0;
//			}
//			else
//			{
//				plantSourceRect.left += frameWidth;
//			}
//			plantSprite.setTextureRect(plantSourceRect);
//			frameClock.restart();
//		}
//	}
//
//};

//
////Drawing the map aka game grid
//void createMap(RenderWindow& window) {
//	//Drawing a map
//	//Image 
//	map_image;//объект изображения для карты
//	map_image.loadFromFile("../SFML/Images/grid.png");//load the file for the map
//	Texture map;
//	map.loadFromImage(map_image);
//	Sprite s_map;
//	s_map.setTexture(map);
//
//	int x = 92;
//	int y = 109;
//
//	s_map.setPosition(280, 130);  //160 was orignal and wrong
//	////280 and 130
//	sf::Color color(255, 255, 255, 128);  // White with 50% opacity
//	s_map.setColor(color);
//
//	window.draw(s_map);
//}


///////////sun clicking

//bool isClicked(sf::RenderWindow& window, coordinats mouse) const {
	//	std::cout << "is clicked entered" << std::endl;
	//	////Left buttom clicked
	//	//if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
	//	//	// Get the position of the mouse cursor relative to the window
	//	//	sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
	//
	//	//	// Convert mouse position to world coordinates (relative to the window)
	//	//	sf::Vector2f worldMousePosition = window.mapPixelToCoords(mousePosition);
	//
	//		// Check if the mouse position is within the bounding box of the sun sprite
	//		if (sunSprite.getGlobalBounds().contains(mouse.x, mouse.y)) {
	//			return true; // Sun is clicked
	//			std::cout << "returning true;" << std::endl;
	//		}
	//	//}
	//		else
	//			return false; // Sun is not clicked
	//}

	//bool isClicked(sf::RenderWindow& window, coordinats mouse) const {
	//	std::cout << "is clicked entered" << std::endl;
	//
	//	// Get the global bounding rectangle of the sprite
	//	sf::FloatRect spriteBounds = sunSprite.getGlobalBounds();
	//	
	//	// Check if the mouse coordinates are within the bounds of the sprite
	//	if (mouse.x <= spriteBounds.left && mouse.x >= spriteBounds.left - 60 &&
	//		mouse.y <= spriteBounds.top && mouse.y >= spriteBounds.top -70) 
	//	{
	//		std::cout << "returning true;" << std::endl;
	//		return false; // Sun is clicked
	//	}
	//
	//	return false; // Sun is not clicked
	//}

// sun check click sfactory

/*void checkClick(sf::RenderWindow& window)
	{
		sunNode* current = startSun;
		while (current != nullptr)
		{
			sunNode* temp = startSun;
			if (current->sun.isClicked(window))
			{
				delete temp;
			}
			current = current->nextSun;
		}
	}*/



	//virtual void displayAndUpdateAnimation() override {
	   //    static bool animationUpdated = false; // Static variable to persist between function calls
	   //
	   //    // Check if animation update has not been performed for this frame and if it's time to update
	   //    if (!animationUpdated && frameClock.getElapsedTime().asMicroseconds() >= frameDuration) {
	   //        // Update animation frame
	   //        currentFrame = (currentFrame + 1) % numFrames;
	   //        plantSourceRect.left = currentFrame * 92;
	   //        plantSprite.setTextureRect(plantSourceRect);
	   //        frameClock.restart();
	   //        animationUpdated = true; // Set the flag to true after updating animation
	   //    }
	   //
	   //    // Reset the flag at the end of the frame update
	   //    if (animationUpdated && frameClock.getElapsedTime().asMicroseconds() < frameDuration) {
	   //        animationUpdated = false;
	   //    }
	   //}
	   //
	   //    {
		   //
		   //		std::cout << "Frame duration: " << frameDuration << " seconds" << std::endl;
		   //		std::cout << "Elapsed time: " << frameClock.getElapsedTime().asSeconds() << " seconds" << std::endl;
		   //
		   //		if (frameClock.getElapsedTime().asSeconds() >= frameDuration)
		   //		{
		   //			//currentFrame++;
		   //			if (plantSourceRect.left == frameWidth * (numFrames - 1))
		   //			{
		   //				plantSourceRect.left = 0;
		   //			}
		   //			else
		   //			{
		   //				plantSourceRect.left += frameWidth;
		   //			}
		   //			plantSprite.setTextureRect(plantSourceRect);
		   //			frameClock.restart();
		   //		}
		   //	}