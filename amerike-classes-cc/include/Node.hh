#pragma once
#include "Person.hh"

class Node
{
 private:
    Person* person;


public:
    Node* nextNode= nullptr; 

    Node(Person* person, Node* node );
    Node(Person* person);
    Person* GetPerson() const;
    ~Node();
};

