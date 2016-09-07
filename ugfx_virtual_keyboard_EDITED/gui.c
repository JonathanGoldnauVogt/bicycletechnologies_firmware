/******************************************************************************/
/* This file has been generated by the uGFX-Studio                            */
/*                                                                            */
/* http://ugfx.org                                                            */
/******************************************************************************/

#include "colors.h"
#include "widgetstyles.h"
#include "gui.h"

// GListeners
GListener glistener;

// GHandles
GHandle ghContainerPage0;
GHandle container1;
//GHandle container2;
GHandle container3;
GHandle containerlist;
GHandle ghKeyboard1;
GHandle ghLabel1;
GHandle ghLabel2;
GHandle ghLabel3;
GHandle ghButton1;
GHandle ghButton2;

GHandle console1;
GHandle ghList1;
GHandle buttonlist;

GHandle ghMapWindow;

// Fonts
font_t dejavu_sans_16;
font_t dejavu_sans_10;
font_t dejavu_sans_32_anti_aliased;
font_t dejavu_sans_12_anti_aliased;

static gdispImage myImage;
static gdispImage myImage2;
gdispImageError result;
int x = 0;
int y = 0;
static GDisplay* pixmap;
static pixel_t* surface;

void drawTile(int xx, int yy);


static void createPagePage0(void)
{
    
    
	GWidgetInit wi;
	gwinWidgetClearInit(&wi);


	// create container widget: ghContainerPage0
	wi.g.show = FALSE;
	wi.g.x = 0;
	wi.g.y = 0;
	wi.g.width = 800;
	wi.g.height = 480;
	wi.g.parent = 0;
	wi.text = "Container";
	wi.customDraw = 0;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghContainerPage0 = gwinContainerCreate(0, &wi, 0);
    
    //create map window
    gwinSetDefaultBgColor(red_studio);
    GWindowInit windowInitStruct;
    windowInitStruct.x = 305;
    windowInitStruct.y = 0;
    windowInitStruct.width = 495;
    windowInitStruct.height = 480;
    windowInitStruct.show = TRUE;
    windowInitStruct.parent = ghContainerPage0;
    
    ghMapWindow = gwinGWindowCreate(GDISP,NULL, &windowInitStruct);
    
    
				// create container widget: ghContainerPage0
	wi.g.show = TRUE;
	wi.g.x = 0;
	wi.g.y = 0;
	wi.g.width = 305;
	wi.g.height = 480;
	wi.g.parent = ghContainerPage0;
	wi.text = "Container";
	wi.customDraw = 0;
	wi.customParam = 0;
	wi.customStyle = 0;
	container1 = gwinContainerCreate(0, &wi, 0);
	
	/*			// create container widget: ghContainerPage0
	wi.g.show = FALSE;
	wi.g.x = 0;
	wi.g.y = 0;
	wi.g.width = 305;
	wi.g.height = 480;
	wi.g.parent = ghContainerPage0;
	wi.text = "Container";
	wi.customDraw = 0;
	wi.customParam = 0;
	wi.customStyle = 0;
	container2 = gwinContainerCreate(0, &wi, 0);
	*/
					// create container widget: ghContainerPage0
	wi.g.show = FALSE;
	wi.g.x = 305;
	wi.g.y = 0;
	wi.g.width = 495;
	wi.g.height = 480;
	wi.g.parent = ghContainerPage0;
	wi.text = "Container";
	wi.customDraw = 0;
	wi.customParam = 0;
	wi.customStyle = 0;
	container3 = gwinContainerCreate(0, &wi, 0);
    
						// create container widget: ghContainerPage0
	wi.g.show = FALSE;
	wi.g.x = 0;
	wi.g.y = 0;
	wi.g.width = 305;
	wi.g.height = 480;
	wi.g.parent = ghContainerPage0;
	wi.text = "Container";
	wi.customDraw = 0;
	wi.customParam = 0;
	wi.customStyle = 0;
	containerlist = gwinContainerCreate(0, &wi, 0);	
		
		
    /*
	// Create keyboard widget: ghKeyboard1
	wi.g.show = TRUE;
	wi.g.x = 0;
	wi.g.y = 250;
	wi.g.width = 800;
	wi.g.height = 200;
	wi.g.parent = ghContainerPage0;
	wi.text = "Keyboard1";
	wi.customDraw = gwinKeyboardDraw_Normal;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghKeyboard1 = gwinKeyboardCreate(0, &wi);
*/
	// Create label widget: ghLabel1
	wi.g.show = TRUE;
	wi.g.x = 30;
	wi.g.y = 50;
	wi.g.width = 120;
	wi.g.height = 20;
	wi.g.parent = container1;
	wi.text = "WOW Texts!";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabel1 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabel1, FALSE);
	gwinSetFont(ghLabel1, dejavu_sans_10);
	gwinRedraw(ghLabel1);

	// Create label widget: ghLabel2
	wi.g.show = TRUE;
	wi.g.x = 30;
	wi.g.y = 170;
	wi.g.width = 690;
	wi.g.height = 30;
	wi.g.parent = container1;
	wi.text = "W00T 32 Km/h";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabel2 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabel2, FALSE);
	gwinSetFont(ghLabel2, dejavu_sans_32_anti_aliased);
	gwinRedraw(ghLabel2);
	
	// create button widget: ghButton1
	wi.g.show = TRUE;
	wi.g.x = 0;
	wi.g.y = 250;
	wi.g.width = 305;
	wi.g.height = 60;
	wi.g.parent = container1;
	wi.text = "SETTINGs1";
	wi.customDraw = gwinButtonDraw_Rounded;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghButton1 = gwinButtonCreate(0, &wi);
	
	/*	// create button widget: ghButton1
	wi.g.show = TRUE;
	wi.g.x = 0;
	wi.g.y = 250;
	wi.g.width = 305;
	wi.g.height = 60;
	wi.g.parent = container2;
	wi.text = "SETTINGs2";
	wi.customDraw = gwinButtonDraw_Rounded;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghButton2 = gwinButtonCreate(0, &wi);
	*/
	font_t font = gdispOpenFont("DejaVuSans24");
	GWindowInit consolewind;
	consolewind.show = TRUE;
	consolewind.x = 0;
	consolewind.y = 0;
	consolewind.width = 495;
	consolewind.height = 480;
	consolewind.parent = container3;
	console1 = gwinConsoleCreate(0, &consolewind);
	gwinSetFont(console1, gdispOpenFont("DejaVuSans32"));
	
	// Create list widget: ghList1
	wi.g.show = TRUE;
	wi.g.x = 0;
	wi.g.y = 0;
	wi.g.width = 300;
	wi.g.height = 400;
	wi.g.parent = containerlist;
	wi.text = "List1";
	wi.customDraw = gwinListDefaultDraw;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghList1 = gwinListCreate(0, &wi, FALSE);
	font_t fontcoop = gdispOpenFont("cooper-black24");
	gwinSetFont(ghList1, fontcoop);
	gwinListSetScroll(ghList1, scrollSmooth);
	gwinListAddItem(ghList1, "Item1", FALSE);
	gwinListAddItem(ghList1, "Item2", FALSE);
	gwinListAddItem(ghList1, "Item3", FALSE);
	gwinListAddItem(ghList1, "Item4", FALSE);
	gwinListAddItem(ghList1, "Item5", FALSE);
	gwinListAddItem(ghList1, "Item6", FALSE);
	gwinListAddItem(ghList1, "Item7", FALSE);
	gwinListAddItem(ghList1, "Item8", FALSE);
	gwinListAddItem(ghList1, "Item9", FALSE);
	gwinListSetSelected(ghList1, 0, TRUE);
	gwinListSetSelected(ghList1, 1, FALSE);
	gwinListSetSelected(ghList1, 2, FALSE);
	gwinListSetSelected(ghList1, 3, FALSE);
	gwinListSetSelected(ghList1, 4, FALSE);
	gwinListSetSelected(ghList1, 5, FALSE);
	gwinListSetSelected(ghList1, 6, FALSE);
	gwinListSetSelected(ghList1, 7, FALSE);
	gwinListSetSelected(ghList1, 8, FALSE);
	gdispCloseFont(fontcoop);
		//gwinSetDefaultFont(font);
		// create button widget: ghButton1
	wi.g.show = TRUE;
	wi.g.x = 50;
	wi.g.y = 410;
	wi.g.width = 200;
	wi.g.height = 60;
	wi.g.parent = containerlist;
	wi.text = "SETTINGs2";
	wi.customDraw = gwinButtonDraw_Rounded;
	wi.customParam = 0;
	wi.customStyle = 0;
	buttonlist = gwinButtonCreate(0, &wi);
	gwinSetFont(buttonlist, gdispOpenFont("DejaVuSans32_aa"));
	
