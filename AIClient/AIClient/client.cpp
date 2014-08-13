/* ------------------------------------------------------------------------------
** _________   _________      ________    _____      _____  ___________ _________
** \_   ___ \ /   _____/     /  _____/   /  _  \    /     \ \_   _____//   _____/
** /    \  \/ \_____  \     /   \  ___  /  /_\  \  /  \ /  \ |    __)_ \_____  \ 
** \     \____/        \    \    \_\  \/    |    \/    Y    \|        \/        \
**  \______  /_______  /     \______  /\____|__  /\____|__  /_______  /_______  /
**        \/        \/             \/         \/         \/        \/        \/ 
**
** Main.cpp
** The main function to test the ai client
**
** Author: Samuel-Ricardo Carriere
** ------------------------------------------------------------------------------*/

#include <iostream>

#include "NetworkController.h"
#include "GameMap.h"

int main(int argc, char* argv[])
{
	try
	{
		GameMap gameMap;
		NetworkController netController(&gameMap);

		netController.init();

		bool exit = false;

		std::string message = "";

		while(!exit)
		{
			std::cin >> message;

			if(message == "exit")
			{
				exit = true;
			}
			else
			{
				netController.addMessageToQueue(message);
			}
		}

		netController.close();
	}
	catch (std::exception& e)
	{
		printf("Exception in main : %s\n", e.what());
	}
}