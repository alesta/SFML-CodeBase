#ifndef ENEMY_H
#define ENEMY_H

#include <SFML/Graphics.hpp>
#include "Mob.h"


class Enemy : public Mob {
public:
        Enemy();
protected:

private:
    sf::Sprite e_sprite;
    sf::Texture e_tex;
};

#endif // ENEMY_H
