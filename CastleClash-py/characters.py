from pygame.sprite import Sprite
import pygame

live=True
black=[20,208,205]
width=10
height=10
image_drago=1
class frog(Sprite):
    def __init__(self):
        self.x=5000000
        self.y=300000000
        self.image = pygame.image.load("Pictures/characters/frog1.png")
        self.move_speed=7
        self.hp = 100



number=0

class castle(Sprite):
    def __init__(self, HP, number):
        if number==1:
            self.x=-230
            self.y=150
            self.hp=1000
            self.image= pygame.image.load("Pictures/castle1.png")
        elif number==2:
            self.x=1150
            self.y=130
            self.hp=HP
            self.image = pygame.image.load("Pictures/castle2.png")


class archer(Sprite):
    def __init__(self):
        self.x=5000000
        self.hp=125
        self.y=2850000000
        self.move_speed=5
        self.image = pygame.image.load("Pictures/characters/archer1.png")






class drago(Sprite):
    def __init__(self):
        self.x=10000
        self.y=10000
        self.hp=500
        self.move_speed=3
        self.image =pygame.image.load("Pictures/characters/dino1.png")





class ghost(Sprite):
    def __init__(self):
        self.hp=500
        self.x=1000000
        self.y=100000
        self.move_speed=4
        self.image = pygame.image.load("Pictures/characters/ghost1.png")


class butterfly(Sprite):
    def __init__(self):
        self.x=10000
        self.y=100000
        self.hp = 50
        self.image=pygame.image.load("Pictures/characters/butterfly1.png")
        self.move_speed=4



class princess(Sprite):
    def __init__(self):
        self.x=1000000000
        self.y=100000000
        self.hp=100
        self.move_speed=2
        self.image = pygame.image.load("Pictures/characters/princess1.png")



class bad_ghost(Sprite):
    def __init__(self):
        self.x=100000
        self.y=1000000
        self.hp = 500
        self.move_speed=4
        self.image = pygame.image.load("Pictures/characters/bad_ghost1.png")




class shop_buttons(Sprite):
    def __init__(self, cost, number):
        self.cost=cost
        if number==1:
            self.x=135
            self.y=600
            self.image=pygame.image.load("Pictures/characters/shop1.png")
        if number==2:
            self.x=412
            self.y=600
            self.image=pygame.image.load('Pictures/characters/shop2.png')
        if number==3:
            self.x=689
            self.y=600
            self.image=pygame.image.load('Pictures/characters/shop3.png')
        if number==4:
            self.x=966
            self.y=600
            self.image=pygame.image.load('Pictures/characters/shop4.png')

class arrow(Sprite):
    def __init__(self):
        self.image=pygame.image.load('Pictures/characters/arrow1.png')
    def spawn(self, x, y):
        self.x=x
        self.y=y




class arrow2(Sprite):
    def __init__(self):
        self.image=pygame.image.load('Pictures/characters/arrow2.png')
    def spawn(self, x, y):
        self.x=x
        self.y=y





class fireball(Sprite):
    def __init__(self):
        self.image=pygame.image.load('Pictures/characters/fireball.png')
    def spawn(self, x, y):
        self.x=x
        self.y=y



class fireball2(Sprite):
    def __init__(self):
        self.image=pygame.image.load('Pictures/characters/fireball2.png')
    def spawn(self, x, y):
        self.x=x
        self.y=y



def Intersect(x1, x2, width):
    if (x1 > x2-width) and (x1 < x2+width):
        return 1
    else:
        return 0