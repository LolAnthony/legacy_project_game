#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <string>

#pragma warning(disable : 4996)
#pragma warning(disable : 4554)
#pragma warning(disable : 4390)
#pragma warning(disable : 4244)
#pragma warning(disable : 4305)

using namespace sf;
using namespace std;

string temp;

//frog
Image frog_default;
Texture frog_texture;
Sprite frog;

Image frog1_default;
Texture frog1_texture;

//archer
Image archer_default;
Texture archer_texture;
Sprite archer;
 
Image archer1_default;
Texture archer1_texture;

Image archer2_default;
Texture archer2_texture;

//arrow
Image arrow_default;
Texture arrow_texture;
Sprite arrow;

//drago
Image drago_default;
Texture drago_texture;
Sprite drago;

Image drago1_default;
Texture drago1_texture;

Image drago2_default;
Texture drago2_texture;

Image drago3_default;
Texture drago3_texture;

//ghoul
Image ghoul_default;
Texture ghoul_texture;
Sprite ghoul;

//fireball
Image fireball_default;
Texture fireball_texture;
Sprite fireball;

Image ghoul1_default;
Texture ghoul1_texture;

Image ghoul2_default;
Texture ghoul2_texture;

Image ghoul3_default;
Texture ghoul3_texture;

//butterfly
Image butterfly_default;
Texture butterfly_texture;
Sprite butterfly;

Image butterfly1_default;
Texture butterfly1_texture;

//princess
Image princess_default;
Texture princess_texture;
Sprite princess;

Image princess1_default;
Texture princess1_texture;

//arrowp
Image arrowp_default;
Texture arrowp_texture;
Sprite arrowp;

//ghost
Image ghost_default;
Texture ghost_texture;
Sprite ghost;

Image ghost1_default;
Texture ghost1_texture;

//fireballp
Image fireballp_default;
Texture fireballp_texture;
Sprite fireballp;

//background
Image background_default;
Texture background_texture;
Sprite background;

//castle
Image castle_default;
Texture castle_texture;
Sprite castle;

//castle2 
Image castle2_default;
Texture castle2_texture;
Sprite castle2;

//logogame
Image logogame_default;
Texture logogame_texture;
Sprite logogame;

//playbutton
Image playbutton_default;
Texture playbutton_texture;
Sprite playbutton;

//playbutton2
Image playbutton2_default;
Texture playbutton2_texture; 

//settingsbutton
Image settingsbutton_default;
Texture settingsbutton_texture;
Sprite settingsbutton;

//settingsbutton2
Image settingsbutton2_default;
Texture settingsbutton2_texture;

//exitbutton
Image exitbutton_default;
Texture exitbutton_texture;
Sprite exitbutton;

//exitbutton2
Image exitbutton2_default;
Texture exitbutton2_texture;

//easybutton
Image easybutton_default;
Texture easybutton_texture;
Sprite easybutton;

//easybutton2
Image easybutton2_default;
Texture easybutton2_texture;

//normalbutton
Image normalbutton_default;
Texture normalbutton_texture;
Sprite normalbutton;

//normalbutton2
Image normalbutton2_default;
Texture normalbutton2_texture;

//hardbutton
Image hardbutton_default;
Texture hardbutton_texture;
Sprite hardbutton;

//hardbutton2
Image hardbutton2_default;
Texture hardbutton2_texture;

//backbutton
Image backbutton_default;
Texture backbutton_texture;
Sprite backbutton;

//upgradebutton
Image upgradebutton_default;
Texture upgradebutton_texture;
Sprite upgradebutton;

//upgradebutton
Image upgradebutton2_default;
Texture upgradebutton2_texture;

//upgradesmenu
Image upgradesmenu_default;
Texture upgradesmenu_texture;
Sprite upgradesmenubutton;

//upgradehp
Image upgradehp_default;
Texture upgradehp_texture;
Sprite upgradehpbutton;

//upgradehp_lvl's
Image upgradehp1_default;
Texture upgradehp1_texture;

Image upgradehp2_default;
Texture upgradehp2_texture;

Image upgradehp3_default;
Texture upgradehp3_texture;

//upgradedamage
Image upgradedamage_default;
Texture upgradedamage_texture;
Sprite upgradedamagebutton;

//upgradedamage_lvl's
Image upgradedamage1_default;
Texture upgradedamage1_texture;

Image upgradedamage2_default;
Texture upgradedamage2_texture;

Image upgradedamage3_default;
Texture upgradedamage3_texture;

//upgradespeed
Image upgradespeed_default;
Texture upgradespeed_texture;
Sprite upgradespeedbutton;

//upgradespeed_lvl's
Image upgradespeed1_default;
Texture upgradespeed1_texture;

Image upgradespeed2_default;
Texture upgradespeed2_texture;

Image upgradespeed3_default;
Texture upgradespeed3_texture;

//upgraderange
Image upgraderange_default;
Texture upgraderange_texture;
Sprite upgraderangebutton;

//upgraderange_lvl's
Image upgraderange1_default;
Texture upgraderange1_texture;

Image upgraderange2_default;
Texture upgraderange2_texture;

Image upgraderange3_default;
Texture upgraderange3_texture;

//elixirbutton
Image elixir_default;
Texture elixir_texture;
Sprite elixirbutton;

//frogbuybutton
Image frogbuy_default;
Texture frogbuy_texture;
Sprite frogbuybutton;

//wandabuybutton
Image wandabuy_default;
Texture wandabuy_texture;
Sprite wandabuybutton;

//dragobuybutton
Image dragobuy_default;
Texture dragobuy_texture;
Sprite dragobuybutton;

//ghoulbuybutton
Image ghoulbuy_default;
Texture ghoulbuy_texture;
Sprite ghoulbuybutton;

//wasbuy
Image wasbuy_default;
Texture wasbuy_texture;

//on
Image on_default;
Texture on_texture;
Sprite onbutton;

Image on1_default;
Texture on1_texture; 

//off
Image off_default;
Texture off_texture;
Sprite offbutton;

Image off1_default;
Texture off1_texture;

void autoinitializebutton(Image &defaulti, String localp, Texture &texture, Sprite &button)
{
	defaulti.loadFromFile(localp);
	texture.loadFromImage(defaulti);
	button.setTexture(texture);
}

void autoinitializetexture(Image &defaulti, String localp, Texture &texture)
{
	defaulti.loadFromFile(localp);
	texture.loadFromImage(defaulti);
}

