/******************************************************************************/
/* This file has been generated by the uGFX-Studio                            */
/*                                                                            */
/* http://ugfx.org                                                            */
/******************************************************************************/

#ifndef _GUI_H_
#define _GUI_H_

#include "gfx.h"

// GListeners
extern GListener glistener;

// GHandles
extern GHandle mainContainer;
extern GHandle dataContainer;
extern GHandle consoleContainer;
extern GHandle menuContainer;
extern GHandle mapContainer;
extern GHandle ghLabel1;
extern GHandle ghLabel2;
extern GHandle ghLabel3;
extern GHandle menuButton;

extern GHandle consoleWindow;
extern GHandle menuList;
extern GHandle returnButton;

extern GHandle mapWindow;

// Function Prototypes
void guiCreate(void);
void guiShowPage(unsigned pageIndex);
void guiEventLoop(void);

#endif /* _GUI_H_ */

