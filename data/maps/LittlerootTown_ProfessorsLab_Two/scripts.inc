LittlerootTown_ProfessorsLab_Two_MapScripts::
# 2 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_ProfessorsLab_Two_EventScript_BallDefault
	.byte 0


LittlerootTown_ProfessorsLab_Two_EventScript_BallDefault::
# 6 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	setvar STARTER_REGION, 0
	return


LittlerootTown_ProfessorsLab_Two_EventScript_ProfessorBirch::
# 10 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	goto_if_unset FLAG_SETTLING_IN, LittlerootTown_ProfessorsLab_Two_EventScript_ProfessorBirch_2
# 10 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	goto_if_set POKEBALL_TWO, LittlerootTown_ProfessorsLab_Two_EventScript_ProfessorBirch_2
# 10 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	goto_if_set POKEBALL_THREE, LittlerootTown_ProfessorsLab_Two_EventScript_ProfessorBirch_2
# 33 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_ProfessorBirch_Text_2, MSGBOX_NPC
LittlerootTown_ProfessorsLab_Two_EventScript_ProfessorBirch_1:
# 35 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	end

LittlerootTown_ProfessorsLab_Two_EventScript_ProfessorBirch_2:
# 11 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	lock
# 12 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	faceplayer
# 13 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	message LittlerootTown_ProfessorsLab_Two_EventScript_ProfessorBirch_Text_0
# 14 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	multichoice 25, 5, MULTI_STARTER_CHOICE, 1
# 15 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	closemessage
# 16 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_ProfessorBirch_10
# 20 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_ProfessorBirch_11
# 25 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call StarterAdjust
# 26 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	setVar STARTER_REGION, 2
LittlerootTown_ProfessorsLab_Two_EventScript_ProfessorBirch_9:
# 28 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_ProfessorBirch_Text_1
# 29 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	waitmessage
# 30 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	release
	goto LittlerootTown_ProfessorsLab_Two_EventScript_ProfessorBirch_1

LittlerootTown_ProfessorsLab_Two_EventScript_ProfessorBirch_10:
# 17 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call StarterAdjust
# 18 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	setVar STARTER_REGION, 0
	goto LittlerootTown_ProfessorsLab_Two_EventScript_ProfessorBirch_9

LittlerootTown_ProfessorsLab_Two_EventScript_ProfessorBirch_11:
# 21 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call StarterAdjust
# 22 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	setVar STARTER_REGION, 1
	goto LittlerootTown_ProfessorsLab_Two_EventScript_ProfessorBirch_9


StarterAdjust::
# 40 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	lockall
# 41 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveAway
# 42 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	applymovement 4, BirchStarterRoutine
# 43 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	waitmovement 0
# 44 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	delay 20
# 45 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox StarterAdjust_Text_0
	return


# 49 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
PlayerMoveAway:
# 50 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	face_up
# 51 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	walk_down
# 52 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	step_end

# 55 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
BirchStarterRoutine:
# 56 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	face_left
# 57 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	walk_left
# 58 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	face_up
# 59 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	delay_16
# 60 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	face_left
# 61 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	walk_left
# 62 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	face_up
# 63 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	delay_16
# 64 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	face_left
# 65 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	walk_left
# 66 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	face_up
# 67 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	delay_16
# 68 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	face_right
# 69 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	walk_right
# 69 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	walk_right
# 69 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	walk_right
# 70 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	face_down
# 71 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	step_end

LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne::
# 76 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	lockall
# 77 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	goto_if_unset FLAG_SETTLING_IN, LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne_4
LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne_3:
# 89 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne_Text_0
LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne_1:
# 91 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	waitmessage
# 92 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne_2:
# 78 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne_9
# 81 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne_10
# 84 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne_11
	goto LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne_1

LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne_4:
# 77 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	goto_if_unset POKEBALL_TWO, LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne_6
	goto LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne_3

LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne_6:
# 77 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	goto_if_unset POKEBALL_THREE, LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne_2
	goto LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne_3

LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne_9:
# 79 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call LittlerootTown_ProfessorsLab_Two_EventScript_Charmander
	goto LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne_1

LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne_10:
# 82 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call LittlerootTown_ProfessorsLab_Two_EventScript_Cyndaquil
	goto LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne_1

LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne_11:
# 85 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call LittlerootTown_ProfessorsLab_Two_EventScript_Torchic
	goto LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne_1


LittlerootTown_ProfessorsLab_Two_EventScript_PokeballTwo::
# 97 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	lockall
# 98 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	goto_if_unset FLAG_SETTLING_IN, LittlerootTown_ProfessorsLab_Two_EventScript_PokeballTwo_4
LittlerootTown_ProfessorsLab_Two_EventScript_PokeballTwo_3:
# 110 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne_Text_0
LittlerootTown_ProfessorsLab_Two_EventScript_PokeballTwo_1:
# 112 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	waitmessage
# 113 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorsLab_Two_EventScript_PokeballTwo_2:
# 99 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_PokeballTwo_9
# 102 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_PokeballTwo_10
# 105 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_PokeballTwo_11
	goto LittlerootTown_ProfessorsLab_Two_EventScript_PokeballTwo_1

LittlerootTown_ProfessorsLab_Two_EventScript_PokeballTwo_4:
# 98 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	goto_if_unset POKEBALL_TWO, LittlerootTown_ProfessorsLab_Two_EventScript_PokeballTwo_6
	goto LittlerootTown_ProfessorsLab_Two_EventScript_PokeballTwo_3

LittlerootTown_ProfessorsLab_Two_EventScript_PokeballTwo_6:
# 98 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	goto_if_unset POKEBALL_THREE, LittlerootTown_ProfessorsLab_Two_EventScript_PokeballTwo_2
	goto LittlerootTown_ProfessorsLab_Two_EventScript_PokeballTwo_3

LittlerootTown_ProfessorsLab_Two_EventScript_PokeballTwo_9:
# 100 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call LittlerootTown_ProfessorsLab_Two_EventScript_Squirtle
	goto LittlerootTown_ProfessorsLab_Two_EventScript_PokeballTwo_1

LittlerootTown_ProfessorsLab_Two_EventScript_PokeballTwo_10:
# 103 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call LittlerootTown_ProfessorsLab_Two_EventScript_Totodile
	goto LittlerootTown_ProfessorsLab_Two_EventScript_PokeballTwo_1

LittlerootTown_ProfessorsLab_Two_EventScript_PokeballTwo_11:
# 106 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call LittlerootTown_ProfessorsLab_Two_EventScript_Mudkip
	goto LittlerootTown_ProfessorsLab_Two_EventScript_PokeballTwo_1


LittlerootTown_ProfessorsLab_Two_EventScript_PokeballThree::
# 118 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	lockall
# 119 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	goto_if_unset FLAG_SETTLING_IN, LittlerootTown_ProfessorsLab_Two_EventScript_PokeballThree_4
LittlerootTown_ProfessorsLab_Two_EventScript_PokeballThree_3:
# 131 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne_Text_0
LittlerootTown_ProfessorsLab_Two_EventScript_PokeballThree_1:
# 133 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	waitmessage
# 134 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorsLab_Two_EventScript_PokeballThree_2:
# 120 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_PokeballThree_9
# 123 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_PokeballThree_10
# 126 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_PokeballThree_11
	goto LittlerootTown_ProfessorsLab_Two_EventScript_PokeballThree_1

LittlerootTown_ProfessorsLab_Two_EventScript_PokeballThree_4:
# 119 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	goto_if_unset POKEBALL_TWO, LittlerootTown_ProfessorsLab_Two_EventScript_PokeballThree_6
	goto LittlerootTown_ProfessorsLab_Two_EventScript_PokeballThree_3

