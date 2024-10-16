import pygame
from random import randint
from characters import frog, castle, archer, drago, ghost, butterfly, princess, bad_ghost, shop_buttons, Intersect, arrow, fireball, arrow2, fireball2
coordinats=(0, 0)

hp=1500
all_sprites_list=pygame.sprite.Group()
menu=1
blue1=(98,193,208)
number=0
elixir_color=[0,201,208]
end=0
elixir_image=pygame.image.load("Pictures/characters/eliksir.png")
elixir_max=50
elixir_update=35
elixir_speed=1
elixir=0
pos=(50,75)
background_position=(0, 0)
castle1_position=(850, -35)
castle2_position=(-590, -300)
Blue=[20,208,205]
black=(0, 0, 0)
fps=60
fpsClock=pygame.time.Clock()
width, height = 1366, 768
screen = pygame.display.set_mode((width, height))
green = (67,208,20)
pygame.display.set_caption('Castle clash')
timer=10000
a=0
done=False
upgrades=pygame.image.load('Pictures/characters/upgrades_menu.png')

blue2=(135,192,208)

frog_speed=1.7
archer_speed=1.5
drago_speed=1.3
ghost_speed=1.9



upgrade_hp=pygame.image.load('Pictures/characters/boost_hp1.png')
upgrade_damage=pygame.image.load('Pictures/characters/boost_damage1.png')
upgrade_hp1=0
upgrade_damage1=0

difficult1=pygame.image.load('Pictures/characters/difficult_button1.png')
difficult2=pygame.image.load('Pictures/characters/difficult_button2.png')
difficult3=pygame.image.load('Pictures/characters/difficult_button3.png')

background_image = pygame.image.load("Pictures/background2.jpg").convert()
ghost_range=600
pygame.init()

bot_cooldown_default=0
upgrade_speed1=0
upgrade_range=0

fireball2=fireball2()
arrow2=arrow2()
frog1=frog()
archer1=archer()
drago1=drago()
ghost1=ghost()
princess1=princess()
butterfly1=butterfly()
bad_ghost1=bad_ghost()
menu1=0
arrow1=arrow()
button1=shop_buttons(50, 1)
button2=shop_buttons(200, 2)
button3=shop_buttons(500, 3)
button4=shop_buttons(850, 4)
pers=0
upgrade_menu=0
frog_live=0
archer_live=0
upgrade_range=pygame.image.load('Pictures/characters/boost_range1.png')
drago_live=0
ghost_live=0
arrow_live=0
fireball_live=0
spawned=0
spawned1=0
arrow2_live=0
princess_live=0
butterfly_live=0
bad_ghost_live=0
costume2=1
timer2=10000
timer3=10000
timer4=10000
timer5=10000
timer6=10000
timer7=10000
LolY=-50
AntonyY=-50
presentY=868
logo=pygame.image.load('Pictures/characters/logo.png')
timer8=10000
timer9=10000
timer10=10000
timer11=10
timer12=10
timer13=10000
timer14=10000
attack=0
green=(56, 209, 94)
orange=(208,181,29)
bot_cooldown=10
drago_speed=1.3
castle1=castle(1000, 1)
castle2=castle(1000, 2)
font=pygame.font.Font('freesansbold.ttf',15)
font1 = pygame.font.Font('Pictures/MysteryQuest-Regular.ttf', 150)
Lol=font1.render('Lol', True, black)
Antony=font1.render('Antony', True, black)
present=font1.render('present', True, black)
costume=0
fireball2_live=0
different='hard'
started=0
upgrade=pygame.image.load("Pictures/characters/upgrades.png")
upgrade_speed=pygame.image.load("Pictures/characters/boost_speed1.png")
upgrade_range=pygame.image.load("Pictures/characters/boost_range1.png")
back=pygame.image.load("Pictures/characters/back.png")
upgrade_range1=0
started=0
nach=1
playbutton=pygame.image.load("Pictures/characters/game_button.png")
settingsbutton=pygame.image.load("Pictures/characters/settings_button.png")
exitbutton=pygame.image.load("Pictures/characters/exit_button.png")
logoY=-700
playbuttonY=-500
settingsbuttonY=-300
exitbuttonY=-100
def shoot():
    global timer4, timer5, arrow_live
    if timer4 <= 1:
        archer1.image = pygame.image.load("Pictures/characters/archer2.png")
        timer4 = 10000
        if timer5 <= 1:
            archer1.image = pygame.image.load("Pictures/characters/archer3.png")
            arrow1.spawn(archer1.x + 35, archer1.y + 75)
            arrow_live = 1
            timer5 = 10000
        else:
            timer5 -= 1000
    else:
        timer4 -= 1000

def shoot2():
    global timer9, timer10, arrow2_live
    if timer9 <= 1:
        princess1.image = pygame.image.load("Pictures/characters/princess2.png")
        timer9 = 10000
        if timer10 <= 1:
            princess1.image = pygame.image.load("Pictures/characters/princess3.png")
            arrow2.spawn(princess1.x - 35, princess1.y + 75)
            arrow2_live = 1
            timer10 = 10000
        else:
            timer10 -= 1000
    else:
        timer9 -= 1000



