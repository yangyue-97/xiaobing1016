#pragma once
#include <string>

class Gun
{
public:
    Gun(std::string type);

    void addBullet(int bullet_num);
    bool shoot();

private:
    int _bullet_count;
    std::string _type;
};