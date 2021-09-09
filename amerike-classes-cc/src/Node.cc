#include "Node.hh"

Node::Node(Person* person, Node* node)
{
    this->person=person;
    this->nextNode=node;
}

Node::Node(Person* person)
{
    this->person=person;
}

Person* Node::GetPerson() const
{
    return person;
}

Node::~Node()
{
}
