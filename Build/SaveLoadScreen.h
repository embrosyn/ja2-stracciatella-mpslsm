#ifndef _SAVE_LOAD_SCREEN__H_
#define _SAVE_LOAD_SCREEN__H_

#include <string>
#include <vector>

#include "JA2Types.h"
#include "MessageBoxScreen.h"
#include "ScreenIDs.h"


#define		NUM_SAVE_GAMES											11


extern std::vector<std::string> saveGames;
extern INT16 sNumSaveGames,
			 sSaveBeginIndex, 
			 sSaveEndIndex;

//This flag is used to diferentiate between loading a game and saveing a game.
// gfSaveGame=TRUE		For saving a game
// gfSaveGame=FALSE		For loading a game
extern BOOLEAN gfSaveGame;

extern	BOOLEAN			gfCameDirectlyFromGame;

ScreenID SaveLoadScreenHandle(void);

void DoSaveLoadMessageBox(wchar_t const* zString, ScreenID uiExitScreen, MessageBoxFlags, MSGBOX_CALLBACK ReturnCallback);

void DoQuickSave(void);
void DoQuickLoad(void);

bool AreThereAnySavedGameFiles();

void DeleteSaveGameNumber(UINT8 save_slot_id);

#if defined JA2BETAVERSION
void ErrorDetectedInSaveCallback(MessageBoxReturnValue);
#endif

#endif
