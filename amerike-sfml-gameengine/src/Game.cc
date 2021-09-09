#include "Game.hh"
#include "Constants.hh"
#include "Rectangle.hh"

Rectangle* rectangle{new Rectangle(100, 100, 200, 100, sf::Color::Red)};

Game::Game()
{
   window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Game1");
   event=new sf::Event();
}

Game::~Game()
{
}

    void Game::Start()
    {

    }


    void Game:: Initialize()
    {
        Start();
        MainLoop();
    }
    void Game::Update()
    {

    }

    void Game::MainLoop()
    {
        while (window->isOpen())
        {
            while (window->pollEvent(*event))
            {
                if(event->type==sf::Event::Closed)
                {
                 window->close();
                }
            }
            Input();
            Update();
            Render();
        }
     Destroy();
    }

    void Game::Render()
    {
    window->clear(sf::Color::Black);
    Draw();
    window->display();
    }

    void Game::Draw()
    {
        window->draw(*rectangle->GetShape());
    }

    void Game::Input()  
    {

    }

    void Game::Destroy()
    {
        delete window;
        delete event;

    }