StarreHarborLighthouse_MapScripts::
# 2 "data/maps/StarreHarborLighthouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, StarreHarborLighthouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

StarreHarborLighthouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/StarreHarborLighthouse/scripts.pory"
	map_script_2 VAR_STARRE_HARBOR_STATE, 0, StarreHarborLighthouse_EventScript_SettlingIn
	.2byte 0


StarreHarborLighthouse_EventScript_SettlingIn::
# 10 "data/maps/StarreHarborLighthouse/scripts.pory"
	lockall
# 11 "data/maps/StarreHarborLighthouse/scripts.pory"
	setvar VAR_STARRE_HARBOR_STATE, 1
# 12 "data/maps/StarreHarborLighthouse/scripts.pory"
	msgbox StartAdventure
# 13 "data/maps/StarreHarborLighthouse/scripts.pory"
	special SpawnCameraObject
# 14 "data/maps/StarreHarborLighthouse/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CamToMother
# 15 "data/maps/StarreHarborLighthouse/scripts.pory"
	waitmovement 0
# 16 "data/maps/StarreHarborLighthouse/scripts.pory"
	applymovement 1, MotherApproach
# 17 "data/maps/StarreHarborLighthouse/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MotherApproach
# 18 "data/maps/StarreHarborLighthouse/scripts.pory"
	waitmovement 0
# 19 "data/maps/StarreHarborLighthouse/scripts.pory"
	msgbox IKnow
# 20 "data/maps/StarreHarborLighthouse/scripts.pory"
	applymovement 1, MotherLeave
# 21 "data/maps/StarreHarborLighthouse/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MotherLeave
# 22 "data/maps/StarreHarborLighthouse/scripts.pory"
	waitmovement 0
# 23 "data/maps/StarreHarborLighthouse/scripts.pory"
	opendoor 11, 8
# 24 "data/maps/StarreHarborLighthouse/scripts.pory"
	waitdooranim
# 25 "data/maps/StarreHarborLighthouse/scripts.pory"
	applymovement 1, EnterDoor
# 26 "data/maps/StarreHarborLighthouse/scripts.pory"
	waitmovement 0
# 27 "data/maps/StarreHarborLighthouse/scripts.pory"
	removeobject 1
# 28 "data/maps/StarreHarborLighthouse/scripts.pory"
	closedoor 11, 8
# 29 "data/maps/StarreHarborLighthouse/scripts.pory"
	waitdooranim
# 30 "data/maps/StarreHarborLighthouse/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BackToPlayer
# 31 "data/maps/StarreHarborLighthouse/scripts.pory"
	waitmovement 0
# 32 "data/maps/StarreHarborLighthouse/scripts.pory"
	special RemoveCameraObject
# 33 "data/maps/StarreHarborLighthouse/scripts.pory"
	setflag FLAG_SETTLING_IN
# 34 "data/maps/StarreHarborLighthouse/scripts.pory"
	releaseall
	return


# 56 "data/maps/StarreHarborLighthouse/scripts.pory"
MotherApproach:
# 57 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_down
# 57 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_down
# 58 "data/maps/StarreHarborLighthouse/scripts.pory"
	face_left
# 59 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_left
# 59 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_left
# 59 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_left
# 59 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_left
# 60 "data/maps/StarreHarborLighthouse/scripts.pory"
	face_down
# 61 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_down
# 61 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_down
# 61 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_down
# 62 "data/maps/StarreHarborLighthouse/scripts.pory"
	face_right
# 63 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_right
# 63 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_right
# 63 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_right
# 63 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_right
# 63 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_right
	step_end

# 66 "data/maps/StarreHarborLighthouse/scripts.pory"
MotherLeave:
# 67 "data/maps/StarreHarborLighthouse/scripts.pory"
	face_left
# 68 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_left
# 68 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_left
# 68 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_left
# 68 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_left
# 68 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_left
# 69 "data/maps/StarreHarborLighthouse/scripts.pory"
	face_up
# 70 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_up
# 70 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_up
# 70 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_up
# 71 "data/maps/StarreHarborLighthouse/scripts.pory"
	face_right
# 72 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_right
# 72 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_right
# 72 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_right
# 72 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_right
# 73 "data/maps/StarreHarborLighthouse/scripts.pory"
	face_up
# 74 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_up
# 74 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_up
	step_end

# 77 "data/maps/StarreHarborLighthouse/scripts.pory"
EnterDoor:
# 78 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_up
	step_end

# 81 "data/maps/StarreHarborLighthouse/scripts.pory"
CamToMother:
# 82 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_up
# 82 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_up
# 82 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_up
# 83 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_diag_northwest
# 83 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_diag_northwest
	step_end

# 86 "data/maps/StarreHarborLighthouse/scripts.pory"
BackToPlayer:
# 87 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_diag_southeast
# 87 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_diag_southeast
# 88 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_down
# 88 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_down
# 88 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_down
# 88 "data/maps/StarreHarborLighthouse/scripts.pory"
	walk_down
	step_end

StarreHarbor_Lighthouse_EventScript_DadMovingIn::
# 92 "data/maps/StarreHarborLighthouse/scripts.pory"
	lockall
# 93 "data/maps/StarreHarborLighthouse/scripts.pory"
	msgbox DadMoveIn
# 94 "data/maps/StarreHarborLighthouse/scripts.pory"
	releaseall
	return


StarreHarbor_Lighthouse_EventScript_MovingBoxes::
# 104 "data/maps/StarreHarborLighthouse/scripts.pory"
	lockall
# 105 "data/maps/StarreHarborLighthouse/scripts.pory"
	faceplayer
# 106 "data/maps/StarreHarborLighthouse/scripts.pory"
	msgbox StarreHarbor_Lighthouse_EventScript_MovingBoxes_Text_0
# 107 "data/maps/StarreHarborLighthouse/scripts.pory"
	releaseall
	return


StarreHarbor_Lighthouse_EventScript_MovingBoxes_Text_0:
# 106 "data/maps/StarreHarborLighthouse/scripts.pory"
	.string "This looks like the last of the things.$"

StartAdventure::
# 37 "data/maps/StarreHarborLighthouse/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "Mom: There you are! I've been wondering\n"
	.string "where you snuck off to.$"

IKnow::
# 44 "data/maps/StarreHarborLighthouse/scripts.pory"
	.string "I know it's hard now that your \n"
	.string "grandfather has passed.\p"
	.string "And now our family has moved here so we\n"
	.string "can take over care of the lighthouse.\p"
	.string "But I promise things will get better...\p"
	.string "...\p"
	.string "I tell you what, I just got your clock\n"
	.string "installed. Why don't you come inside\l"
	.string "and set it up?$"

DadMoveIn::
# 97 "data/maps/StarreHarborLighthouse/scripts.pory"
	.string "Hey, {PLAYER}! I'll be inside in\n"
	.string "just a moment.\p"
	.string "Now where did I put that...$"
