#include <iostream>
using namespace std;

struct player{
	string playerName;
	int playerHealth;
	string playerInv[5];
}player;

int main(){

	string pName = player.playerName;
	int pHealth = player.playerHealth;

	pName = "Fabio";
	pHealth = 20;
	player.playerInv[0] = "Rusty Sword";

	cout << pName << " wakes up and notices a " << player.playerInv[0] << 
	" in the satchel next to him.";

	return 0;
}
