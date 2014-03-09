#include "GameClass.h"

Game::Game()
	:mWindow(sf::VideoMode(800, 600), "Quiz Game"),
	mSprite()
{
}

void Game::Run()
{
	while (mWindow.isOpen())
	{
		ProcessEvents();
		Update();
		Render();
	}
}

void Game::ProcessEvents()
{
	sf::Event event;
	while (mWindow.pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::MouseButtonPressed:
			//stuff
			break;
		case sf::Event::LostFocus:
			//game.pouse();
			break;
		case sf::Event::GainedFocus:
			//game.resume()
			break;
		case sf::Event::Closed:
			mWindow.close();
			break;
		}

	}
}

void Game::Update()
{

}

void Game::Render()
{
	sf::Texture mTexture;
	mTexture.loadFromFile("quiz.png");

	mSprite.setTexture(mTexture);
	mSprite.setPosition(100,100);

	mWindow.clear();
	mWindow.draw(mSprite);
	mWindow.display();
}


void HandleInput(sf::Mouse::Button button, bool isPressed)
{

}