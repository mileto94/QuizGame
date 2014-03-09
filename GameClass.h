#ifndef _GAME_CLASS_H_GUARD_
#define _GAME_CLASS_H_GUARD_

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>

class Game
{
public:
	Game();
	void Run();
private:
	void ProcessEvents();
	void Update();
	void Render();
	void HandleInput(sf::Mouse::Button button, bool isPressed);

	sf::RenderWindow mWindow;
	sf::Sprite mSprite;
};

#endif