LittlerootTown_ProfessorsLab_Two_EventScript_PokeballThree_6:
# 119 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	goto_if_unset POKEBALL_THREE, LittlerootTown_ProfessorsLab_Two_EventScript_PokeballThree_2
	goto LittlerootTown_ProfessorsLab_Two_EventScript_PokeballThree_3

LittlerootTown_ProfessorsLab_Two_EventScript_PokeballThree_9:
# 121 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call LittlerootTown_ProfessorsLab_Two_EventScript_Bulbasaur
	goto LittlerootTown_ProfessorsLab_Two_EventScript_PokeballThree_1

LittlerootTown_ProfessorsLab_Two_EventScript_PokeballThree_10:
# 124 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call LittlerootTown_ProfessorsLab_Two_EventScript_Chikorita
	goto LittlerootTown_ProfessorsLab_Two_EventScript_PokeballThree_1

LittlerootTown_ProfessorsLab_Two_EventScript_PokeballThree_11:
# 127 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call LittlerootTown_ProfessorsLab_Two_EventScript_Treecko
	goto LittlerootTown_ProfessorsLab_Two_EventScript_PokeballThree_1


LittlerootTown_ProfessorsLab_Two_EventScript_Charmander::
# 139 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	lockall
# 140 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 141 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_Text_0, MSGBOX_YESNO
# 142 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_2
# 161 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	hidemonpic
# 162 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox ProfessorsLab_NotChosen
LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_1:
# 164 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	waitmessage
# 165 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_2:
# 143 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	givemon SPECIES_CHARMANDER, 5, ITEM_MASTER_BALL
# 144 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_5
# 150 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_6
# 157 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	hidemonpic
# 158 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_Text_2
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_1

LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_5:
# 145 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 146 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_Text_1
# 147 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	removeobject 1
# 148 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	setflag FLAG_SETTLING_IN
# 149 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_1

LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_6:
# 151 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 152 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_Text_1
# 153 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	removeobject 1
# 154 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	setflag FLAG_SETTLING_IN
# 155 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_1


LittlerootTown_ProfessorsLab_Two_EventScript_Cyndaquil::
# 170 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	lockall
# 171 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 172 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Cyndaquil_Text_0, MSGBOX_YESNO
# 173 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Cyndaquil_2
# 192 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	hidemonpic
# 193 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox ProfessorsLab_NotChosen
LittlerootTown_ProfessorsLab_Two_EventScript_Cyndaquil_1:
# 195 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	waitmessage
# 196 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorsLab_Two_EventScript_Cyndaquil_2:
# 174 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5, ITEM_MASTER_BALL
# 175 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Cyndaquil_5
# 181 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Cyndaquil_6
# 188 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	hidemonpic
# 189 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_Text_2
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Cyndaquil_1

LittlerootTown_ProfessorsLab_Two_EventScript_Cyndaquil_5:
# 176 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 177 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Cyndaquil_Text_1
# 178 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	removeobject 1
# 179 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	setflag FLAG_SETTLING_IN
# 180 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Cyndaquil_1

LittlerootTown_ProfessorsLab_Two_EventScript_Cyndaquil_6:
# 182 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 183 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Cyndaquil_Text_1
# 184 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	removeobject 1
# 185 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	setflag FLAG_SETTLING_IN
# 186 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Cyndaquil_1


LittlerootTown_ProfessorsLab_Two_EventScript_Torchic::
# 201 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	lockall
# 202 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 203 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Torchic_Text_0, MSGBOX_YESNO
# 204 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Torchic_2
# 223 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	hidemonpic
# 224 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox ProfessorsLab_NotChosen
LittlerootTown_ProfessorsLab_Two_EventScript_Torchic_1:
# 226 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	waitmessage
# 227 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorsLab_Two_EventScript_Torchic_2:
# 205 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_MASTER_BALL
# 206 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Torchic_5
# 212 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Torchic_6
# 219 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	hidemonpic
# 220 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_Text_2
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Torchic_1

LittlerootTown_ProfessorsLab_Two_EventScript_Torchic_5:
# 207 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 208 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Torchic_Text_1
# 209 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	removeobject 1
# 210 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	setflag FLAG_SETTLING_IN
# 211 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Torchic_1

