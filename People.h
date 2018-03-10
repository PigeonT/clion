//
// Created by Hu, Tiange on 10.03.18.
//

#ifndef CLION_PEOPLE_H
#define CLION_PEOPLE_H


#include <string>

class People {
public:
    People() noexcept = default;

    People(int age, std::string name) noexcept;

    ~People();

    People(People const &people) noexcept;

    People(People &&people) noexcept;

    People operator=(People const &people) noexcept;

    People operator=(People &&people) noexcept;

    std::string GetName() const;

    int GetAge() const;

    int GetAge();

private:
    int *_age;
    std::string _name;
};


#endif //CLION_PEOPLE_H