/*
	// Create label widget: ghLabel3
	wi.g.show = TRUE;
	wi.g.x = 30;
	wi.g.y = 100;
	wi.g.width = 120;
	wi.g.height = 20;
	wi.g.parent = ghContainerPage0;
	wi.text = "Sans 12 AA";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = &black;
	ghLabel3 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabel3, FALSE);
	gwinSetFont(ghLabel3, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabel3);
    
    */
}

void guiShowPage(unsigned pageIndex)
{
	// Hide all pages
	gwinHide(ghContainerPage0);

	// Show page selected page
	switch (pageIndex) {
	case 0:
		gwinShow(ghContainerPage0);
		break;

	default:
		break;
	}
}

void guiCreate(void)
{
	GWidgetInit wi;

	// Prepare fonts
	dejavu_sans_16 = gdispOpenFont("DejaVuSans16");
	dejavu_sans_10 = gdispOpenFont("DejaVuSans10");
	dejavu_sans_32_anti_aliased = gdispOpenFont("DejaVuSans32_aa");
	dejavu_sans_12_anti_aliased = gdispOpenFont("DejaVuSans12_aa");

	// Prepare images

	// GWIN settings
	gwinWidgetClearInit(&wi);
	gwinSetDefaultFont(dejavu_sans_16);
	gwinSetDefaultStyle(&white, FALSE);
	gwinSetDefaultColor(black_studio);
	gwinSetDefaultBgColor(white_studio);
	
	// Create all the display pages
	createPagePage0();

	// Select the default display page
	guiShowPage(0);

	gwinSetColor(console1, WHITE);
	gwinSetBgColor(console1, BLACK);
	
}