LittlerootTown_ProfessorsLab_Two_EventScript_Torchic_6:
# 213 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 214 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Torchic_Text_1
# 215 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	removeobject 1
# 216 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	setflag FLAG_SETTLING_IN
# 217 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Torchic_1


LittlerootTown_ProfessorsLab_Two_EventScript_Squirtle::
# 232 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	lockall
# 233 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 234 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Squirtle_Text_0, MSGBOX_YESNO
# 235 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Squirtle_2
# 254 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	hidemonpic
# 255 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox ProfessorsLab_NotChosen
LittlerootTown_ProfessorsLab_Two_EventScript_Squirtle_1:
# 257 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	waitmessage
# 258 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorsLab_Two_EventScript_Squirtle_2:
# 236 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5, ITEM_MASTER_BALL
# 237 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Squirtle_5
# 243 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Squirtle_6
# 250 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	hidemonpic
# 251 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_Text_2
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Squirtle_1

LittlerootTown_ProfessorsLab_Two_EventScript_Squirtle_5:
# 238 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 239 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Squirtle_Text_1
# 240 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	removeobject 2
# 241 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	setflag POKEBALL_TWO
# 242 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Squirtle_1

LittlerootTown_ProfessorsLab_Two_EventScript_Squirtle_6:
# 244 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 245 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Squirtle_Text_1
# 246 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	removeobject 2
# 247 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	setflag POKEBALL_TWO
# 248 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Squirtle_1


LittlerootTown_ProfessorsLab_Two_EventScript_Totodile::
# 263 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	lockall
# 264 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 265 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Totodile_Text_0, MSGBOX_YESNO
# 266 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Totodile_2
# 285 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	hidemonpic
# 286 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox ProfessorsLab_NotChosen
LittlerootTown_ProfessorsLab_Two_EventScript_Totodile_1:
# 288 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	waitmessage
# 289 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorsLab_Two_EventScript_Totodile_2:
# 267 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	givemon SPECIES_TOTODILE, 5, ITEM_MASTER_BALL
# 268 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Totodile_5
# 274 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Totodile_6
# 281 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	hidemonpic
# 282 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_Text_2
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Totodile_1

LittlerootTown_ProfessorsLab_Two_EventScript_Totodile_5:
# 269 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 270 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Totodile_Text_1
# 271 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	removeobject 2
# 272 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	setflag POKEBALL_TWO
# 273 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Totodile_1

LittlerootTown_ProfessorsLab_Two_EventScript_Totodile_6:
# 275 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 276 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Totodile_Text_1
# 277 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	removeobject 2
# 278 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	setflag POKEBALL_TWO
# 279 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Totodile_1


LittlerootTown_ProfessorsLab_Two_EventScript_Mudkip::
# 294 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	lockall
# 295 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 296 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Mudkip_Text_0, MSGBOX_YESNO
# 297 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Mudkip_2
# 316 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	hidemonpic
# 317 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox ProfessorsLab_NotChosen
LittlerootTown_ProfessorsLab_Two_EventScript_Mudkip_1:
# 319 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	waitmessage
# 320 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorsLab_Two_EventScript_Mudkip_2:
# 298 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	givemon SPECIES_MUDKIP, 5, ITEM_MASTER_BALL
# 299 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Mudkip_5
# 305 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Mudkip_6
# 312 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	hidemonpic
# 313 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_Text_2
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Mudkip_1

LittlerootTown_ProfessorsLab_Two_EventScript_Mudkip_5:
# 300 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 301 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Mudkip_Text_1
# 302 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	removeobject 2
# 303 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	setflag POKEBALL_TWO
# 304 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Mudkip_1

LittlerootTown_ProfessorsLab_Two_EventScript_Mudkip_6:
# 306 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 307 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Mudkip_Text_2
# 308 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	removeobject 2
# 309 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	setflag POKEBALL_TWO
# 310 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Mudkip_1


