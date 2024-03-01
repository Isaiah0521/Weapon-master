#include <iostream>
#include <Windows.h>
#include <mmsystem.h>
#include <string>
#include<thread>
#include <Windows.h>


#include <stdio.h>
#include<conio.h>
#pragma comment(lib,"winmm.lib")

void play_music()
{
	PlaySound(TEXT("findyourflamem.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);

}
void play_music2()
{

	PlaySound(TEXT("Extra-music.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
}
void city_music()
{

	PlaySound(TEXT("City_Sound_affect.wav"), NULL, SND_FILENAME | SND_ASYNC);
}
void Title_cutscene()
{
	PlaySound(TEXT("Title cutscene.wav"), NULL, SND_FILENAME | SND_ASYNC);
}
void Menu_music()
{
	PlaySound(TEXT("Menu music.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
}
void wind_music()
{
	PlaySound(TEXT("Gust Of Wind Sound Effect.wav"), NULL, SND_FILENAME | SND_ASYNC);
}
void wind2_music()
{

	PlaySound(TEXT("WHOOSHH WIND-SOUND EFFECT 1.wav"), NULL, SND_FILENAME | SND_ASYNC);
}
void city2_music()
{

	PlaySound(TEXT("Building_Exploding.wav"), NULL, SND_FILENAME | SND_ASYNC);
}
void laser_sfx()
{
	PlaySound(TEXT("Laser of doom sound effect.wav"), NULL, SND_FILENAME | SND_ASYNC);
}
void laserblocked_sfx()
{
	PlaySound(TEXT("Laser Beam 2 Sound Effect.wav"), NULL, SND_FILENAME | SND_ASYNC);
}
void lol_sfx()
{
	PlaySound(TEXT("Audience laughing sound effect.wav"), NULL, SND_FILENAME | SND_ASYNC);
}
void tumble_sfx()
{
	PlaySound(TEXT("Tumbleweed Sound Effect Hq.wav"), NULL, SND_FILENAME | SND_ASYNC);
}
void scream()
{
	PlaySound(TEXT("died.wav"), NULL, SND_FILENAME | SND_ASYNC);
}
void intro_music()
{
	PlaySound(TEXT("Intro.wav"), NULL, SND_FILENAME | SND_ASYNC);
}
void Win()
{
	PlaySound(TEXT("Victory theme.wav"), NULL, SND_FILENAME | SND_ASYNC);
}
void Lose()
{
	PlaySound(TEXT("Game over.wav"), NULL, SND_FILENAME | SND_ASYNC);
}
int main()
{
	using namespace std;
	string mode;
	string x, csi;
	string start, intro;
	string playername;
	string continueG;
	string menu;
	int obs2, obs3, musicOp;
	int op;
	string unused;
	thread TCS(Title_cutscene);
	cout << "Cutscene intro, press any button to skip then enter";
	cin >> csi;

	while (true) {
		cout << "||||||                                                      ";
		cout << "\n|   ||                                                       ";
		cout << "\n||||||                       |    ||||||             |||||||         |||        |                                                                    ";
		cout << "\n|          |||               |    |         |||||       |          ||   ||      |            |||||                                         ||||||         ";
		cout << "\n|         |   |   ||||       |    |||||     |           |          |||||||  |||||   |    |  ||||  ||              ||    ||  ||   ||||||   ||||  |||        ";
		cout << "\n|         |       |  |       |    |         |           |          ||   ||  |   |   |    |  ||||||||    ||||||   ||||   ||  ||   ||  ||   |||||||||          ";
		cout << "\n|         |       |  |       |    |         |           |          ||   ||  |   |    |  |    ||         ||  ||    ||    ||  ||   ||        ||          ";
		cout << "\n|         |       ||||     |||    ||||||    |||||       |          ||   ||  |||||     ||       |||      ||  ||    ||    ||||||   ||          |||            ";
		cout << "\n Type start to begin\n";
		cin >> start;

		if (start == "start") {


			thread MENU(Menu_music);
			cout << "Select mode:\n1.Story,\n2.Extra \n3. Intro song\n";
			cin >> mode;
			if (mode == "1")
			{


				thread city(city_music);
				cout << "Switchton City\n";
				city.join();
				cout << "Press x to Continue\n";
				cin >> x;

				if (x == "x" || "X")
				{


					thread city2(city2_music);
					cout << "*building crash*";
					city2.join();


				}
				cout << "\nPeople of this planet. \nYou're planet is being conquered by the Great uniter of the Universe";
				cin >> x;
				cout << "Give your uncondition surrender or perish";
				cin >> x;
				thread laserDoom(laser_sfx);
				laserDoom.join();
				cout << "*Laser charging up then fires*\n";
				cin >> x;
				cout << " * running sound affect * ";
				cin >> x;
				cout << "Divine shield";
				cin >> x;
				cout << "laser blocked\n";
				thread laserblocked(laserblocked_sfx);
				laserblocked.join();
				cout << "???:What?!?!? WHO DARES?!?!?";
				cin >> x;
				cout << "???:How about you look down and see for your self";
				cin >> x;
				cout << "*smoke clears up*";
				thread wind(wind_music);
				wind.join();
				cout << "Press any key then Enter";
				cin >> x;
				cout << "Citzen: It's the. The protector of our city.";
				cin >> x;
				cout << "\nCitzen: A hero that is wields a wrist band. That holding the power of many weapons.";
				cout << "\nThey are....";
				cout << "\nType in the user name: ";
				cin >> playername;
				getline(cin, playername);
				cout << "\nCitzen:" << playername << " Our Hero \nType any letter then enter";
				thread wind2(wind2_music);
				wind2.join();
				cin >> x;
				cout << playername << ":Alright you chromedome tell what you are doing here, your motivees, you know the classic villian sticks";
				cin >> x;
				cout << "\n???: How dare you disrepect me you primitive being.  You don't know your place.";
				cin >> x;
				cout << "\n???:But if you must know. My name is ... S";
				cin >> x;
				cout << "...";
				thread tumble(tumble_sfx);
				tumble.join();
				cout << "\nDecision: \n1.Make fun of him.\n2. Do not make fun of him";
				cin >> x;
				if (x == "1")
				{
					thread lol(lol_sfx);

					cout << "Audience laughing sound effect";
					lol.join();
					cin >> x;
					cout << playername << "\nWhat type of name is that?! Oh no guys, watch out for S.  Ohh scar-";
					cin >> x;
					cout << "Desindegrate ray fired";
					thread died(scream);
					died.join();
					thread gameOver(Lose);
					gameOver.join();
					cout << "Game over music?\n";
					lol.join();
				}
				else if (x == "2")
				{
					string c;
					thread play(play_music);
					cout << "I'm ready";
					cout << "\nVillan: Let the fight commence";
					cout << "\nThis is your final trial";
					cout << "\nAs you run throught the endless corridore,a wall is in your path.";
					cout << "\nSelect weapon";
					cin >> op;

					if (op == 1) {
						cout << "\nChaos Hammer";
						cout << "*Wall breaking sound *";

					}

					else if (op == 2)
					{
						cout << "\nBlazing Ecailliber";
						cout << "\nSword broke";
						cout << "\ndeath";
						thread gameOver(Lose);
						gameOver.join();
						return main();

					}
					else if (op == 3)
					{
						cout << "death";
						thread gameOver(Lose);
						gameOver.join();
						return main();
					}
					cout << "\nS:What how did u do that, doesn't matter, lets see u dodge this one.";
					cout << "\nChain sound:";
					cin >> obs2;
					if (obs2 == 1)
					{
						cout << "\nChaos Hammer";
						cout << "*Wall breaking sound *";
						thread gameOver(Lose);
						gameOver.join();
						return main();

					}
					else if (obs2 == 2)
					{
						cout << "\nBlazing Ecailliber";
						cout << "\nChain melted";
					}
					else if (obs2 == 3)
					{
						cout << "death";
						thread gameOver(Lose);
						gameOver.join();
						cout << "Continue?";
						cin >> menu;
					}
					cout << playername << " : It seems like I am making the cut.  You better split as soon as you can.";
					cin >> x;
					cout << "\nS: QUIET YOU INSECT!!!  FIRE THE CANON";
					cin >> obs3;
					if (obs3 == 1)
					{
						cout << "\nChaos Hammer";
						cout << "*Wall breaking sound *" << endl;
						exit;

					}

					else if (obs3 == 2)
					{
						cout << "\nBlazing Ecailliber";
						cout << "\nChain melted" << endl;
						exit;


					}
					else if (obs3 == 3)
					{
						cout << "FURY GUANTLETS";
					}
					cout << "\nS:  WHAT!?!?!?";
					cin >> x;
					cout << playername << ":TIME TO END THIS." << playername << " :YOUR FINISHED";
					cin >> x;
					cout << playername << "FINAL CANON.  FIIIIRRRREEEEE!!!!!!";
					cin >> x;
					cout << "\nS:EVERYONE FULL POWER!!!! SHOT EVERYTHING YOU GOT!!!";
					cin >> x;
					cout << "\nTAKE HIM OUT";
					cin >> x;
					cout << "*BEAM  STRUGGLE*";
					cin >> x;
					cout << playername << ": FULL POWER";
					cin >> x;
					cout << "S: NO! THIS CAN'T BE HAPPENING!!!!!";
					cout << playername << ": Seems like he did not have a BLAST.";
					thread victory(Win);
					victory.join();
					cout << "Thanks for playing" << endl;
				}
				return main();
			}
			else if (mode == "2")
			{
				thread extra(play_music2);

				string c;
				int extraop;
				cout << "\n1.Unused Code\n2.Music\n3.Concept art\n4.End\n";
				cin >> extraop;
				switch (extraop)
				{
				case 1:

					cout << "\n1.Array\n2.classes\n";
					cin >> unused;
					if (unused == "1")
					{
						int i;
						int a[3] = { 2, 3, 4 };
						cout << "\nEnter number:";
						cin >> i;
						cout << "\n" << a[i];
						return main();

					}
					else if (unused == "2")
					{
					}
				case 2:

					cout << "1.Calm\n2.Boss Battle\n";
					cin >> musicOp;
					if (musicOp == 1)
					{
						cout << "Playing Fishing Vibes";
						thread play2(play_music2);
						play2.join();

						cout << "Type X then Enter to end program.";
						cin >> x;
						if (x == "X" || "x")
						{
							return main();
						}

					}
					else if (musicOp == 2)
					{
						cout << "boss battle";
						thread play(play_music);

						cout << "\nType X then Enter to go back to the start. ";
						cin >> x;
						if (x == "X" || "x")
						{
							return main();
						}
					}
				case 3:
					fd
				case 4:
					cout << "GOODBYE";
					exit;
				}
			}

			else if (mode == "3") {
				thread intro(intro_music);
				intro.join();
				return main();
			}
		}


	}
}