void guiEventLoop(void)
{
	GEvent* pe;
	int i = 0;
	int selectedItem = 0;
	while (1) {
        
        
        gfxSleepMilliseconds(3);
        //gdispGClear(GDISP, (LUMA2COLOR(0)));
        gwinClear(ghMapWindow);
        x=x+2;y=y+2;
        for(int tempx = x+4*256; tempx>-256; tempx=tempx-256)
        {
            while(tempx > 4*256)
            {
                tempx=tempx-256;
            }
            for(int tempy = y+4*256; tempy>-256; tempy=tempy-256)
            {   
                while(tempy > 4*256)
                {
                    tempy=tempy-256;
                }
                //drawTile(tempx, tempy);
                gwinDrawBox(ghMapWindow, tempx, tempy, 256, 256);
                
            }
        }
        //gwinRedraw(ghMapWindow);
        
        
		// Get an event
		pe = geventEventWait(&glistener, 0);
		switch (pe->type) {
			case GEVENT_GWIN_BUTTON:
				if (((GEventGWinButton*)pe)->gwin == ghButton1) {
					  gwinHide(ghMapWindow);
					  gwinHide(container1);
						gwinShow(containerlist);
					  gwinShow(container3);
				}else if (((GEventGWinButton*)pe)->gwin == buttonlist) {
					  gwinHide(container3);
					  gwinHide(containerlist);
						gwinShow(container1);
					  gwinShow(ghMapWindow);
				}
				break;
			default:
				break;
		}
		
		if(gwinGetVisible(containerlist)){
			selectedItem = gwinListGetSelected(ghList1);
			switch(selectedItem){
				case 1:
					gwinHide(container3);
					gwinShow(ghMapWindow);
				  break;
				case 2:
					gwinHide(ghMapWindow);
					gwinShow(container3);
					break;
				case 3:
					gwinHide(container3);
					gwinShow(ghMapWindow);
				  break;
				case 4:
					gwinHide(ghMapWindow);
					gwinShow(container3);
					break;
				case 5:
					gwinHide(container3);
					gwinShow(ghMapWindow);
				  break;
				case 6:
					gwinHide(ghMapWindow);
					gwinShow(container3);
					break;
				case 7:
					gwinHide(container3);
					gwinShow(ghMapWindow);
				  break;
				case 8:
					gwinHide(ghMapWindow);
					gwinShow(container3);
					break;
				default:
					gwinHide(ghMapWindow);
					gwinShow(container3);
					break;
			}
		}
		gwinPrintf(console1, "Hello \033buGFX\033B!\r\n");
		gwinPrintf(console1, "Message Nr.: \0331\033b%d\033B\033C\r\n", i+1);
		i++;
	}
}

void drawTile(int xx, int yy)
{
    coord_t	swidth, sheight;
    swidth = gdispGetWidth();
	sheight = gdispGetHeight();
    gdispImageOpenFile(&myImage, "maptile_bmp.bmp");
	gdispImageDraw(&myImage, xx, yy, swidth, sheight, 0, 0);
    gdispImageClose(&myImage);
}

