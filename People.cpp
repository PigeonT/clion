//
// Created by Hu, Tiange on 10.03.18.
//

#include <iostream>
#include "People.h"

People::People( int age, std::string name ) noexcept :
    _age(new int{age}), _name(name)
{

}

People::~People()
{
    delete _age;
    _age = nullptr;
}

People::People(People&& people) noexcept
{
    *this = std::move(people);
}

People::People(People const& people) noexcept
{
    if (this == &people) return;
    delete _age;
    _age = new int{*people._age};
    _name = people._name;
}

People People::operator=(People &&people) noexcept
{
    _age = people._age;
    _name = people._name;
    people._age = nullptr;
    return *this;
}

People People::operator=(People const& people) noexcept
{
    if (this == &people) return *this;
    delete _age;
    _age = new int{*people._age};
    _name = people._name;
    return *this;
}

std::string People::GetName() const
{
    return this->_name;
}

int People::GetAge() const
{
    std::cout << "const called" << std::endl;
    return *((*this)._age);
}

int People::GetAge()
{
    std::cout << "non const called" << std::endl;
    return *((*this)._age);
}