LittlerootTown_ProfessorsLab_Two_EventScript_Bulbasaur::
# 325 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	lockall
# 326 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 327 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Bulbasaur_Text_0, MSGBOX_YESNO
# 328 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Bulbasaur_2
# 347 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	hidemonpic
# 348 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox ProfessorsLab_NotChosen
LittlerootTown_ProfessorsLab_Two_EventScript_Bulbasaur_1:
# 350 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	waitmessage
# 351 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorsLab_Two_EventScript_Bulbasaur_2:
# 329 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	givemon SPECIES_BULBASAUR, 5, ITEM_MASTER_BALL
# 330 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Bulbasaur_5
# 336 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Bulbasaur_6
# 343 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	hidemonpic
# 344 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_Text_2
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Bulbasaur_1

LittlerootTown_ProfessorsLab_Two_EventScript_Bulbasaur_5:
# 331 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 332 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Bulbasaur_Text_1
# 333 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	removeobject 3
# 334 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	setflag POKEBALL_THREE
# 335 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Bulbasaur_1

LittlerootTown_ProfessorsLab_Two_EventScript_Bulbasaur_6:
# 337 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 338 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Bulbasaur_Text_1
# 339 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	removeobject 3
# 340 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	setflag POKEBALL_THREE
# 341 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Bulbasaur_1


LittlerootTown_ProfessorsLab_Two_EventScript_Chikorita::
# 356 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	lockall
# 357 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 358 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Chikorita_Text_0, MSGBOX_YESNO
# 359 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Chikorita_2
# 378 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	hidemonpic
# 379 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox ProfessorsLab_NotChosen
LittlerootTown_ProfessorsLab_Two_EventScript_Chikorita_1:
# 381 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	waitmessage
# 382 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorsLab_Two_EventScript_Chikorita_2:
# 360 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	givemon SPECIES_CHIKORITA, 5, ITEM_MASTER_BALL
# 361 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Chikorita_5
# 367 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Chikorita_6
# 374 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	hidemonpic
# 375 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_Text_2
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Chikorita_1

LittlerootTown_ProfessorsLab_Two_EventScript_Chikorita_5:
# 362 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 363 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Chikorita_Text_1
# 364 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	removeobject 3
# 365 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	setflag POKEBALL_THREE
# 366 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Chikorita_1

LittlerootTown_ProfessorsLab_Two_EventScript_Chikorita_6:
# 368 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 369 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Chikorita_Text_1
# 370 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	removeobject 3
# 371 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	setflag POKEBALL_THREE
# 372 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Chikorita_1


LittlerootTown_ProfessorsLab_Two_EventScript_Treecko::
# 387 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	lockall
# 388 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 389 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Treecko_Text_0, MSGBOX_YESNO
# 390 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Treecko_2
# 409 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	hidemonpic
# 410 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox ProfessorsLab_NotChosen
LittlerootTown_ProfessorsLab_Two_EventScript_Treecko_1:
# 412 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	waitmessage
# 413 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorsLab_Two_EventScript_Treecko_2:
# 391 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	givemon SPECIES_TREECKO, 5, ITEM_MASTER_BALL
# 392 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Treecko_5
# 398 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_ProfessorsLab_Two_EventScript_Treecko_6
# 405 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	hidemonpic
# 406 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_Text_2
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Treecko_1

LittlerootTown_ProfessorsLab_Two_EventScript_Treecko_5:
# 393 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 394 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Treecko_Text_1
# 395 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	removeobject 3
# 396 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	setflag POKEBALL_THREE
# 397 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Treecko_1

LittlerootTown_ProfessorsLab_Two_EventScript_Treecko_6:
# 399 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 400 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox LittlerootTown_ProfessorsLab_Two_EventScript_Treecko_Text_1
# 401 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	removeobject 3
# 402 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	setflag POKEBALL_THREE
# 403 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_ProfessorsLab_Two_EventScript_Treecko_1


NicknamePartyMon::
# 418 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 419 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	hidemonpic
# 420 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 421 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 422 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 427 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 428 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	hidemonpic
# 429 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 432 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 430 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