void initialize_heros_image()
{
	//game_background
	{
		temp = { "Pictures\\background2.jpg" };
		autoinitializebutton(background_default, temp, background_texture, background);
	}
	//castle
	{
		temp = { "Pictures\\castle1.png" };
		autoinitializebutton(castle_default, temp, castle_texture, castle);
	}
	//castle2
	{
		temp = { "Pictures\\castle2.png" };
		autoinitializebutton(castle2_default, temp, castle2_texture, castle2);
	}
	//frog
	{
		temp = { "Pictures\\characters\\frog1.png" };
		autoinitializebutton(frog_default, temp, frog_texture, frog);

		temp = { "Pictures\\characters\\frog2.png" };
		autoinitializetexture(frog1_default, temp, frog1_texture);
	}
	//archer
	{
		temp = { "Pictures\\characters\\archer1.png" };
		autoinitializebutton(archer_default, temp, archer_texture, archer);

		temp = { "Pictures\\characters\\archer2.png" };
		autoinitializetexture(archer1_default, temp, archer1_texture);

		temp = { "Pictures\\characters\\archer3.png" };
		autoinitializetexture(archer2_default, temp, archer2_texture);
	}
	//arrow
	{
		temp = { "Pictures\\characters\\arrow1.png" };
		autoinitializebutton(arrow_default, temp, arrow_texture, arrow);
	}
	//drago
	{
		temp = { "Pictures\\characters\\dino1.png" };
		autoinitializebutton(drago_default, temp, drago_texture, drago);

		temp = { "Pictures\\characters\\dino2.png" };
		autoinitializetexture(drago1_default, temp, drago1_texture);

		temp = { "Pictures\\characters\\dino3.png" };
		autoinitializetexture(drago2_default, temp, drago2_texture);

		temp = { "Pictures\\characters\\dino4.png" };
		autoinitializetexture(drago3_default, temp, drago3_texture);
	}
	//ghoul
	{
		temp = { "Pictures\\characters\\ghost1.png" };
		autoinitializebutton(ghoul_default, temp, ghoul_texture, ghoul);

		temp = { "Pictures\\characters\\ghost2.png" };
		autoinitializetexture(ghoul1_default, temp, ghoul1_texture);

		temp = { "Pictures\\characters\\ghost3.png" };
		autoinitializetexture(ghoul2_default, temp, ghoul2_texture);

		temp = { "Pictures\\characters\\ghost4.png" };
		autoinitializetexture(ghoul3_default, temp, ghoul3_texture);
	}
	//fireball
	{
		temp = { "Pictures\\characters\\fireball.png" };
		autoinitializebutton(fireball_default, temp, fireball_texture, fireball);
	}
	//butterfly
	{
		temp = { "Pictures\\characters\\butterfly1.png" };
		autoinitializebutton(butterfly_default, temp, butterfly_texture, butterfly);

		temp = { "Pictures\\characters\\butterfly2.png" };
		autoinitializetexture(butterfly1_default, temp, butterfly1_texture);
	}
	//princess
	{
		temp = { "Pictures\\characters\\princess1.png" };
		autoinitializebutton(princess_default, temp, princess_texture, princess);

		temp = { "Pictures\\characters\\princess2.png" };
		autoinitializetexture(princess1_default, temp, princess1_texture);
	}
	//arrowp
	{
		temp = { "Pictures\\characters\\arrow2.png" };
		autoinitializebutton(arrowp_default, temp, arrowp_texture, arrowp);
	}
	//ghost
	{
		temp = { "Pictures\\characters\\bad_ghost1.png" };
		autoinitializebutton(ghost_default, temp, ghost_texture, ghost);

		temp = { "Pictures\\characters\\bad_ghost2.png" };
		autoinitializetexture(ghost1_default, temp, ghost1_texture);
	}
	//fireballp
	{
		temp = { "Pictures\\characters\\fireball2.png" };
		autoinitializebutton(fireballp_default, temp, fireballp_texture, fireballp);
	}
}

void initialize_game_buttons()
{
	//logo_game
	{
		temp = { "Pictures\\characters\\logo.png" };
		autoinitializebutton(logogame_default, temp, logogame_texture, logogame);
	}
	//play_button
	{
		temp = { "Pictures\\characters\\game_button.png" };
		autoinitializebutton(playbutton_default, temp, playbutton_texture, playbutton);
	}
	//play_button2
	{
		temp = { "Pictures\\characters\\game_button2.png" };
		autoinitializetexture(playbutton2_default, temp, playbutton2_texture);
	}
	//settings_button
	{
		temp = { "Pictures\\characters\\settings_button.png" };
		autoinitializebutton(settingsbutton_default, temp, settingsbutton_texture, settingsbutton);
	}
	//settings_button2
	{
		temp = { "Pictures\\characters\\settings_button2.png" };
		autoinitializetexture(settingsbutton2_default, temp, settingsbutton2_texture);
	}
	//exit_button
	{
		temp = { "Pictures\\characters\\exit_button.png" };
		autoinitializebutton(exitbutton_default, temp, exitbutton_texture, exitbutton);
	}
	//exit_button2
	{
		temp = { "Pictures\\characters\\exit_button2.png" };
		autoinitializetexture(exitbutton2_default, temp, exitbutton2_texture);
	}
	//easy_button
	{
		temp = { "Pictures\\characters\\easy_button.png" };
		autoinitializetexture(easybutton_default, temp, easybutton_texture);
	}
	//easy2_button
	{
		easybutton2_default.loadFromFile("Pictures\\characters\\easy_button2.png");
		easybutton2_texture.loadFromImage(easybutton2_default);
		easybutton.setTexture(easybutton2_texture);
	}
	//normal_button
	{
		temp = { "Pictures\\characters\\normal_button.png" };
		autoinitializebutton(normalbutton_default, temp, normalbutton_texture, normalbutton);
	}
	//normal2_button
	{
		temp = { "Pictures\\characters\\normal_button2.png" };
		autoinitializetexture(normalbutton2_default, temp, normalbutton2_texture);
	}
	//hard_button
	{
		temp = { "Pictures\\characters\\hard_button.png" };
		autoinitializebutton(hardbutton_default, temp, hardbutton_texture, hardbutton);
	}
	//hard2_button
	{
		temp = { "Pictures\\characters\\hard_button2.png" };
		autoinitializetexture(hardbutton2_default, temp, hardbutton2_texture);
	}
	//back_button
	{
		temp = { "Pictures\\characters\\back.png" };
		autoinitializebutton(backbutton_default, temp, backbutton_texture, backbutton);
	}
	//on
	{
		temp = { "Pictures\\characters\\on_button.png" };
		autoinitializebutton(on_default, temp, on_texture, onbutton);

		temp= { "Pictures\\characters\\on1_button.png" };
		autoinitializetexture(on1_default, temp, on1_texture);
	}
	//off
	{
		temp = { "Pictures\\characters\\off_button.png" };
		autoinitializebutton(off_default, temp, off_texture, offbutton);

		temp = { "Pictures\\characters\\off1_button.png" };
		autoinitializetexture(off1_default, temp, off1_texture);

		offbutton.setTexture(off1_texture);
	}
}

