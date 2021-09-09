#include "Game.hh"
#include "Constants.hh"
#include "Rectangle.hh"

//Rectangle* rectangleA{new Rectangle(20, 20, 350, 370, sf::Color::Red)};
//Rectangle* rectangleB{new Rectangle(20, 20, 370, 370, sf::Color::Blue)};
//Rectangle* rectangleC{new Rectangle(20, 20, 350, 350, sf::Color::Black)};
//Rectangle* rectangleD{new Rectangle(20, 20, 370, 350, sf::Color::Green)};
Rectangle* rectangle1{new Rectangle(120, 20, 230, 510, sf::Color::Black)};
Rectangle* rectangle2{new Rectangle(20, 20, 210, 490, sf::Color::Black)};
Rectangle* rectangle3{new Rectangle(100, 20, 330, 490, sf::Color::Black)};
Rectangle* rectangle4{new Rectangle(60, 20, 410, 510, sf::Color::Black)};
Rectangle* rectangle5{new Rectangle(20, 20, 470, 490, sf::Color::Black)};
Rectangle* rectangle6{new Rectangle(20, 20, 490, 470, sf::Color::Black)};
Rectangle* rectangle7{new Rectangle(20, 60, 510, 410, sf::Color::Black)};
Rectangle* rectangle8{new Rectangle(60, 20, 450, 390, sf::Color::Black)};
Rectangle* rectangle9{new Rectangle(20, 60, 510, 330, sf::Color::Black)};
Rectangle* rectangle10{new Rectangle(20, 20, 490, 310, sf::Color::Black)};
Rectangle* rectangle11{new Rectangle(20, 40, 470, 270, sf::Color::Black)};
Rectangle* rectangle12{new Rectangle(20, 20, 450, 250, sf::Color::Black)};
Rectangle* rectangle13{new Rectangle(40, 20, 410, 230, sf::Color::Black)};
Rectangle* rectangle14{new Rectangle(100, 20, 310, 210, sf::Color::Black)};
Rectangle* rectangle15{new Rectangle(20, 20, 290, 230, sf::Color::Black)};
Rectangle* rectangle16{new Rectangle(20, 20, 270, 250, sf::Color::Black)};
Rectangle* rectangle17{new Rectangle(40, 20, 250, 210, sf::Color::Black)};
Rectangle* rectangle18{new Rectangle(20, 20, 230, 230, sf::Color::Black)};
Rectangle* rectangle19{new Rectangle(20, 120, 210, 250, sf::Color::Black)};
Rectangle* rectangle20{new Rectangle(20, 60, 230, 370, sf::Color::Black)};
Rectangle* rectangle21{new Rectangle(20, 40, 250, 430, sf::Color::Black)};
Rectangle* rectangle22{new Rectangle(20, 20, 230, 470, sf::Color::Black)};
Rectangle* rectangle23{new Rectangle(20, 20, 270, 450, sf::Color::Black)};
Rectangle* rectangle24{new Rectangle(40, 20, 290, 470, sf::Color::Black)};
Rectangle* rectangle25{new Rectangle(20, 20, 390, 470, sf::Color::Black)};
Rectangle* rectangle26{new Rectangle(20, 40, 410, 430, sf::Color::Black)};
Rectangle* rectangle27{new Rectangle(20, 20, 430, 410, sf::Color::Black)};
Rectangle* rectangle28{new Rectangle(20, 60, 330, 270, sf::Color::Black)};
Rectangle* rectangle29{new Rectangle(20, 60, 370, 270, sf::Color::Black)};
Rectangle* rectangle30{new Rectangle(20, 40, 350, 350, sf::Color::Black)};
Rectangle* rectangle31{new Rectangle(40, 20, 290, 330, sf::Color(205, 92, 92))};
Rectangle* rectangle32{new Rectangle(40, 20, 390, 330, sf::Color(205, 92, 92))};
Rectangle* rectangle33{new Rectangle(60, 60, 450, 410, sf::Color(163, 37, 74))};
Rectangle* rectangle34{new Rectangle(40, 80, 430, 430, sf::Color(163, 37, 74))};
Rectangle* rectangle35{new Rectangle(80, 20, 410, 470, sf::Color(163, 37, 74))};
Rectangle* rectangle36{new Rectangle(100, 20, 230, 490, sf::Color(163, 37, 74))};
Rectangle* rectangle37{new Rectangle(40, 20, 250, 470, sf::Color(163, 37, 74))};






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
    window->clear(sf::Color(254,122,180));
    Draw();
    window->display();
    }

    void Game::Draw()
    {
        //window->draw(*rectangleA->GetShape());
       // window->draw(*rectangleB->GetShape());       
       // window->draw(*rectangleC->GetShape());  
        //window->draw(*rectangleD->GetShape());  
        window->draw(*rectangle1->GetShape());  
        window->draw(*rectangle2->GetShape());  
        window->draw(*rectangle3->GetShape());
        window->draw(*rectangle4->GetShape());
        window->draw(*rectangle5->GetShape());
        window->draw(*rectangle6->GetShape());
        window->draw(*rectangle7->GetShape());
        window->draw(*rectangle8->GetShape());
        window->draw(*rectangle9->GetShape());
        window->draw(*rectangle10->GetShape());
        window->draw(*rectangle11->GetShape());
        window->draw(*rectangle12->GetShape());
        window->draw(*rectangle13->GetShape());
        window->draw(*rectangle14->GetShape());
        window->draw(*rectangle15->GetShape());
        window->draw(*rectangle16->GetShape());
        window->draw(*rectangle17->GetShape());
        window->draw(*rectangle18->GetShape());
        window->draw(*rectangle19->GetShape());
        window->draw(*rectangle20->GetShape());
        window->draw(*rectangle21->GetShape());
        window->draw(*rectangle22->GetShape());
        window->draw(*rectangle23->GetShape());
        window->draw(*rectangle24->GetShape());
        window->draw(*rectangle25->GetShape());
        window->draw(*rectangle26->GetShape());
        window->draw(*rectangle27->GetShape());
        window->draw(*rectangle28->GetShape());
        window->draw(*rectangle29->GetShape());
        window->draw(*rectangle30->GetShape());
        window->draw(*rectangle31->GetShape());
        window->draw(*rectangle32->GetShape());
        window->draw(*rectangle33->GetShape());
        window->draw(*rectangle34->GetShape());
        window->draw(*rectangle35->GetShape());
        window->draw(*rectangle36->GetShape());
        window->draw(*rectangle37->GetShape());
    }

    void Game::Input()  
    {

    }


    void Game::Destroy()
    {
        delete window;
        delete event;

    }