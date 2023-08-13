#include "wx_pch.h"
#include "ventana2.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(ventana2)
	#include <wx/intl.h>
	#include <wx/string.h>
	//*)
#endif
//(*InternalHeaders(ventana2)
#include <wx/bitmap.h>
#include <wx/image.h>
//*)

//(*IdInit(ventana2)
const long ventana2::ID_STATICBITMAP1 = wxNewId();
const long ventana2::ID_STATICTEXT1 = wxNewId();
const long ventana2::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ventana2,wxFrame)
	//(*EventTable(ventana2)
	//*)
END_EVENT_TABLE()

ventana2::ventana2(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(ventana2)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(400,472));
	Move(wxDefaultPosition);
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("C:\\Users\\Soldier4\\Pictures\\vlcsnap-2016-06-15-08h58m46s98.png")).Rescale(wxSize(320,208).GetWidth(),wxSize(320,208).GetHeight())), wxPoint(40,56), wxSize(320,208), wxSIMPLE_BORDER, _T("ID_STATICBITMAP1"));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Mostrando imagen"), wxPoint(152,312), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	Button1 = new wxButton(this, ID_BUTTON1, _("Cerrar"), wxPoint(152,384), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ventana2::OnButton1Click);
	//*)
}

ventana2::~ventana2()
{
	//(*Destroy(ventana2)
	//*)
}


void ventana2::OnButton1Click(wxCommandEvent& event)
{
    Close();
}
