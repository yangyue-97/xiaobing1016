#include "gun.h"
#include <iostream>

using namespace std;

Gun::Gun(std::string type)
{
    _bullet_count = 0;
    _type = type;
}

void Gun::addBullet(int bullet_num)
{
    _bullet_count += bullet_num;
}

bool Gun::shoot()
{
    if (_bullet_count <= 0)
    {
        cout << "There is no bullet!" << endl;
        return false;
    }

    _bullet_count -= 1;
    cout << "shoot success!" << endl;
    return true;
}