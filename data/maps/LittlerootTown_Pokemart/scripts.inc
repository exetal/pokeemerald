LittlerootTown_Pokemart_MapScripts::
	.byte 0


Littleroot_Mart_Employee::
# 6 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	lock
# 7 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	faceplayer
# 8 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	message Littleroot_Mart_Employee_Text_0
# 9 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	waitmessage
# 10 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	pokemart Littleroot_Mart
# 11 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	msgbox Littleroot_Mart_Employee_Text_1
# 12 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	release
	end


# 16 "data/maps/LittlerootTown_Pokemart/scripts.pory"

# 17 "data/maps/LittlerootTown_Pokemart/scripts.pory"

# 18 "data/maps/LittlerootTown_Pokemart/scripts.pory"
.align 2
# 19 "data/maps/LittlerootTown_Pokemart/scripts.pory"
Littleroot_Mart::
# 20 "data/maps/LittlerootTown_Pokemart/scripts.pory"
    .2byte ITEM_POTION
# 21 "data/maps/LittlerootTown_Pokemart/scripts.pory"
    .2byte ITEM_SUPER_POTION
# 22 "data/maps/LittlerootTown_Pokemart/scripts.pory"
    .2byte ITEM_HYPER_POTION
# 23 "data/maps/LittlerootTown_Pokemart/scripts.pory"
    .2byte ITEM_MAX_POTION
# 24 "data/maps/LittlerootTown_Pokemart/scripts.pory"
    .2byte ITEM_MACH_BIKE
# 25 "data/maps/LittlerootTown_Pokemart/scripts.pory"
    .2byte ITEM_MASTER_BALL
# 26 "data/maps/LittlerootTown_Pokemart/scripts.pory"
    .2byte ITEM_RARE_CANDY
# 27 "data/maps/LittlerootTown_Pokemart/scripts.pory"
    .2byte ITEM_NONE
# 28 "data/maps/LittlerootTown_Pokemart/scripts.pory"
    release
# 29 "data/maps/LittlerootTown_Pokemart/scripts.pory"
    end

Littleroot_Mart_Employee_Text_0:
# 8 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	.string "My potions are too strong for you \ntraveler?$"

Littleroot_Mart_Employee_Text_1:
# 11 "data/maps/LittlerootTown_Pokemart/scripts.pory"
	.string "Why respect knights, when my potions \ncan do anything you can?$"
