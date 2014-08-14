/* ------------------------------------------------------------------------------
** _________   _________      ________    _____      _____  ___________ _________
** \_   ___ \ /   _____/     /  _____/   /  _  \    /     \ \_   _____//   _____/
** /    \  \/ \_____  \     /   \  ___  /  /_\  \  /  \ /  \ |    __)_ \_____  \ 
** \     \____/        \    \    \_\  \/    |    \/    Y    \|        \/        \
**  \______  /_______  /     \______  /\____|__  /\____|__  /_______  /_______  /
**        \/        \/             \/         \/         \/        \/        \/ 
**
** NetCharacter.h
** The Character that is controlled by the AI
**
** Author: Samuel-Ricardo Carriere
** ------------------------------------------------------------------------------*/

#ifndef __NetCharacter_h_
#define __NetCharacter_h_

#include <iostream>
#include <queue>

class NetCharacter
{
private:
	std::queue<std::string>* messageQueue;
	std::string tagName;
	double x;
	double y;

public:
	NetCharacter(std::queue<std::string>* messageQueue);
	NetCharacter(std::queue<std::string>* messageQueue, std::string tagName, double x, double y);
	~NetCharacter();
	void moveCharacter(double x, double y);
};

#endif // #ifndef __NetCharacter_h_