def fireball_shoot():
    global timer7, timer8, fireball_live
    if timer7 <= 1:
        timer7 = 10000
        ghost1.image = pygame.image.load("Pictures/characters/ghost2.png")
        if timer8 <= 1:
            ghost1.image = pygame.image.load("Pictures/characters/ghost4.png")
            fireball1.spawn(ghost1.x + 110, ghost1.y + 70)
            fireball_live = 1
            timer8 = 10000
        else:
            timer8 -= 1000
    else:
        timer7 -= 1000


def fireball_shoot1():
    global timer13, timer14, fireball2_live
    if timer13 <= 1:
        timer13 = 10000
        bad_ghost1.image = pygame.image.load("Pictures/characters/bad_ghost1.png")
        if timer14 <= 1:
            bad_ghost1.image = pygame.image.load("Pictures/characters/bad_ghost2.png")
            fireball2.spawn(bad_ghost1.x - 110, bad_ghost1.y + 70)
            fireball2_live = 1
            timer14 = 10000
        else:
            timer14 -= 1000
    else:
        timer13 -= 1000

fireball1=fireball()

frog_hp=50
archer_hp=100
drago_hp=300
ghost_hp=500



upgrade_damage1=0
upgrade_damage=pygame.image.load("Pictures/characters/boost_damage1.png")
frog_damage=25
archer_damage=35
drago_damage=50
ghost_damage=50
timer15=100000



def bot():
    global different, bot_cooldown, butterfly_live, princess_live, bad_ghost_live, started, bot_cooldown_default,pers, upgrade_speed
    if started==0:
        if different=='easy':
            bot_cooldown_default=3
            bot_cooldown=5
            started=1
            pers = randint(0, 2)
        if different=='medium':
            bot_cooldown_default=1.5
            bot_cooldown=3.5
            started=1
            pers = randint(0, 2)
        if different=='hard':
            bot_cooldown_default=0.5
            bot_cooldown=2
            started=1
            pers = randint(0, 2)
    if bot_cooldown<=0:
        pers = randint(0, 2)
        bot_cooldown = bot_cooldown_default
        if pers==0:
            if butterfly_live==0:
                butterfly_live=1
                butterfly1.x = 1300
                butterfly1.y = 350
                butterfly1.hp = 100
                bot_cooldown = bot_cooldown_default
            else:
                bot_cooldown = bot_cooldown_default
        elif pers==1:
            if princess_live==0:
                princess_live=1
                princess1.x = 1300
                princess1.y = 285
                princess1.hp = 100
                bot_cooldown = bot_cooldown_default
            else:
                bot_cooldown = bot_cooldown_default
        elif pers==2:
            if bad_ghost_live==0:
                bad_ghost_live=1
                bad_ghost1.x = 1300
                bad_ghost1.y = 280
                bad_ghost1.hp = 500
                bot_cooldown = bot_cooldown_default
            else:
                bot_cooldown = bot_cooldown_default
    bot_cooldown-=0.009
