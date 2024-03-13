LittlerootTown_Pokecenter_MapScripts::
# 2 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LitterootTown_Pokecenter_OnTransition
# 3 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


LitterootTown_Pokecenter_OnTransition::
# 7 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN
	end


Pokecenter_Healer_Pro::
# 12 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	setvar VAR_0x800B, 1
# 13 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	waitmessage
# 15 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	release
	end


Pokecenter_Employee::
# 21 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	lock
# 22 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	faceplayer
# 23 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	msgbox Pokecenter_Employee_Text_0, MSGBOX_YESNO
# 24 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokecenter_Employee_1
# 33 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	msgbox Pokecenter_Employee_Text_2, MSGBOX_NPC
	return

Pokecenter_Employee_1:
# 25 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 26 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	special HealPlayerParty
# 27 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	msgbox Pokecenter_Employee_Text_1
# 28 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	waitmessage
# 29 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	release
	end


Pokecenter_Employee_Text_0:
# 23 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	.string "Would you like me to heal your party?$"

Pokecenter_Employee_Text_1:
# 27 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	.string "Come again soon.$"

Pokecenter_Employee_Text_2:
# 33 "data/maps/LittlerootTown_Pokecenter/scripts.pory"
	.string "Have a nice day.$"