void initialize_game()
{
	//upgradebutton
	{
		temp = { "Pictures\\characters\\upgrades.png" };
		autoinitializebutton(upgradebutton_default, temp, upgradebutton_texture, upgradebutton);
		upgradebutton.setPosition(620, 670);

		temp = { "Pictures\\characters\\close_upgrade.png" };
		autoinitializetexture(upgradebutton2_default, temp, upgradebutton2_texture);
	}
	//upgrades_menu_buttons
	{
		temp={ "Pictures\\characters\\upgrades_menu.png" };
		autoinitializebutton(upgradesmenu_default, temp, upgradesmenu_texture, upgradesmenubutton);
		upgradesmenubutton.setPosition(350, 530);
	}
	//upgrade_hp_button
	{
		temp = { "Pictures\\characters\\boost_hp1.png" };
		autoinitializebutton(upgradehp_default, temp, upgradehp_texture, upgradehpbutton);
		upgradehpbutton.setPosition(370, 560);


		temp = { "Pictures\\characters\\boost_hp2.png" };
		autoinitializetexture(upgradehp1_default, temp, upgradehp1_texture);

		temp = { "Pictures\\characters\\boost_hp3.png" };
		autoinitializetexture(upgradehp2_default, temp, upgradehp2_texture);

		temp = { "Pictures\\characters\\boost_hp4.png" };
		autoinitializetexture(upgradehp3_default, temp, upgradehp3_texture);
	}
	//upgrade_damage_button
	{
		temp = { "Pictures\\characters\\boost_damage1.png" };
		autoinitializebutton(upgradedamage_default, temp, upgradedamage_texture, upgradedamagebutton);
		upgradedamagebutton.setPosition(570, 560);

		temp = { "Pictures\\characters\\boost_damage2.png" };
		autoinitializetexture(upgradedamage1_default, temp, upgradedamage1_texture);
		
		temp = { "Pictures\\characters\\boost_damage3.png" };
		autoinitializetexture(upgradedamage2_default, temp, upgradedamage2_texture);

		temp = { "Pictures\\characters\\boost_damage4.png" };
		autoinitializetexture(upgradedamage3_default, temp, upgradedamage3_texture);
	}
	//upgrade_speed_button
	{
		temp = { "Pictures\\characters\\boost_speed1.png" };
		autoinitializebutton(upgradespeed_default, temp, upgradespeed_texture, upgradespeedbutton);
		upgradespeedbutton.setPosition(770, 560);

		temp = { "Pictures\\characters\\boost_speed2.png" };
		autoinitializetexture(upgradespeed1_default, temp, upgradespeed1_texture);

		temp = { "Pictures\\characters\\boost_speed3.png" };
		autoinitializetexture(upgradespeed2_default, temp, upgradespeed2_texture);

		temp = { "Pictures\\characters\\boost_speed4.png" };
		autoinitializetexture(upgradespeed3_default, temp, upgradespeed3_texture);
	}
	//upgrade_range_button
	{
		temp = { "Pictures\\characters\\boost_range1.png" };
		autoinitializebutton(upgraderange_default, temp, upgraderange_texture, upgraderangebutton);
		upgraderangebutton.setPosition(970, 560);

		temp = { "Pictures\\characters\\boost_range2.png" };
		autoinitializetexture(upgraderange1_default, temp, upgraderange1_texture);
		
		temp = { "Pictures\\characters\\boost_range3.png" };
		autoinitializetexture(upgraderange2_default, temp, upgraderange2_texture);

		temp = { "Pictures\\characters\\boost_range4.png" };
		autoinitializetexture(upgraderange3_default, temp, upgraderange3_texture);
	}
	//elixirbutton
	{
		temp = { "Pictures\\characters\\elixir.png" };
		autoinitializebutton(elixir_default, temp, elixir_texture, elixirbutton);
		elixirbutton.setPosition(1150, 560);
	}
	//frogbuybutton
	{
		temp = { "Pictures\\characters\\shop1.png" };
		autoinitializebutton(frogbuy_default, temp, frogbuy_texture, frogbuybutton);
	}
	//wandabuybutton
	{
		temp = { "Pictures\\characters\\shop2.png" };
		autoinitializebutton(wandabuy_default, temp, wandabuy_texture, wandabuybutton);
	}
	//dragobuybutton
	{
		temp = { "Pictures\\characters\\shop3.png" };
		autoinitializebutton(dragobuy_default, temp, dragobuy_texture, dragobuybutton);
	}
	//ghoulbuybutton
	{
		temp = { "Pictures\\characters\\shop4.png" };
		autoinitializebutton(ghoulbuy_default, temp, ghoulbuy_texture, ghoulbuybutton);
	}
	//wasbuy
	{
		temp = { "Pictures\\characters\\shop5.png" };
		autoinitializetexture(wasbuy_default, temp, wasbuy_texture);
	}
}

void timer(int x)
{
	Clock clock;
	int time = 0;
	while (time < x)
		time = clock.getElapsedTime().asSeconds();
}

void upgradebuttonvoid(Sprite &Button, Texture &upgrade1, Texture &upgrade2, Texture &upgrade3, int &upgradelvl, float &elixir)
{
	if (upgradelvl==0)
	{
		if (elixir >= 500)
		{
			upgradelvl = 1;
			elixir -= 500;
			Button.setTexture(upgrade1);
		}
	}
	if (upgradelvl==1)
	{
		if (elixir >= 700)
		{
			upgradelvl = 2;
			elixir -= 500;
			Button.setTexture(upgrade2);
		}
	}
	if (upgradelvl==2)
	{
		if (elixir >= 1000)
		{
			upgradelvl = 3;
			elixir -= 750;
			Button.setTexture(upgrade3);
		}
	}
}

int get_range_to_enemy(Sprite &hero, int sh, vector<int> &range_to_enemy_heroes)
{
	int min = 1367;
	for (int i = 0; i < 4; i++)
		if (range_to_enemy_heroes[i] < min)
			min = range_to_enemy_heroes[i];

	int otv = min - sh - (hero.getPosition().x);
	return otv;
}

int get_range_to_enemy_bot(Sprite &hero, vector<int> &range_to_enemy_heroes)
{
	int max = 0;
	for (int i = 0; i < 5; i++)
		if (range_to_enemy_heroes[i] > max)
			max = range_to_enemy_heroes[i];
	int otv = hero.getPosition().x - max;
	return otv;
}

int get_enemy(Sprite &hero, vector<int> &range_to_enemy_heroes)
{
	int min = 1367;
	int max = 1367;
	for (int i = 0; i < 4; i++)
		if (range_to_enemy_heroes[i] < max)
		{
			min = i;
			max = range_to_enemy_heroes[i];
		}
	return min;
}

int get_enemy_bot(Sprite &hero, vector<int> &range_to_enemy_heroes)
{
	int max = 0;
	int min = 0;
	for (int i = 0; i < 5; i++)
		if (range_to_enemy_heroes[i] > max)
		{
			max = range_to_enemy_heroes[i];
			min=i;
		}
	return min;
}

