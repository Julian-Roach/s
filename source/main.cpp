#include <SFML/Graphics.hpp>

// TAKE CARE OF THE ADDITIONAL DEPENDENCIES!
// These are from the SFML website, improper includes might cause linker errors. I've been searching
// for a long time on how to resolve the issue of the project setup working perfectly fine in my other
// project while being identical to the setup of this project. Indeed, "additional dependencies" for x86 platform in debug mode were different.

/*      sfml-graphics-s.lib

    sfml-window-s.lib
    sfml-system-s.lib
    opengl32.lib
    freetype.lib

sfml-window-s.lib

    sfml-system-s.lib
    opengl32.lib
    winmm.lib
    gdi32.lib       */

int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...
        // window.draw(...);

        // end the current frame
        window.display();
    }

    return 0;
}