DontTouchThat::
# 440 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	lockall
# 441 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	msgbox DontTouchThat_Text_0
# 442 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveAwayFromThere
# 443 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	waitmovement 0
# 444 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	releaseall
	return


# 447 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
MoveAwayFromThere:
# 448 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	walk_left
# 448 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	walk_left
	step_end

LittlerootTown_ProfessorsLab_Two_EventScript_ProfessorBirch_Text_0:
# 13 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Would you like to see more?$"

LittlerootTown_ProfessorsLab_Two_EventScript_ProfessorBirch_Text_1:
# 28 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Choose wisely...$"

LittlerootTown_ProfessorsLab_Two_EventScript_ProfessorBirch_Text_2:
# 33 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Take good care of your Pokemon.$"

StarterAdjust_Text_0:
# 45 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Please choose a Pokemon.$"

LittlerootTown_ProfessorsLab_Two_EventScript_PokeballOne_Text_0:
# 89 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Do not take another Pokemon$"

LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_Text_0:
# 141 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Do you want to choose Charmander?$"

LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_Text_1:
# 146 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Recieved Charmander$"

LittlerootTown_ProfessorsLab_Two_EventScript_Charmander_Text_2:
# 158 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "You do not have room for another pokemon.$"

LittlerootTown_ProfessorsLab_Two_EventScript_Cyndaquil_Text_0:
# 172 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

LittlerootTown_ProfessorsLab_Two_EventScript_Cyndaquil_Text_1:
# 177 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Recieved Cyndaquil$"

LittlerootTown_ProfessorsLab_Two_EventScript_Torchic_Text_0:
# 203 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Do you want to choose Torchic?$"

LittlerootTown_ProfessorsLab_Two_EventScript_Torchic_Text_1:
# 208 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Recieved Torchic$"

LittlerootTown_ProfessorsLab_Two_EventScript_Squirtle_Text_0:
# 234 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Do you want to choose Squirtle?$"

LittlerootTown_ProfessorsLab_Two_EventScript_Squirtle_Text_1:
# 239 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Recieved Squirtle$"

LittlerootTown_ProfessorsLab_Two_EventScript_Totodile_Text_0:
# 265 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Do you want to choose Totodile?$"

LittlerootTown_ProfessorsLab_Two_EventScript_Totodile_Text_1:
# 270 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Recieved Totodile$"

LittlerootTown_ProfessorsLab_Two_EventScript_Mudkip_Text_0:
# 296 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Do you want to choose Mudkip?$"

LittlerootTown_ProfessorsLab_Two_EventScript_Mudkip_Text_1:
# 301 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Recieved Mudkip$"

LittlerootTown_ProfessorsLab_Two_EventScript_Mudkip_Text_2:
# 307 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Recieved MUDKIP$"

LittlerootTown_ProfessorsLab_Two_EventScript_Bulbasaur_Text_0:
# 327 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

LittlerootTown_ProfessorsLab_Two_EventScript_Bulbasaur_Text_1:
# 332 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Recieved Bulbasaur$"

LittlerootTown_ProfessorsLab_Two_EventScript_Chikorita_Text_0:
# 358 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Do you want to choose Chikorita?$"

LittlerootTown_ProfessorsLab_Two_EventScript_Chikorita_Text_1:
# 363 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Recieved Chikorita$"

LittlerootTown_ProfessorsLab_Two_EventScript_Treecko_Text_0:
# 389 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Do you want to choose Treecko?$"

LittlerootTown_ProfessorsLab_Two_EventScript_Treecko_Text_1:
# 394 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Recieved Treecko$"

NicknamePartyMon_Text_0:
# 418 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
# 432 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Transferred to PC$"

DontTouchThat_Text_0:
# 441 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "Don't touch that!$"

ProfessorsLab_NotChosen::
# 435 "data/maps/LittlerootTown_ProfessorsLab_Two/scripts.pory"
	.string "You did not choose the Pokemon.$"
