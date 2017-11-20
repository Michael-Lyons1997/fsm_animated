//@author: Michael Lyons
//Time taken: 6 hours
#include <iostream>
#include <SFML/Graphics.hpp>
#include <AnimatedSprite.h>
#include <Player.h>
#include <Input.h>
#include <Debug.h>

using namespace std;

int main()
{
	// Create the main window
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

	// Load a sprite to display
	sf::Texture texture;
	if (!texture.loadFromFile("assets\\grid.png"))
	{
		DEBUG_MSG("Failed to load file");
		return EXIT_FAILURE;
	}

	// Setup Players Default Animated Sprite
	AnimatedSprite animated_sprite(texture);
	animated_sprite.addFrame(sf::IntRect(3, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(88, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(173, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(258, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(343, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(428, 3, 84, 84));



	// Setup the Player
	Player player(animated_sprite);
	Input input;
	
	// Start the game loop
	while (window.isOpen())
	{
		// Process events
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				// Close window : exit
				window.close();
				break;
				//this event is used because character keys act differently to other keys, like arrow keys
			case sf::Event::TextEntered:
				if (event.text.unicode == 99) //decimal for lowercase c
				{
					input.setCurrent(Input::Action::CLIMB);
				}
				else if (event.text.unicode == 100) //decimal for lowercase d
				{
					input.setCurrent(Input::Action::DIG);
				}
				else if (event.text.unicode == 104) //decimal for lowercase h
				{
					input.setCurrent(Input::Action::HAMMER);
				}
				else if (event.text.unicode == 106) //decimal for lowercase j
				{
					input.setCurrent(Input::Action::JUMP);
				}
				else if (event.text.unicode == 115) //decimal for lowercase s
				{
					input.setCurrent(Input::Action::SWORD);
				}
				break;
			default:
				input.setCurrent(Input::Action::IDLE);
				break;
			}
		}

		// Handle input to Player
		player.handleInput(input);

		// Update the Player
		player.update();

		// Clear screen
		window.clear();

		// Draw the Players Current Animated Sprite
		window.draw(player.getAnimatedSprite());

		// Update the window
		window.display();
	}

	return EXIT_SUCCESS;
};