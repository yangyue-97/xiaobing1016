#include "solider.h"


Solider::Solider(std::string name)
{
    _name = name;
    _ptr_gun = nullptr;
}

Solider::~Solider()
{
    delete _ptr_gun;
}

void Solider::addGun(Gun* ptr_gun)
{
    _ptr_gun = ptr_gun;
}

void Solider::addBulletToGun(int num)
{
    if (_ptr_gun)
        _ptr_gun->addBullet(num);
}

bool Solider::fire()
{
    if (_ptr_gun)
        return _ptr_gun->shoot();
    
    return false;
}