nach=1
green1=(49,208,136)
difficult='None'
def game():
    global elixir, frog_live, frog_spawned, archer_live, archer_spawned, drago_live, drago_spawned, ghost_live, ghost_spawned, a, timer, timer2, timer3, princess_live, timer4, timer5, elixir, arrow_live, costume, timer6, spawned, spawned1, fireball_live, arrow2_live, timer11, timer12, costume2, butterfly_live, fireball2_live, bad_ghost_live, bot_cooldown_default, ghost_range, drago_speed, upgrade, upgrade_menu, upgrades, upgrade_range, upgrade_speed, upgrade_range1, upgrade_range, frog_speed, archer_speed, drago_speed, ghost_speed, frog_hp, archer_hp, drago_hp, ghost_hp, upgrade_damage, upgrade_damage1
    screen.blit(background_image, background_position)
    screen.blit(elixir_image, (1151,550))
    text=font.render(str(int(elixir)), True, elixir_color)
    screen.blit(text, (1221, 652))
    screen.blit(button1.image, (button1.x, button1.y))
    screen.blit(button2.image, (button2.x, button2.y))
    screen.blit(button3.image, (button3.x, button3.y))
    screen.blit(button4.image, (button4.x, button4.y))
    textSurface = font.render((str(pos)), True, black)
    screen.blit(castle1.image, (castle1.x, castle1.y))
    screen.blit(castle2.image, (castle2.x, castle2.y))

    if bad_ghost1.hp<=0:
        bad_ghost_live = 0
        bad_ghost1.x = 10000
        bad_ghost1.y = 10000
    if butterfly1.hp<=0:
        butterfly_live = 0
        butterfly1.x = 10000
        butterfly1.y = 10000
    if princess1.hp<=0:
        princess_live=0
        princess1.x=10000
        princess1.y=10000
    if archer1.hp<=0:
        archer_live=0
        archer1.x=10000
        archer1.y=10000
        button2.image=pygame.image.load('Pictures/characters/shop2.png')
    if frog1.hp<=0:
        frog_live=0
        frog1.x=10000
        frog1.y=10000
        button1.image=pygame.image.load('Pictures/characters/shop1.png')
    if drago1.hp<=0:
        drago_live=0
        drago1.x=10000
        drago1.y=10000
        button3.image=pygame.image.load('Pictures/characters/shop3.png')
    if ghost1.hp<=0:
        ghost_live=0
        ghost1.x=10000
        ghost1.y=10000
        button4.image=pygame.image.load('Pictures/characters/shop4.png')
    if frog_live==1 and frog1.hp>1:
        frog_hp=font.render(str(frog1.hp), True, black)
        screen.blit(frog_hp, (188, 629))
        screen.blit(frog1.image, (frog1.x, frog1.y))
        if Intersect(frog1.x, princess1.x, 180)==0:
            if Intersect(frog1.x, butterfly1.x, 180) == 0:
                if Intersect(frog1.x, bad_ghost1.x, 180) == 0:
                    if Intersect(frog1.x, castle2.x, 140) == 0:
                        frog1.image = pygame.image.load("Pictures/characters/frog1.png")
                        frog1.x += frog_speed
                        if frog1.y < 370:
                            frog1.y += 2
                        else:
                            frog1.y -= 35
                    else:
                        if timer3<=1:
                            frog1.y=370
                            frog1.image=pygame.image.load("Pictures/characters/frog2.png")
                            castle2.hp-=frog_damage
                            timer3=50000
                        else:
                            if timer3<5000:
                                frog1.image=pygame.image.load("Pictures/characters/frog1.png")
                            timer3-=1000
                else:
                    if timer3 <= 1:
                        frog1.y = 370
                        frog1.image = pygame.image.load("Pictures/characters/frog2.png")
                        bad_ghost1.hp -= frog_damage
                        timer3 = 50000
                    else:
                        if timer3 < 5000:
                            frog1.image = pygame.image.load("Pictures/characters/frog1.png")
                        timer3 -= 1000
            else:
                if timer3 <= 1:
                    frog1.y = 370
                    frog1.image = pygame.image.load("Pictures/characters/frog2.png")
                    butterfly1.hp -= frog_damage
                    timer3 = 50000
                else:
                    if timer3 < 5000:
                        frog1.image = pygame.image.load("Pictures/characters/frog1.png")
                    timer3 -= 1000
        else:
            if timer3 <= 1:
                frog1.y = 370
                frog1.image = pygame.image.load("Pictures/characters/frog2.png")
                princess1.hp -= frog_damage
                timer3 = 50000
            else:
                if timer3 < 5000:
                    frog1.image = pygame.image.load("Pictures/characters/frog1.png")
                timer3 -= 1000
    else:
        frog_live=0




    if archer_live==1 and archer1.hp>1:
        archer_hp=font.render(str(archer1.hp), True, black)
        screen.blit(archer_hp, (462, 626))
        screen.blit(archer1.image, (archer1.x, archer1.y))

        if Intersect(archer1.x, princess1.x, ghost_range) == 0:
            if Intersect(archer1.x, butterfly1.x, ghost_range) == 0:
                if Intersect(archer1.x, bad_ghost1.x, ghost_range) == 0:
                    if Intersect(archer1.x, castle2.x, ghost_range) == 0:
                        archer1.x += archer_speed
                        archer1.image = pygame.image.load("Pictures/characters/archer1.png")
                    else:
                        shoot()
                else:
                    shoot()

            else:
                shoot()
        else:
            shoot()






    if drago_live==1 and drago1.hp>1:
        drago_hp=font.render(str(drago1.hp), True, black)
        screen.blit(drago_hp, (739, 628))
        screen.blit(drago1.image, (drago1.x, drago1.y))

        if Intersect(drago1.x, princess1.x, 200) == 0:
            if Intersect(drago1.x, butterfly1.x, 200) == 0:
                if Intersect(drago1.x, bad_ghost1.x, 200) == 0:
                    if Intersect(drago1.x, castle2.x, 100) == 0:
                        if timer < 0:
                            if costume==1:
                                drago1.image = pygame.image.load("Pictures/characters/dino2.png")
                                costume=0
                            else:
                                drago1.image = pygame.image.load("Pictures/characters/dino1.png")
                                costume=1
                            timer = 10000
                        else:
                            timer -= 1000
                        drago1.x += drago_speed
                    else:
                        if timer6<=1:
                            if costume==1:
                                drago1.image=pygame.image.load("Pictures/characters/dino4.png")
                            else:
                                drago1.image=pygame.image.load("Pictures/characters/dino3.png")
                            castle2.hp-=drago_damage
                            timer6=50000
                        else:
                            if timer6 < 5000:
                                if costume==1:
                                    drago1.image=pygame.image.load("Pictures/characters/dino2.png")
                                else:
                                    drago1.image=pygame.image.load("Pictures/characters/dino1.png")
                            timer6 -= 1000
                else:
                    if timer6 <= 1:
                        if costume == 1:
                            drago1.image= pygame.image.load("Pictures/characters/dino4.png")
                        else:
                            drago1.image= pygame.image.load("Pictures/characters/dino3.png")
                        bad_ghost1.hp -= drago_damage
                        timer6 = 50000
                    else:
                        if timer6 < 5000:
                            if costume == 1:
                                drago1.image = pygame.image.load("Pictures/characters/dino2.png")
                            else:
                                drago1.image = pygame.image.load("Pictures/characters/dino1.png")
                        timer6 -= 1000
            else:
                if timer6 <= 1:
                    if costume == 1:
                        drago1.image= pygame.image.load("Pictures/characters/dino4.png")
                    else:
                        drago1.imag= pygame.image.load("Pictures/characters/dino3.png")
                    butterfly1.hp -= drago_damage
                    timer6 = 50000
                else:
                    if timer6 < 5000:
                        if costume == 1:
                            drago1.image = pygame.image.load("Pictures/characters/dino2.png")
                        else:
                            drago1.image = pygame.image.load("Pictures/characters/dino1.png")
                    timer6 -= 1000
        else:
            if timer6 <= 1:
                if costume == 1:
                    drago1.image= pygame.image.load("Pictures/characters/dino4.png")
                else:
                    drago1.image= pygame.image.load("Pictures/characters/dino3.png")
                princess1.hp -= drago_damage
                timer6 = 50000
            else:
                if timer6 < 5000:
                    if costume == 1:
                        drago1.image = pygame.image.load("Pictures/characters/dino2.png")
                    else:
                        drago1.image = pygame.image.load("Pictures/characters/dino1.png")
                timer6 -= 1000






    else:
        drago_live = 0



    if ghost_live==1 and ghost1.hp>1:
        ghost_hp=font.render(str(ghost1.hp), True, black)
        screen.blit(ghost_hp, (1018, 630))
        screen.blit(ghost1.image, (ghost1.x, ghost1.y))
        if Intersect(ghost1.x, princess1.x, ghost_range) == 0:
            if Intersect(ghost1.x, butterfly1.x, ghost_range) == 0:
                if Intersect(ghost1.x, bad_ghost1.x, ghost_range) == 0:
                    if Intersect(ghost1.x, castle2.x, ghost_range) == 0:
                        ghost1.x += ghost_speed
                        ghost1.image = pygame.image.load("Pictures/characters/ghost1.png")
                    else:
                        fireball_shoot()
                else:
                    fireball_shoot()

            else:
                fireball_shoot()
        else:
            fireball_shoot()





    if princess_live==1 and princess1.hp>1:
        princess_hp=font.render(str(princess1.hp), True, black)
        screen.blit(princess_hp, (princess1.x+68, 240))
        screen.blit(princess1.image, (princess1.x, princess1.y))
        if Intersect(princess1.x, archer1.x, 600) == 0:
            if Intersect(princess1.x, frog1.x, 600) == 0:
                if Intersect(princess1.x, drago1.x, 600) == 0:
                    if Intersect(princess1.x, ghost1.x, 600) == 0:
                        if Intersect(princess1.x, castle1.x, 600) == 0:
                            princess1.x -= 2
                            princess1.image = pygame.image.load("Pictures/characters/princess1.png")
                        else:
                            shoot2()
                    else:
                        shoot2()
                else:
                    shoot2()

            else:
                shoot2()
        else:
            shoot2()

    if butterfly_live==1 and butterfly1.hp>1:
        butterfly_hp=font.render(str(butterfly1.hp), True, black)
        screen.blit(butterfly_hp, (butterfly1.x+68, 240))
        screen.blit(butterfly1.image, (butterfly1.x, butterfly1.y))
        if Intersect(butterfly1.x, archer1.x, 150) == 0:
            if Intersect(butterfly1.x, frog1.x, 150) == 0:
                if Intersect(butterfly1.x, ghost1.x, 150) == 0:
                    if Intersect(butterfly1.x, drago1.x, 150) == 0:
                        if Intersect(butterfly1.x, castle1.x, 400) == 0:
                            butterfly1.x -= 2
                            if timer11<=1:
                                if attack==0:
                                    if costume2 == 0:
                                        butterfly1.image = pygame.image.load("Pictures/characters/butterfly1.png")
                                        costume2=1
                                        timer11=1000
                                    else:
                                        butterfly1.image = pygame.image.load("Pictures/characters/butterfly2.png")
                                        costume2=0
                                        timer11 = 1000
                            timer11-=100
                        else:
                            if timer12 <= 1:
                                butterfly1.image = pygame.image.load("Pictures/characters/butterfly3.png")
                                castle1.hp -= 25
                                timer12 = 50000
                            else:
                                if timer12 <= 5000:
                                    butterfly1.image = pygame.image.load("Pictures/characters/butterfly2.png")
                            timer12 -= 1000
                    else:
                        if timer12 <= 1:
                            butterfly1.image = pygame.image.load("Pictures/characters/butterfly3.png")
                            drago1.hp -= 25
                            timer12 = 50000
                        else:
                            if timer12 <= 5000:
                                butterfly1.image = pygame.image.load("Pictures/characters/butterfly2.png")
                        timer12 -= 1000
                else:
                    if timer12 <= 1:
                        butterfly1.image = pygame.image.load("Pictures/characters/butterfly3.png")
                        ghost1.hp -= 25
                        timer12 = 50000
                    else:
                        if timer12 <= 5000:
                            butterfly1.image = pygame.image.load("Pictures/characters/butterfly2.png")
                    timer12 -= 1000
            else:
                if timer12 <= 1:
                    butterfly1.image = pygame.image.load("Pictures/characters/butterfly3.png")
                    frog1.hp -= 25
                    timer12 = 50000
                else:
                    if timer12 <= 1:
                        butterfly1.image = pygame.image.load("Pictures/characters/butterfly2.png")
                timer12 -= 1000
        else:
            if timer12 <= 1:
                butterfly1.image = pygame.image.load("Pictures/characters/butterfly3.png")
                archer1.hp -= 25
                timer12 = 50000
            else:
                if timer12 < 5000:
                    butterfly1.image = pygame.image.load("Pictures/characters/butterfly2.png")
            timer12 -= 1000





    if arrow_live==1:
        screen.blit(arrow1.image, (arrow1.x, arrow1.y))
        if Intersect(arrow1.x, princess1.x, 100)==0:
            if Intersect(arrow1.x, butterfly1.x, 100) == 0:
                if Intersect(arrow1.x, bad_ghost1.x, 100) == 0:
                    if Intersect(arrow1.x, castle2.x, 100) == 0:
                        arrow1.x+=5
                    else:
                        castle2.hp-=archer_damage
                        arrow_live=0
                else:
                    bad_ghost1.hp-=archer_damage
                    arrow_live=0
            else:
                butterfly1.hp-=archer_damage
                arrow_live=0
        else:
            princess1.hp-=archer_damage
            arrow_live=0


    if arrow2_live==1:
        screen.blit(arrow2.image, (arrow2.x, arrow2.y))
        if Intersect(arrow2.x, archer1.x, 100)==0:
            if Intersect(arrow2.x, frog1.x, 100) == 0:
                if Intersect(arrow2.x, drago1.x, 100) == 0:
                    if Intersect(arrow2.x, ghost1.x, 100) == 0:
                        if Intersect(arrow2.x, castle1.x, 400) == 0:
                            arrow2.x-=5
                        else:
                            castle1.hp -= 25
                            arrow2_live = 0
                    else:
                        ghost1.hp-=25
                        arrow2_live=0
                else:
                    drago1.hp-=25
                    arrow2_live=0
            else:
                frog1.hp-=25
                arrow2_live=0
        else:
            archer1.hp-=25
            arrow2_live=0


    if fireball_live == 1:
        screen.blit(fireball1.image, (fireball1.x, fireball1.y))
        if Intersect(fireball1.x, princess1.x, 100) == 0:
            if Intersect(fireball1.x, butterfly1.x, 100) == 0:
                if Intersect(fireball1.x, bad_ghost1.x, 100) == 0:
                    if Intersect(fireball1.x, castle2.x, 35) == 0:
                        fireball1.x += 5
                    else:
                        castle2.hp -= ghost_damage
                        fireball_live = 0
                else:
                    bad_ghost1.hp -= ghost_damage
                    fireball_live = 0
            else:
                butterfly1.hp -= ghost_damage
                fireball_live = 0
        else:
            princess1.hp -= ghost_damage
            fireball_live = 0



    if fireball2_live == 1:
        screen.blit(fireball2.image, (fireball2.x, fireball2.y))
        if Intersect(fireball2.x, archer1.x, 100) == 0:
            if Intersect(fireball2.x, frog1.x, 100) == 0:
                if Intersect(fireball2.x, ghost1.x, 100) == 0:
                    if Intersect(fireball2.x, drago1.x, 100) == 0:
                        if Intersect(fireball2.x, castle1.x, 400) == 0:
                            fireball2.x-= 5
                        else:
                            castle1.hp-=50
                            fireball2_live = 0
                    else:
                        drago1.hp -= 50
                        fireball2_live = 0
                else:
                    ghost1.hp -= 50
                    fireball2_live = 0
            else:
                frog1.hp -= 50
                fireball2_live = 0
        else:
            archer1.hp -= 50
            fireball2_live = 0


    if bad_ghost_live==1 and bad_ghost1.hp>1:
        bad_ghost_hp=font.render(str(bad_ghost1.hp), True, black)
        screen.blit(bad_ghost_hp, (bad_ghost1.x+68, 240))
        screen.blit(bad_ghost1.image, (bad_ghost1.x, bad_ghost1.y))

        if Intersect(bad_ghost1.x, archer1.x, 600) == 0:
            if Intersect(bad_ghost1.x, frog1.x, 600) == 0:
                if Intersect(bad_ghost1.x, ghost1.x, 600) == 0:
                    if Intersect(bad_ghost1.x, drago1.x, 600) == 0:
                        if Intersect(bad_ghost1.x, castle1.x, 600) == 0:
                            bad_ghost1.x -= 2
                            bad_ghost1.image = pygame.image.load("Pictures/characters/bad_ghost1.png")
                        else:
                            fireball_shoot1()
                    else:
                        fireball_shoot1()
                else:
                    fireball_shoot1()

            else:
                fireball_shoot1()
        else:
            fireball_shoot1()
    if upgrade_menu==1:
        upgrades=pygame.image.load("Pictures/characters/upgrades_menu.png")
        screen.blit(upgrades, (320, 500))
        screen.blit(upgrade_range, (562, 519))
        screen.blit(upgrade_speed, (731, 519))
        screen.blit(upgrade_hp, (393, 519))
        screen.blit(upgrade_damage, (900, 519))






    screen.blit(upgrade, (545, 685))
    screen.blit(textSurface, pos)


