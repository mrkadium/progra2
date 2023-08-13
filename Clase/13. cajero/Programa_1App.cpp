/***************************************************************
 * Name:      Programa_1App.cpp
 * Purpose:   Code for Application Class
 * Author:    Mario Rivera ()
 * Created:   2017-06-08
 * Copyright: Mario Rivera ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "Programa_1App.h"

//(*AppHeaders
#include "Programa_1Main.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Programa_1App);

bool Programa_1App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Programa_1Frame* Frame = new Programa_1Frame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
