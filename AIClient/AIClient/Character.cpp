/* ------------------------------------------------------------------------------
** _________   _________      ________    _____      _____  ___________ _________
** \_   ___ \ /   _____/     /  _____/   /  _  \    /     \ \_   _____//   _____/
** /    \  \/ \_____  \     /   \  ___  /  /_\  \  /  \ /  \ |    __)_ \_____  \ 
** \     \____/        \    \    \_\  \/    |    \/    Y    \|        \/        \
**  \______  /_______  /     \______  /\____|__  /\____|__  /_______  /_______  /
**        \/        \/             \/         \/         \/        \/        \/ 
**
** Character.h
** Implementation of the Character
**
** Author: Samuel-Ricardo Carriere
** ------------------------------------------------------------------------------*/

#include "Character.h"

Character::Character()
{

}

Character::Character(char* tagName, double x, double z)
{
	this->tagName = tagName;
	moveCharacter(x, z);
}

Character::~Character()
{

}

void Character::moveCharacter(double x, double z)
{
	this->x = x;
	this->z = z;
}

void Character::printSelf()
{
	std::cout << "	*Character: " << tagName << " at (" << x << "," << z << ")" << std::endl;
}