while not done:
    fpsClock.tick(60)
    pos = pygame.mouse.get_pos()
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            done = True
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_ESCAPE:
                done = True
        if event.type == pygame.MOUSEBUTTONDOWN:
            if started == 1:
                if int(pos[0]) < 275 and int(pos[0]) > 135 and int(pos[1]) > 600 and int(pos[1]) < 678:
                    if event.button == 1:
                        if frog_live != 1:
                            if elixir > 49:
                                if upgrade_hp1 == 0:
                                    frog1.hp = 50
                                    frog_live = 1
                                    elixir -= 50
                                    frog1.x = 50
                                    frog1.y = 300
                                elif upgrade_hp1 == 1:
                                    frog1.hp = 75
                                    frog_live = 1
                                    elixir -= 50
                                    frog1.x = 50
                                    frog1.y = 300
                                elif upgrade_hp1 == 2:
                                    frog1.hp = 100
                                    frog_live = 1
                                    elixir -= 50
                                    frog1.x = 50
                                    frog1.y = 300
                                elif upgrade_hp1 == 3:
                                    frog1.hp = 125
                                    frog_live = 1
                                    elixir -= 50
                                    frog1.x = 50
                                    frog1.y = 300
                                button1.image = pygame.image.load("Pictures/characters/shop5.png")
                if int(pos[0]) < 552 and int(pos[0]) > 412 and int(pos[1]) > 600 and int(pos[1]) < 678:
                    if event.button == 1:
                        if archer_live != 1:
                            if elixir > 199:
                                archer_live = 1
                                elixir -= 200
                                archer1.x = 50
                                archer1.y = 285
                                if upgrade_hp1 == 0:
                                    archer1.hp = 100
                                elif upgrade_hp1 == 1:
                                    archer1.hp = 125
                                elif upgrade_hp1 == 2:
                                    archer1.hp = 140
                                elif upgrade_hp1 == 3:
                                    archer1.hp = 150
                                button2.image = pygame.image.load("Pictures/characters/shop5.png")
                if int(pos[0]) < 829 and int(pos[0]) > 689 and int(pos[1]) > 600 and int(pos[1]) < 678:
                    if event.button == 1:
                        if drago_live != 1:
                            if elixir > 500:
                                drago_live = 1
                                elixir -= 500
                                drago1.x = 50
                                drago1.y = 335
                                if upgrade_hp1 == 0:
                                    drago1.hp = 300
                                elif upgrade_hp1 == 1:
                                    drago1.hp = 335
                                elif upgrade_hp1 == 2:
                                    drago1.hp = 350
                                elif upgrade_hp1 == 3:
                                    drago1.hp = 375
                                button3.image = pygame.image.load("Pictures/characters/shop5.png")
                if int(pos[0]) < 1106 and int(pos[0]) > 966 and int(pos[1]) > 600 and int(pos[1]) < 678:
                    if event.button == 1:
                        if ghost_live != 1:
                            if elixir > 849:
                                ghost_live = 1
                                elixir -= 850
                                ghost1.x = 50
                                ghost1.y = 280
                                if upgrade_hp1 == 0:
                                    ghost1.hp = 500
                                elif upgrade_hp1 == 1:
                                    ghost1.hp = 525
                                elif upgrade_hp1 == 2:
                                    ghost1.hp = 550
                                elif upgrade_hp1 == 3:
                                    ghost1.hp = 575
                                button4.image = pygame.image.load("Pictures/characters/shop5.png")
                if int(pos[0]) < 1350 and int(pos[0]) > 1150 and int(pos[1]) > 550 and int(pos[1]) < 740:
                    if event.button == 1:
                        if elixir_max == 50 and elixir > 35:
                            elixir -= 35
                            elixir_max = 150
                            elixir_speed = 1.5
                        if elixir_max == 150 and elixir > 100:
                            elixir -= 100
                            elixir_max = 500
                            elixir_speed = 1.75
                        if elixir_max == 500 and elixir > 475:
                            elixir -= 475
                            elixir_max = 1000
                            elixir_speed = 2
                if int(pos[0]) < 693 and int(pos[0]) > 545 and int(pos[1]) > 685 and int(pos[1]) < 758:
                    if event.button == 1:
                        if upgrade_menu == 0:
                            upgrade_menu = 1
                            upgrade = pygame.image.load("Pictures/characters/close_upgrade.png")
                        else:
                            upgrade_menu = 0
                            upgrade = pygame.image.load("Pictures/characters/upgrades.png")
                if int(pos[0]) < 880 and int(pos[0]) > 731 and int(pos[1]) > 519 and int(pos[1]) < 593:
                    if event.button == 1:
                        if upgrade_speed1 == 0:
                            if elixir >= 250:
                                elixir -= 250
                                upgrade_speed = pygame.image.load("Pictures/characters/boost_speed2.png")
                                frog_speed = 1.9
                                archer_speed = 1.7
                                drago_speed = 1.5
                                ghost_speed = 2
                                upgrade_speed1 = 1
                        elif upgrade_speed1 == 1:
                            if elixir >= 500:
                                upgrade_speed = pygame.image.load("Pictures/characters/boost_speed3.png")
                                frog_speed = 2.2
                                archer_speed = 1.9
                                drago_speed = 1.8
                                ghost_speed = 2.25
                                upgrade_speed1 = 2
                                elixir -= 500
                        elif upgrade_speed1 == 2:
                            if elixir >= 1000:
                                upgrade_speed = pygame.image.load("Pictures/characters/boost_speed4.png")
                                frog_speed = 2.4
                                archer_speed = 2.1
                                drago_speed = 2.15
                                ghost_speed = 2.5
                                upgrade_speed1 = 3
                                elixir -= 1000
                if int(pos[0]) < 711 and int(pos[0]) > 561 and int(pos[1]) > 512 and int(pos[1]) < 592:
                    if event.button == 1:
                        if upgrade_range1 == 0:
                            if elixir >= 250:
                                elixir -= 250
                                upgrade_range = pygame.image.load("Pictures/characters/boost_range2.png")
                                ghost_range = 650
                                upgrade_range1 = 1
                        elif upgrade_range1 == 1:
                            if elixir >= 500:
                                upgrade_range = pygame.image.load("Pictures/characters/boost_range3.png")
                                ghost_range = 700
                                upgrade_range1 = 2
                                elixir -= 500
                        elif upgrade_range1 == 2:
                            if elixir >= 1000:
                                upgrade_range = pygame.image.load("Pictures/characters/boost_range4.png")
                                ghost_range = 750
                                upgrade_range1 = 3
                                elixir -= 1000

                if int(pos[0]) < 543 and int(pos[0]) > 393 and int(pos[1]) > 512 and int(pos[1]) < 592:
                    if event.button == 1:
                        if upgrade_hp1 == 0:
                            if elixir >= 250:
                                elixir -= 250
                                upgrade_hp = pygame.image.load("Pictures/characters/boost_hp2.png")
                                drago_hp = 320
                                ghost_hp = 520
                                upgrade_hp1 = 1
                        elif upgrade_hp1 == 1:
                            if elixir >= 500:
                                upgrade_hp = pygame.image.load("Pictures/characters/boost_hp3.png")
                                elixir -= 500
                                drago_hp = 350
                                ghost_hp = 550
                                upgrade_hp1 = 2
                        elif upgrade_hp1 == 2:
                            if elixir >= 1000:
                                upgrade_hp = pygame.image.load("Pictures/characters/boost_hp4.png")
                                drago_hp = 360
                                ghost_hp = 570
                                upgrade_hp1 = 3
                                elixir -= 1000
                if int(pos[0]) < 1050 and int(pos[0]) > 900 and int(pos[1]) > 512 and int(pos[1]) < 592:
                    if event.button == 1:
                        if upgrade_damage1 == 0:
                            if elixir >= 250:
                                elixir -= 250
                                frog_damage = 35
                                archer_damage = 45
                                drago_damage = 60
                                ghost_damage = 60
                                upgrade_damage1 = 1
                                upgrade_damage = pygame.image.load("Pictures/characters/boost_damage2.png")
                        elif upgrade_damage1 == 1:
                            if elixir >= 500:
                                upgrade_damage = pygame.image.load("Pictures/characters/boost_damage3.png")
                                elixir -= 500
                                frog_damage = 45
                                archer_damage = 55
                                drago_damage = 70
                                ghost_damage = 70
                                upgrade_damage1 = 2
                        elif upgrade_damage1 == 2:
                            if elixir >= 1000:
                                upgrade_damage = pygame.image.load("Pictures/characters/boost_damage4.png")
                                elixir -= 1000
                                frog_damage = 55
                                upgrade_damage1 = 3
                                archer_damage = 65
                                drago_damage = 80
                                ghost_damage = 80
            elif menu1 == 1:
                if int(pos[0]) < 882 and int(pos[0]) > 482 and int(pos[1]) > 199 and int(pos[1]) < 299:
                    if event.button == 1:
                        started = 1
                        nach = 0
                        menu = 0
                        menu1 = 0
                if int(pos[0]) < 882 and int(pos[0]) > 482 and int(pos[1]) > 401 and int(pos[1]) < 501:
                    if event.button == 1:
                        settings=1
                        menu1=0
                        menu=0
                        logoY=-700
                        playbuttonY=-500
                        settingsbuttonY=-300
                        exitbuttonY=-100
                if int(pos[0]) < 882 and int(pos[0]) > 482 and int(pos[1]) > 601 and int(pos[1]) < 701:
                    if event.button == 1:
                        pygame.quit()
            elif settings==1:
                menu1=0
                menu=0
                started=0
                if difficult=='easy':
                    difficult1=pygame.image.load('Pictures/characters/difficult_button12.png')
                else:
                    difficult1 = pygame.image.load('Pictures/characters/difficult_button1.png')
                if difficult=='medium':
                    difficult2=pygame.image.load('Pictures/characters/difficult_button21.png')
                else:
                    difficult2 = pygame.image.load('Pictures/characters/difficult_button2.png')
                if difficult=='hard':
                    difficult3=pygame.image.load('Pictures/characters/difficult_button31.png')
                else:
                    difficult3 = pygame.image.load('Pictures/characters/difficult_button3.png')
                if int(pos[0]) < 1350 and int(pos[0]) > 1050 and int(pos[1]) > 653 and int(pos[1]) < 753:
                    if event.button == 1:
                        settings=0
                        menu1=1
                        menu=1
                if int(pos[0]) < 1000 and int(pos[0]) > 700 and int(pos[1]) > 150 and int(pos[1]) < 200:
                    if event.button == 1:
                        difficult='easy'
                if int(pos[0]) < 1000 and int(pos[0]) > 700 and int(pos[1]) > 350 and int(pos[1]) < 400:
                    if event.button == 1:
                        difficult='medium'
                if int(pos[0]) < 1000 and int(pos[0]) > 700 and int(pos[1]) > 550 and int(pos[1]) < 600:
                    if event.button == 1:
                        difficult='hard'
    if started==1:
        game()
        bot()
        if elixir<elixir_max:
            elixir += 2
        else:
            elixir = elixir_max
        if castle2.hp<=0:
            screen.fill(green)
        elif castle1.hp<=0:
            screen.fill(orange)
    if nach==1:
        screen.fill(blue1)
        if timer15>1:

            screen.blit(Lol, (400, LolY))
            screen.blit(Antony, (550, AntonyY))
            screen.blit(present, (450, presentY))
            if LolY<200:
                LolY+=5
            if AntonyY<200:
                AntonyY+=5
            if presentY>400:
                presentY-=5
            timer15-=500
        else:
            menu=1
            menu1=1
            nach=0
    elif menu==1:
        screen.fill(blue2)
        if menu1==1:
            screen.blit(logo, (525, logoY))
            screen.blit(playbutton,(483, playbuttonY))
            screen.blit(settingsbutton, (483, settingsbuttonY))
            screen.blit(exitbutton, (483, exitbuttonY))
            if playbuttonY<200:
                logoY+=5
                playbuttonY+=5
                settingsbuttonY+=5
                exitbuttonY+=5
            else:
                if int(pos[0]) < 882 and int(pos[0]) > 482 and int(pos[1]) > 199 and int(pos[1]) < 299:
                    playbutton = pygame.image.load("Pictures/characters/game_button2.png")
                else:
                    playbutton = pygame.image.load("Pictures/characters/game_button.png")
                if int(pos[0]) < 882 and int(pos[0]) > 482 and int(pos[1]) > 401 and int(pos[1]) < 501:
                    settingsbutton = pygame.image.load("Pictures/characters/settings_button2.png")
                else:
                    settingsbutton = pygame.image.load("Pictures/characters/settings_button.png")
                if int(pos[0]) < 882 and int(pos[0]) > 482 and int(pos[1]) > 601 and int(pos[1]) < 701:
                    exitbutton = pygame.image.load("Pictures/characters/exit_button2.png")
                else:
                    exitbutton = pygame.image.load("Pictures/characters/exit_button.png")
    elif settings==1:
        screen.fill(green1)
        screen.blit(difficult1, (700, 150))
        screen.blit(difficult2, (700, 350))
        screen.blit(difficult3, (700, 550))
        screen.blit(back, (1050, 653))

    pygame.display.flip()




pygame.quit()