int main()
{
	int verticals = 0;
	float bot_elixir = 0;
	float bot_elixir_speed = 0;
	bool en = false;
	int dragoanim = 0;
	bool fireball1 = false;
	bool fireball2 = false;
	bool arrow1 = false;
	bool arrow2 = false;
	int timerd = 300;
	int enemy;
	vector<int> heroesy = { 0,0,0,0,0 };
	vector<int> prheroesy = { 10000,10000,10000,10000 };
	vector<int> heroeslive = { 0,0,0,0,0,0,0 };
	vector<int> heroeshp = { 0,0,0,0,0,0,0 };
	vector<int> heroesdamage = { 0,0,0,0,0,0,0 };
	vector<float> heroesspeed = { 0,0,0,0,0,0,0 };
	vector<int> heroesrange = { 0,0,0,0,0,0,0 };
	vector<int> firston = { 0,0,0,0,0,0,0 };
	int cost = 0;
	int castle1hp = 1500;
	int castle2hp = 1500;
	int elixirmax = 300;
	string elixirchar;
	string castle1hpchar;
	string castle2hpchar;
	string costitemchar;
	float elixiradd = 0.25;
	int upgradehplvl = 0;
	int upgradedamagelvl = 0;
	int upgradespeedlvl = 0;
	int upgraderangelvl = 0;
	float elixir = 10000;
	int elixirlvl = 0;
	int upgrade = 1;
	bool firststart = 1;
	int difficulty_level = 0;
	bool first = true;
	int logoX = 463;
	int logopX = 510;
	float logoY = -100;
	int logopY = 968;
	Font font;
	font.loadFromFile("Pictures\\MysteryQuest-Regular.ttf");
	int mode = 9; // logo-9 menu-0 game-1 settings-2
	RenderWindow window(VideoMode(1366, 768), "Castle Clash v0.09");
	window.setFramerateLimit(120);
	initialize_heros_image();
	Text logo("LolAntony", font, 120);
	Text difficulty("Difficulty", font, 80);
	Text logop("present", font, 120);
	Text elixirtext("hdfrte", font, 25);
	Text castle1hptext("fgsea", font, 40);
	Text castle2hptext("awdwa", font, 40);
	Text costitem("Cost:", font, 50);
	Text wintext("You win!", font, 120);
	Text losetext("Game over!", font, 120);
	Text entertext("To enter the menu, press *Enter*", font, 50);
	Text CastleClash("Castle Clash", font, 120);
	Text Vertical("V-sync", font, 80);
	Vertical.setColor(Color::Black);
	CastleClash.setColor(Color::Black);
	entertext.setColor(Color::Black);
	entertext.setPosition(600, 600);
	wintext.setColor(Color::Black);
	losetext.setColor(Color::Black);
	wintext.setPosition(200, 300);
	losetext.setPosition(150, 300);

	elixirtext.setPosition(1220,650);
	elixirtext.setColor(Color::Black);
	castle1hptext.setPosition(50, 110);
	castle1hptext.setColor(Color::Black);
	castle2hptext.setPosition(1250, 110);
	castle2hptext.setColor(Color::Black);
	costitem.setPosition(80, 560);
	costitem.setColor(Color::Black);
	logo.setColor(Color::Black);
	logop.setColor(Color::Black);
	difficulty.setColor(Color::Black);
	window.setVerticalSyncEnabled(false);
	while (window.isOpen())
	{
		//exit of the game
		Event event;
		while (window.pollEvent(event))
		{
				if (event.type == Event::Closed)
				window.close();
		}
		if (mode == 1)
		{
			if (upgrade == 1)
			{
				if (IntRect(370, 560, 150, 75).contains(Mouse::getPosition(window)))
					if (upgradehplvl == 0)
						cost = 500;
					else if (upgradehplvl == 1)
						cost = 700;
					else
						if (upgradehplvl == 2)
							cost = 1000;
				if (IntRect(570, 560, 150, 75).contains(Mouse::getPosition(window)))
					if (upgradedamagelvl == 0)
						cost = 500;
					else if (upgradedamagelvl == 1)
						cost = 700;
					else
						if (upgradedamagelvl == 2)
							cost = 1000;
				if (IntRect(770, 560, 150, 75).contains(Mouse::getPosition(window)))
					if (upgradespeedlvl == 0)
						cost = 500;
					else if (upgradespeedlvl == 1)
						cost = 700;
					else
						if (upgradespeedlvl == 2)
							cost = 1000;
				if (IntRect(970, 560, 150, 75).contains(Mouse::getPosition(window)))
					if (upgraderangelvl == 0)
						cost = 500;
					else if (upgraderangelvl == 1)
						cost = 700;
					else
						if (upgraderangelvl == 2)
							cost = 1000;
			}
				if (IntRect(1150, 560, 200, 191).contains(Mouse::getPosition(window)))
				{
					if (elixirlvl == 0)
						cost = 300;
					else if (elixirlvl == 1)
						cost = 500;
					else if (elixirlvl == 2)
						cost = 700;
				}
				if (upgrade == 0)
				{
					if (IntRect(300, 570, 140, 78).contains(Mouse::getPosition(window)))
						cost = 200;
					if (IntRect(500, 570, 140, 78).contains(Mouse::getPosition(window)))
						cost = 400;
					if (IntRect(700, 570, 140, 78).contains(Mouse::getPosition(window)))
						cost = 600;
					if (IntRect(900, 570, 140, 78).contains(Mouse::getPosition(window)))
						cost = 800;
				}
		}
		if (Mouse::isButtonPressed(Mouse::Left))
		{
			switch (mode)
			{
			case 1:
				if (upgrade == 1)
				{
					if (IntRect(370, 560, 150, 75).contains(Mouse::getPosition(window)))
					{
						upgradebuttonvoid(upgradehpbutton, upgradehp1_texture, upgradehp2_texture, upgradehp3_texture, upgradehplvl, elixir);
						if (upgradehplvl == 0)
							cost = 500;
						else if (upgradehplvl == 1)
							cost = 700;
						else
							if (upgradehplvl == 2)
								cost = 1000;
					}
					if (IntRect(570, 560, 150, 75).contains(Mouse::getPosition(window)))
					{
						upgradebuttonvoid(upgradedamagebutton, upgradedamage1_texture, upgradedamage2_texture, upgradedamage3_texture, upgradedamagelvl, elixir);
						if (upgradedamagelvl == 0)
							cost = 500;
						else if (upgradedamagelvl == 1)
							cost = 700;
						else
							if (upgradedamagelvl == 2)
								cost = 1000;
					}
					if (IntRect(770, 560, 150, 75).contains(Mouse::getPosition(window)))
					{
						upgradebuttonvoid(upgradespeedbutton, upgradespeed1_texture, upgradespeed2_texture, upgradespeed3_texture, upgradespeedlvl, elixir);
						if (upgradespeedlvl == 0)
							cost = 500;
						else if (upgradespeedlvl == 1)
							cost = 700;
						else
							if (upgradespeedlvl == 2)
								cost = 1000;
					}
					if (IntRect(970, 560, 150, 75).contains(Mouse::getPosition(window)))
					{
						upgradebuttonvoid(upgraderangebutton, upgraderange1_texture, upgraderange2_texture, upgraderange3_texture, upgraderangelvl, elixir);
						if (upgraderangelvl == 0)
							cost = 500;
						else if (upgraderangelvl == 1)
							cost = 700;
						else
							if (upgraderangelvl == 2)
								cost = 1000;
					}
				}
				if (IntRect(1150, 560, 200, 191).contains(Mouse::getPosition(window)))
				{
					if (elixirlvl == 0)
						if (elixir >= 300)
						{
							elixirmax = 500;
							elixirlvl = 1;
							elixir -= 300;
							elixiradd = 1.4;
						}
					if (elixirlvl == 1)
						if (elixir >= 500)
						{
							elixirmax = 700;
							elixirlvl = 2;
							elixir -= 500;
							elixiradd = 1.75;
						}
					if (elixirlvl == 2)
						if (elixir >= 700)
						{
							elixirmax = 1000;
							elixirlvl = 3;
							elixir -= 700;
							elixiradd = 2;
						}
				}
				if (upgrade == 0)
				{
					if (IntRect(300, 570, 140, 78).contains(Mouse::getPosition(window)))
					{
						if (elixir > 200)
						{
							if (heroeslive[0] == 0)
							{
								heroeslive[0] = 1;
								firston[0] = 1;
								elixir -= 200;
								frogbuybutton.setTexture(wasbuy_texture);
							}
						}
					}
					if (IntRect(500, 570, 140, 78).contains(Mouse::getPosition(window)))
					{
						if (elixir > 400)
						{
							if (heroeslive[1] == 0)
							{
								heroeslive[1] = 1;
								firston[1] = 1;
								elixir -= 400;
								wandabuybutton.setTexture(wasbuy_texture);
							}
						}
					}
					if (IntRect(700, 570, 140, 78).contains(Mouse::getPosition(window)))
					{
						if (elixir > 600)
						{
							if (heroeslive[2] == 0)
							{
								heroeslive[2] = 1;
								firston[2] = 1;
								elixir -= 600;
								dragobuybutton.setTexture(wasbuy_texture);
							}
						}
					}
					if (IntRect(900, 570, 140, 78).contains(Mouse::getPosition(window)))
					{
						if (elixir > 800)
						{
							if (heroeslive[3] == 0)
							{
								heroeslive[3] = 1;
								firston[3] = 1;
								elixir -= 800;
								ghoulbuybutton.setTexture(wasbuy_texture);
							}
						}
					}
				}
				break;
			case 0:
				if (IntRect(460, 201, 400, 100).contains(Mouse::getPosition(window)))
				{
					if (difficulty_level == 0)
					{
						castle1hp = 1500;
						castle2hp = 750;
						bot_elixir_speed = 0.4;
					}
					else
						if (difficulty_level == 1)
						{
							castle1hp = 750;
							castle2hp = 750;
							bot_elixir_speed = 0.4;
						}
						else
							if (difficulty_level == 2)
							{
								castle1hp = 750;
								castle2hp = 1500;
								bot_elixir_speed = 0.8;
							}
					fireball2 = false;
					frog.setPosition(-2000, 0);
					archer.setPosition(-2000, 0);
					drago.setPosition(-2000, 0);
					ghoul.setPosition(-2000, 0);
					heroesy = { -2000,-2000,-2000,-2000,-2000 };
					prheroesy = { 10000,10000,10000,10000 };
					bot_elixir = 0;
					en = false;
					dragoanim = 0;
					fireball1 = false;
					arrow1 = false;
					arrow2 = false;
					timerd = 300;
					castle.setPosition(-200, 155);
					castle2.setPosition(1100, 155);
					frogbuybutton.setPosition(300, 570);
					wandabuybutton.setPosition(500, 570);
					dragobuybutton.setPosition(700, 570);
					ghoulbuybutton.setPosition(900, 570);
					heroeslive = { 0,0,0,0,0,0,0 };
					heroeshp = { 0,0,0,0,0,0,0 };
					heroesdamage = { 0,0,0,0,0,0,0 };
					heroesspeed = { 0,0,0,0,0,0,0 };
					heroesrange = { 0,0,0,0,0,0,0 };
					firston = { 0,0,0,0,0,0,0 };
					mode = 1;
					upgradehplvl = 0;
					upgradedamagelvl = 0;
					upgradespeedlvl = 0;
					upgraderangelvl = 0;
					elixir = 0;
					elixirlvl = 0;
					elixiradd = 0.2;
					elixirmax = 300;
					initialize_heros_image();
					initialize_game();
				}
				if (IntRect(460, 401, 400, 100).contains(Mouse::getPosition(window)))
				{
					easybutton.setPosition(150, 170);
					normalbutton.setPosition(150, 270);
					hardbutton.setPosition(150, 370);
					backbutton.setPosition(1050, 650);
					difficulty.setPosition(140, 50);
					Vertical.setPosition(800, 50);
					onbutton.setPosition(800, 190);
					offbutton.setPosition(800, 290);
					mode = 2;

				}
				if (IntRect(460, 601, 400, 100).contains(Mouse::getPosition(window)))
				{
					window.close();
				}
				break;
			case 2:
				if (IntRect(1050, 650, 300, 100).contains(Mouse::getPosition(window)))
				{
					mode = 3;
				}
				if (IntRect(150, 170, 300, 51).contains(Mouse::getPosition(window)))
				{
					difficulty_level = 0;
					easybutton.setTexture(easybutton2_texture);
					normalbutton.setTexture(normalbutton_texture);
					hardbutton.setTexture(hardbutton_texture);
				}
				if (IntRect(150, 270, 300, 51).contains(Mouse::getPosition(window)))
				{
					difficulty_level = 1;
					easybutton.setTexture(easybutton_texture);
					normalbutton.setTexture(normalbutton2_texture);
					hardbutton.setTexture(hardbutton_texture);
				}
				if (IntRect(150, 370, 300, 51).contains(Mouse::getPosition(window)))
				{
					difficulty_level = 2;
					easybutton.setTexture(easybutton_texture);
					normalbutton.setTexture(normalbutton_texture);
					hardbutton.setTexture(hardbutton2_texture);
				}
				if (IntRect(800, 190, 300, 51).contains(Mouse::getPosition(window)))
				{
					verticals = 1;
					window.setVerticalSyncEnabled(true);
					onbutton.setTexture(on1_texture);
					offbutton.setTexture(off_texture);
				}
				if (IntRect(800, 290, 300, 51).contains(Mouse::getPosition(window)))
				{
					verticals = 0;
					window.setVerticalSyncEnabled(false);
					onbutton.setTexture(on_texture);
					offbutton.setTexture(off1_texture);
				}
				break;
			case 404:
				if (Keyboard::isKeyPressed(Keyboard::Enter))
				{
					mode=3;
				}
			case 60:
				if (Keyboard::isKeyPressed(Keyboard::Enter))
				{
					mode = 3;
				}
			}
		}
		
		//Render
		switch (mode)
		{
		case 9:					//logo - 9  
			while (logoY < 160)
			{

				logoY += 3;
				logo.setPosition(logoX, logoY);
				window.clear(Color::Cyan);
				window.draw(logo);
				window.display();
			}
			while (logopY > 400)
			{
				logopY -= 3;
				logop.setPosition(logopX, logopY);
				window.clear(Color::Cyan);
				window.draw(logo);
				window.draw(logop);
				window.display();
			}
			logoX = 500;
			logoY = -100;
			initialize_game_buttons();
			timer(3);
			mode = 0;
			break;

		case 0:							//menu - 0
			if (IntRect(460, 201, 400, 100).contains(Mouse::getPosition(window)))
			{
				playbutton.setTexture(playbutton2_texture);
			}
			else
				playbutton.setTexture(playbutton_texture);

			if (IntRect(460, 401, 400, 100).contains(Mouse::getPosition(window)))
			{
				settingsbutton.setTexture(settingsbutton2_texture);
			}
			else
				settingsbutton.setTexture(settingsbutton_texture);
			if (IntRect(460, 601, 400, 100).contains(Mouse::getPosition(window)))
			{
				exitbutton.setTexture(exitbutton2_texture);
			}
			else
				exitbutton.setTexture(exitbutton_texture);
			logoX -= 136;
			while (logoY < 39)
			{
				logoY += 4;
				CastleClash.setPosition(logoX, logoY);
				window.clear(Color::Green);
				window.draw(CastleClash);
				window.display();
			}
			if (first)
			{
				logoX = 460;
				logoY = 900;
				first = false;
			}
			while (logoY > 200)
			{
				logoY -= 4;
				playbutton.setPosition(logoX, logoY);
				settingsbutton.setPosition(logoX, logoY + 200);
				exitbutton.setPosition(logoX, logoY + 400);
				window.clear(Color::Green);
				window.draw(playbutton);
				window.draw(settingsbutton);
				window.draw(exitbutton);
				window.draw(CastleClash);
				window.display();
			}
			
			window.clear(Color::Green);
			window.draw(CastleClash);
			window.draw(playbutton);
			window.draw(settingsbutton);
			window.draw(exitbutton);
			window.display();
			break;

		case 2:							//settings - 2
			window.clear(Color::Blue);
			window.draw(difficulty);
			window.draw(easybutton);
			window.draw(normalbutton);
			window.draw(hardbutton);
			window.draw(backbutton);
			window.draw(Vertical);
			window.draw(onbutton);
			window.draw(offbutton);
			window.display();
			break;

		case 1:							//game - 1
			if (timerd > 0)
				timerd -= 1;
			else
				timerd = 300;
			prheroesy[0] = (castle2.getPosition()).x + 45;
			prheroesy[1] = (butterfly.getPosition().x);
			prheroesy[2] = (princess.getPosition().x);
			prheroesy[3] = (ghost.getPosition().x);
			heroesy[4] = (castle.getPosition().x + 365);
			if (elixir < elixirmax)
				elixir += elixiradd;
			if (elixir > elixirmax)
				elixir = elixirmax;
			elixirchar = to_string(int(elixir));
			elixirtext.setString(elixirchar);
			castle1hpchar = to_string(int(castle1hp));
			castle2hpchar = to_string(int(castle2hp));
			castle1hptext.setString(castle1hpchar);
			castle2hptext.setString(castle2hpchar);
			costitemchar = to_string(int(cost));
			costitem.setString("Cost:" + costitemchar);

			//bot
			bot_elixir += bot_elixir_speed;
			{
				if (bot_elixir > 200)
				{
					if (heroeslive[4] == 0)
					{
						heroeslive[4] = 1;
						firston[4] = 1;
						bot_elixir -= 200;
					}
				}
				if (bot_elixir > 400)
					if (heroeslive[5] == 0)
					{
						heroeslive[5] = 1;
						firston[5] = 1;
						bot_elixir -= 400;
					}
				if (bot_elixir > 600)
					if (heroeslive[6] == 0)
					{
						heroeslive[6] = 1;
						firston[6] = 1;
						bot_elixir -= 600;
					}
			}
			//herosgameplay
			if (heroeslive[0] == 1)
			{
				if (firston[0] == 1)
				{
					firston[0] = 0;
					frog.setTexture(frog_texture);
					frog.setPosition(50, 400);
					if (upgradehplvl == 0)
						heroeshp[0] = 50;
					else if (upgradehplvl == 1)
						heroeshp[0] = 75;
					else if (upgradehplvl == 2)
						heroeshp[0] = 100;
					else if (upgradehplvl == 3)
						heroeshp[0] = 150;

					if (upgradedamagelvl == 0)
						heroesdamage[0] = 25;
					else if (upgradedamagelvl == 1)
						heroesdamage[0] = 50;
					else if (upgradedamagelvl == 2)
						heroesdamage[0] = 75;
					else if (upgradedamagelvl == 3)
						heroesdamage[0] = 100;

					if (upgradespeedlvl == 0)
						heroesspeed[0] = 1;
					else if (upgradespeedlvl == 1)
						heroesspeed[0] = 2;
					else if (upgradespeedlvl == 2)
						heroesspeed[0] = 3;
					else if (upgradespeedlvl == 3)
						heroesspeed[0] = 4;

					heroesrange[0] = 220;
				}
				else
				{
					if (get_range_to_enemy(frog, 0, prheroesy) > heroesrange[0])
					{
						if (timerd > 150)
							frog.move(heroesspeed[0], -1);
						if (timerd < 150 && frog.getPosition().y < 400)
							frog.move(heroesspeed[0], 1);
					}
					else
					{
						if (timerd == 0);
						{
							frog.setPosition(frog.getPosition().x, 400);
							enemy = get_enemy(frog, prheroesy);
							if (enemy == 0 && timerd == 0)
								castle2hp -= heroesdamage[0];
							if (enemy == 1 && timerd == 0)
								heroeshp[4] -= heroesdamage[0];
							if(enemy==2 && timerd == 0)
								heroeshp[5] -= heroesdamage[0];
							if (enemy == 3 && timerd == 0)
								heroeshp[6] -= heroesdamage[0];
						}
						if (timerd > 250)
							frog.setTexture(frog1_texture);
						else
							frog.setTexture(frog_texture);
					}
				}
			}

			if (heroeslive[1] == 1)
			{
				if (firston[1] == 1)
				{
					firston[1] = 0;
					archer.setPosition(50, 320);
					if (upgradehplvl == 0)
						heroeshp[1] = 50;
					else if (upgradehplvl == 1)
						heroeshp[1] = 75;
					else if (upgradehplvl == 2)
						heroeshp[1] = 100;
					else if (upgradehplvl == 3)
						heroeshp[1] = 125;

					if (upgradedamagelvl == 0)
						heroesdamage[1] = 45;
					else if (upgradedamagelvl == 1)
						heroesdamage[1] = 60;
					else if (upgradedamagelvl == 2)
						heroesdamage[1] = 75;
					else if (upgradedamagelvl == 3)
						heroesdamage[1] = 90;

					if (upgradespeedlvl == 0)
						heroesspeed[1] = 1;
					else if (upgradespeedlvl == 1)
						heroesspeed[1] = 2;
					else if (upgradespeedlvl == 2)
						heroesspeed[1] = 2;
					else if (upgradespeedlvl == 3)
						heroesspeed[1] = 3;

					if (upgraderangelvl == 0)
						heroesrange[1] = 250 + 156;
					else if (upgraderangelvl == 1)
						heroesrange[1] = 300 + 156;
					else if (upgraderangelvl == 2)
						heroesrange[1] = 350 + 156;
					else if (upgraderangelvl == 3)
						heroesrange[1] = 400 + 156;
				}
				else
				{
					if (get_range_to_enemy(archer, 500, prheroesy) > heroesrange[0])
					{
						archer.setTexture(archer_texture);
						archer.move(heroesspeed[1], 0);
					}
					else
					{
						if (timerd == 0)
						{
							archer.setTexture(archer1_texture);
							if (arrow1 == false)
							{
								archer.setTexture(archer2_texture);
								enemy = get_enemy(archer, prheroesy);
								arrow.setPosition((archer.getPosition().x + 50), 400);
								arrow1 = true;
							}
						}
						if(arrow1)
						{
							if (get_range_to_enemy(arrow, 0, prheroesy) > 100)
							{
								arrow.move(2, 0);
							}
							else
							{
								archer.setTexture(archer2_texture);
								enemy = get_enemy(arrow, prheroesy);
								arrow1 = false;
								if (enemy == 0)
									castle2hp -= heroesdamage[0];
								if (enemy == 1)
									heroeshp[4] -= heroesdamage[0];
								if (enemy == 2)
									heroeshp[5] -= heroesdamage[0];
								if (enemy == 3)
									heroeshp[6] -= heroesdamage[0];
							}
						}
					}

				}
			}
			if (heroeslive[2] == 1)
			{
				if (firston[2] == 1)
				{
					firston[2] = 0;
					drago.setPosition(50, 340);
					if (upgradehplvl == 0)
						heroeshp[2] = 100;
					else if (upgradehplvl == 1)
						heroeshp[2] = 150;
					else if (upgradehplvl == 2)
						heroeshp[2] = 200;
					else if (upgradehplvl == 3)
						heroeshp[2] = 250;

					if (upgradedamagelvl == 0)
						heroesdamage[2] = 50;
					else if (upgradedamagelvl == 1)
						heroesdamage[2] = 90;
					else if (upgradedamagelvl == 2)
						heroesdamage[2] = 130;
					else if (upgradedamagelvl == 3)
						heroesdamage[2] = 150;

					if (upgradespeedlvl == 0)
						heroesspeed[2] = 1;
					else if (upgradespeedlvl == 1)
						heroesspeed[2] = 2;
					else if (upgradespeedlvl == 2)
						heroesspeed[2] = 3;
					else if (upgradespeedlvl == 3)
						heroesspeed[2] = 3;

					heroesrange[2] = 247;
				}
				else
				{
					if (get_range_to_enemy(drago, 0, prheroesy) > heroesrange[2])
					{
						drago.move(heroesspeed[2], 0);
						if (timerd < 100 | timerd>200)
						{
							drago.setTexture(drago_texture);
							dragoanim = 0;
						}
						else
						{
							drago.setTexture(drago1_texture);
							dragoanim = 1;
						}
					}
					else
					{
						enemy = get_enemy(drago, prheroesy);
						if (timerd == 0)
						{
							if (enemy == 0)
								castle2hp -= heroesdamage[2];
							if (enemy == 1)
								heroeshp[4] -= heroesdamage[2];
							if (enemy == 2)
								heroeshp[5] -= heroesdamage[2];
							if (enemy == 3)
								heroeshp[6] -= heroesdamage[2];
						}
						if (timerd > 150)
						{
							if (dragoanim == 0)
								drago.setTexture(drago2_texture);
							else
								drago.setTexture(drago3_texture);
						}
						else
							if (dragoanim == 0)
								drago.setTexture(drago_texture);
							else
								drago.setTexture(drago1_texture);
					}
				}
			}
			if (heroeslive[3] == 1)
			{
				if (firston[3] == 1)
				{
					firston[3] = 0;
					ghoul.setPosition(50, 320);
					if (upgradehplvl == 0)
						heroeshp[3] = 100;
					else if (upgradehplvl == 1)
						heroeshp[3] = 150;
					else if (upgradehplvl == 2)
						heroeshp[3] = 200;
					else if (upgradehplvl == 3)
						heroeshp[3] = 250;

					if (upgradedamagelvl == 0)
						heroesdamage[3] = 50;
					else if (upgradedamagelvl == 1)
						heroesdamage[3] = 75;
					else if (upgradedamagelvl == 2)
						heroesdamage[3] = 100;
					else if (upgradedamagelvl == 3)
						heroesdamage[3] = 150;

					if (upgradespeedlvl == 0)
						heroesspeed[3] = 1;
					else if (upgradespeedlvl == 1)
						heroesspeed[3] = 1;
					else if (upgradespeedlvl == 2)
						heroesspeed[3] = 2;
					else if (upgradespeedlvl == 3)
						heroesspeed[3] = 3;

					if (upgraderangelvl == 0)
						heroesrange[3] = 200 + 156;
					else if (upgraderangelvl == 1)
						heroesrange[3] = 300 + 156;
					else if (upgraderangelvl == 2)
						heroesrange[3] = 400 + 156;
					else if (upgraderangelvl == 3)
						heroesrange[3] = 500 + 156;
				}
				else
				{
					if (get_range_to_enemy(ghoul, 500, prheroesy) > heroesrange[3])
					{
						ghoul.move(heroesspeed[3], 0);
					}
					else
					{
						if (fireball1 == false)
						{
							if (timerd == 150)
							{
								ghoul.setTexture(ghoul3_texture);
								en = true;
							}
							if (timerd == 0 & en)
							{
								enemy = get_enemy(ghoul, prheroesy);
								fireball.setPosition((ghoul.getPosition().x + 50), 400);
								fireball1 = true;
								en = false;
								ghoul.setTexture(ghoul_texture);
							}
						}
						if (fireball1)
						{
							if (get_range_to_enemy(fireball, 0, prheroesy) > 100)
							{
								fireball.move(2, 0);
							}
							else
							{
								enemy = get_enemy(fireball, prheroesy);
								fireball1 = false;
								if (enemy == 0)
									castle2hp -= heroesdamage[3];
								if (enemy == 1)
									heroeshp[4] -= heroesdamage[3];
								if (enemy == 2)
									heroeshp[5] -= heroesdamage[3];
								if (enemy == 3)
									heroeshp[6] -= heroesdamage[3];
							}
						}
					}
				}
			}
			if (heroeslive[4] == 1)
				if (firston[4] == 1)
				{
					butterfly.setPosition(1250, 370);
					firston[4] = 0;
					if (difficulty_level == 0)
					{
						heroesdamage[4] = 30;
						heroesspeed[4] = 1;
						heroeshp[4] = 70;
					}
					else if (difficulty_level == 2)
					{
						heroesdamage[4] = 50;
						heroesspeed[4] = 1.2;
						heroeshp[4] = 100;
					}
					else if (difficulty_level == 1)
					{
						heroesdamage[4] = 40;
						heroesspeed[4] = 1.1;
						heroeshp[4] = 85;
					}
					heroesrange[4] = 0;
				}
				else
				{
					
					if (get_range_to_enemy_bot(butterfly, heroesy) > heroesrange[4])
					{
						butterfly.move(-heroesspeed[4], 0);
					}
					else
					{
						enemy = get_enemy_bot(butterfly, heroesy);
						if (timerd == 0)
							if (enemy == 4)
								castle1hp -= heroesdamage[4];
							else
								if (enemy == 0)
									heroeshp[0] -= heroesdamage[4];
								else
									if (enemy == 1)
										heroeshp[1] -= heroesdamage[4];
									else
										if (enemy == 2)
											heroeshp[2] -= heroesdamage[4];
										else
											if (enemy == 3)
												heroeshp[3] -= heroesdamage[4];
						if (timerd > 150)
							butterfly.setTexture(butterfly1_texture);
						else
							butterfly.setTexture(butterfly_texture);
					}

				}
			if (heroeslive[5] == 1)
				if (firston[5] == 1)
				{
					princess.setPosition(1250, 300);
					firston[5] = 0;
					if (difficulty_level == 0)
					{
						heroesdamage[5] = 45;
						heroesspeed[5] = 1;
						heroeshp[5] = 50;
						heroesrange[5] = 200;
					}
					else if (difficulty_level == 2)
					{
						heroesdamage[5] = 60;
						heroesspeed[5] = 1.2;
						heroeshp[5] = 95;
						heroesrange[5] = 250;
					}
					else if (difficulty_level == 1)
					{
						heroesdamage[5] = 54;
						heroesspeed[5] = 1.1;
						heroeshp[5] = 70;
						heroesrange[5] = 225;
					}
				}
				else
				{

					if (get_range_to_enemy_bot(princess, heroesy) > heroesrange[5])
					{
						princess.move(-heroesspeed[5], 0);
					}
					else
					{
						enemy = get_enemy_bot(princess, heroesy);
						if (timerd == 0)
						{
							princess.setTexture(princess1_texture);
							if (arrow2 == false)
							{
								enemy = get_enemy_bot(princess, heroesy);
								arrowp.setPosition((princess.getPosition().x), 420);
								arrow2 = true;
							}
						}
						if (arrow2)
						{
							if (get_range_to_enemy_bot(arrowp, heroesy) > 0)
							{
								arrowp.move(-2, 0);
							}
							else
							{
								princess.setTexture(princess_texture);
								enemy = get_enemy_bot(arrowp, heroesy);
								arrow2 = false;
								if (enemy == 4)
									castle1hp -= heroesdamage[5];
								else
									if (enemy == 0)
										heroeshp[0] -= heroesdamage[5];
									else
										if (enemy == 1)
											heroeshp[1] -= heroesdamage[5];
										else
											if (enemy == 2)
												heroeshp[2] -= heroesdamage[5];
											else
												if (enemy == 3)
													heroeshp[3] -= heroesdamage[5];
							}

						}
					}
				}
			if (heroeslive[6] == 1)
				if (firston[6] == 1)
				{
					ghost.setPosition(1250, 300);
					firston[6] = 0;
					if (difficulty_level == 0)
					{
						heroesdamage[6] = 60;
						heroesspeed[6] = 1;
						heroeshp[6] = 75;
						heroesrange[6] = 300;
					}
					else if (difficulty_level == 2)
					{
						heroesdamage[6] = 80;
						heroesspeed[6] = 1.15;
						heroeshp[6] = 95;
						heroesrange[6] = 400;
					}
					else if (difficulty_level == 1)
					{
						heroesdamage[6] = 70;
						heroesspeed[6] = 1.1;
						heroeshp[6] = 80;
						heroesrange[6] = 350;
					}
				}
				else
				{

					if (get_range_to_enemy_bot(ghost, heroesy) > heroesrange[6])
					{
						ghost.move(-heroesspeed[5], 0);
					}
					else
					{
						enemy = get_enemy_bot(princess, heroesy);
						if (timerd == 0)
						{
							ghost.setTexture(ghost1_texture);
							if (fireball2 == false)
							{
								enemy = get_enemy_bot(ghost, heroesy);
								fireballp.setPosition((ghost.getPosition().x), 420);
								fireball2 = true;
							}
						}
						if (fireball2)
						{
							if (get_range_to_enemy_bot(fireballp, heroesy) > 0)
							{
								fireballp.move(-2, 0);
							}
							else
							{
								ghost.setTexture(ghost_texture);
								enemy = get_enemy_bot(fireballp, heroesy);
								fireball2 = false;
								if (enemy == 4)
									castle1hp -= heroesdamage[6];
								else
									if (enemy == 0)
										heroeshp[0] -= heroesdamage[6];
									else
										if (enemy == 1)
											heroeshp[1] -= heroesdamage[6];
										else
											if (enemy == 2)
												heroeshp[2] -= heroesdamage[6];
											else
												if (enemy == 3)
													heroeshp[3] -= heroesdamage[6];
							}

						}
					}
				}

			if (heroeshp[4] <= 0)
			{
				heroeslive[4] = 0;
				firston[4] = 1;
				prheroesy[1] = 10000;
				butterfly.setPosition(2000, 2000);
			}
			if (heroeshp[5] <= 0)
			{
				heroeslive[5] = 0;
				firston[5] = 1;
				prheroesy[2] = 10000;
				princess.setPosition(2000, 2000);
				arrow2 = false;
			}
			if (heroeshp[6] <= 0)
			{
				heroeslive[6] = 0;
				firston[6] = 1;
				prheroesy[3] = 10000;
				ghost.setPosition(2000, 2000);
				fireball2 = false;
			}
			window.clear(Color::Black);
			window.draw(background);
			window.draw(castle);
			window.draw(castle2);
			window.draw(butterfly);
			window.draw(ghost);
			window.draw(upgradebutton);
			window.draw(elixirbutton);
			window.draw(elixirtext);
			window.draw(castle1hptext);
			window.draw(castle2hptext);
			window.draw(frogbuybutton);
			window.draw(wandabuybutton);
			window.draw(dragobuybutton);
			window.draw(ghoulbuybutton);
			window.draw(costitem);
			if (heroeshp[0] <= 0)
			{
				heroeslive[0] = 0;
				firston[0] = 1;
				frogbuybutton.setTexture(frogbuy_texture);
				heroesy[0] = -10000;
				frog.setPosition(-2000, 0);
			}
			if (heroeshp[1] <= 0)
			{
				heroeslive[1] = 0;
				firston[1] = 1;
				wandabuybutton.setTexture(wandabuy_texture);
				heroesy[1] = -10000;
				arrow1 = false;
				archer.setPosition(-2000, 0);
			}
			if (heroeshp[2] <= 0)
			{
				heroeslive[2] = 0;
				firston[2] = 1;
				dragobuybutton.setTexture(dragobuy_texture);
				heroesy[2] = -10000;
				drago.setPosition(-2000, 0);
			}
			if (heroeshp[3] <= 0)
			{
				heroeslive[3] = 0;
				firston[3] = 1;
				ghoulbuybutton.setTexture(ghoulbuy_texture);
				heroesy[3] = -10000;
				fireball1 = false;
				ghoul.setPosition(-2000, 0);
			}
			if (heroeslive[0] == 1)
			{
				window.draw(frog);
				heroesy[0] = frog.getPosition().x+200;
			}
			if (heroeslive[1] == 1)
			{
				window.draw(archer);
				heroesy[1] = archer.getPosition().x+147;
			}
			if (heroeslive[2] == 1)
			{
				window.draw(drago);
				heroesy[2] = drago.getPosition().x+247;
			}
			if (heroeslive[3] == 1)
			{
				window.draw(ghoul);
				heroesy[3] = ghoul.getPosition().x+180;
			}
			if (heroeslive[4] == 1)
			{
				window.draw(butterfly);
				prheroesy[1] = butterfly.getPosition().x;
			}
			if (heroeslive[5] == 1)
			{
				window.draw(princess);
				prheroesy[2] = princess.getPosition().x;
			}
			if (heroeslive[6] == 1)
			{
				window.draw(ghost);
				prheroesy[3] = ghost.getPosition().x;
			}
			heroesy[4] = castle.getPosition().x;
			if (arrow1 == true)
			{
				window.draw(arrow);
			}
			if (arrow2 == true)
			{
				window.draw(arrowp);
			}
			if (fireball1 == true)
				window.draw(fireball);
			if (fireball2 == true)
				window.draw(fireballp);
			if (IntRect(620, 670, 150, 75).contains(Mouse::getPosition(window)) || (IntRect(300, 500, 900, 175).contains(Mouse::getPosition(window)) & upgrade==1))
			{
				upgrade = 1;
				upgradebutton.setTexture(upgradebutton2_texture);
			}
			else
			{
				upgrade = 0;
				upgradebutton.setTexture(upgradebutton_texture);
			}
			if (upgrade == 1)
			{
				window.draw(upgradesmenubutton);
				window.draw(upgradehpbutton);
				window.draw(upgradedamagebutton);
				window.draw(upgradespeedbutton);
				window.draw(upgraderangebutton);
			}
			if (castle1hp <= 0)
				mode = 60;
			if (castle2hp <= 0)
				mode = 404;
			window.display();
			break;
		case 3:                        //reload menu - 3
			logoX = 500;
			logoY = -100;
			first = true;
			window.clear(Color::Black);
			mode = 0;
			break;

		case 404:
			if (Keyboard::isKeyPressed(Keyboard::Enter))
			{
				mode = 3;
			}
			window.clear(Color::Green);
			window.draw(wintext);
			window.draw(entertext);
			window.display();
			break;

		case 60:
			if (Keyboard::isKeyPressed(Keyboard::Enter))
			{
				mode = 3;
			}
			window.clear(Color::Red);
			window.draw(losetext);
			window.draw(entertext);
			window.display();
			break;
		}
	}
	return 0;
}