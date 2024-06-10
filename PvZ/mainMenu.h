#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <ctime>
#include <string>

class Button {
public:
    sf::Sprite sprite;
    sf::Texture* normalTexture;
    sf::Texture* hoverTexture;
    sf::IntRect bounds; // Rectangle to check for clicks

    // Constructor to initialize the button with textures
    Button(int x, int y, sf::Texture* normalTexture, sf::Texture* hoverTexture) {
        this->normalTexture = normalTexture;
        this->hoverTexture = hoverTexture;
        sprite.setTexture(*normalTexture);
        sprite.setPosition(static_cast<float>(x), static_cast<float>(y));

        bounds = sf::IntRect(x, y, normalTexture->getSize().x, normalTexture->getSize().y);
    }

    //lighten when hover
    void updateHoverState(int mouseX, int mouseY)
    {
        if (bounds.contains(mouseX, mouseY)) {
            sprite.setTexture(*hoverTexture);
        }
        else {
            sprite.setTexture(*normalTexture);
        }
    }
    // check click
    bool isClicked(int mouseX, int mouseY) {
        return bounds.contains(mouseX, mouseY);
    }

    // render button
    void draw(sf::RenderWindow& window) {
        window.draw(sprite);
    }
};


class MenuState {
public:
    static const int MainMenu = 0;
    static const int LevelSelection = 1;
    static const int HighScore = 2;
    static const int Instructions = 3;
    static const int GameOver = 4;
    static const int Restart = 5;
    //(levels, highest score, instructions, restart, game over. etc)
};

class MainMenu {
private:
    sf::Image backgroundImage;
    sf::Texture backgroundTexture, playTexture, playHoverTexture, hsTexture, hsHoverTexture,
        instrucTexture, instrucHoverTexture;
    sf::Sprite backgroundSprite, playSprite, hsSprite, instrucSprite;
    int nextState;

    Button* playButton;
    Button* highScoreButton;
    Button* instrucButton;

public:
    MainMenu(const std::string& backgroundPath) : nextState(-1)
    {
        backgroundImage.loadFromFile("../SFML/Images/Menu/back.jpeg");
        if (!backgroundImage.loadFromFile(backgroundPath)) {
            cout << "No main menu bg loaded" << endl;
        }
        backgroundTexture.loadFromImage(backgroundImage);
        backgroundSprite.setTexture(backgroundTexture);
        backgroundSprite.setPosition(0, 0);
        //play
        playTexture.loadFromFile("../SFML/Images/Menu/Adventure.png");
        playHoverTexture.loadFromFile("../SFML/Images/Menu/Adventure_Hover.png");
        //high score
        hsTexture.loadFromFile("../SFML/Images/Menu/HighScore.png");
        hsHoverTexture.loadFromFile("../SFML/Images/Menu/HighScore_Hover.png");
        //levels
        instrucTexture.loadFromFile("../SFML/Images/Menu/Instructions.png");
        instrucHoverTexture.loadFromFile("../SFML/Images/Menu/Instructions_Hover.png");

        playButton = new Button(100, 100, &playTexture, &playHoverTexture);
        highScoreButton = new Button(200, 200, &hsTexture, &hsHoverTexture);
        instrucButton = new Button(100, 300, &instrucTexture, &instrucHoverTexture);
    }
    void handleInputs(sf::Event& event, sf::RenderWindow& window)
    {
        if (event.type == sf::Event::MouseMoved) {
            int mouseX = event.mouseMove.x;
            int mouseY = event.mouseMove.y;
            playButton->updateHoverState(mouseX, mouseY);
            highScoreButton->updateHoverState(mouseX, mouseY);
            instrucButton->updateHoverState(mouseX, mouseY);
        }
    }
    void handleEvent(sf::RenderWindow& window, sf::Event& event)
    {
        if (event.type == sf::Event::MouseButtonPressed) {
            if (event.mouseButton.button == sf::Mouse::Left) {
                int mouseX = event.mouseButton.x;
                int mouseY = event.mouseButton.y;
                if (playButton->isClicked(mouseX, mouseY))
                {
                    nextState = MenuState::LevelSelection;
                    std::cout << "play button clicked!" << std::endl;
                    // Functionality for switching toplayA
                }
                if (highScoreButton->isClicked(mouseX, mouseY))
                {
                    nextState = MenuState::HighScore;
                    std::cout << "High Scores button clicked!" << std::endl;
                    // Functionality for switching to high scores
                }
                if (instrucButton->isClicked(mouseX, mouseY))
                {
                    nextState = MenuState::Instructions;
                    std::cout << "instructions button clicked!" << std::endl;
                    // Functionality for switching to levels
                }
            }
        }
    }
    int getNextState()
    {
        return nextState;
    }
    void resetNextState()
    {
        nextState = -1;
    }
    void render(sf::RenderWindow& window)
    {
        window.draw(backgroundSprite);
        playButton->draw(window);
        highScoreButton->draw(window);
        instrucButton->draw(window);
    }
    ~MainMenu() {
        delete playButton;
        delete highScoreButton;
        delete instrucButton;
    }
};