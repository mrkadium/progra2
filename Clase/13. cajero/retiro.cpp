#include "wx_pch.h"
#include "retiro.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(retiro)
	#include <wx/intl.h>
	#include <wx/string.h>
	//*)
#endif
//(*InternalHeaders(retiro)
//*)

//(*IdInit(retiro)
const long retiro::ID_TEXTCTRL1 = wxNewId();
const long retiro::ID_STATICTEXT1 = wxNewId();
const long retiro::ID_BUTTON1 = wxNewId();
const long retiro::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(retiro,wxFrame)
	//(*EventTable(retiro)
	//*)
END_EVENT_TABLE()

retiro::retiro(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(retiro)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(309,153));
	Move(wxDefaultPosition);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(160,24), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Cuanto desea retirar\?"), wxPoint(32,32), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	Button1 = new wxButton(this, ID_BUTTON1, _("Cancelar"), wxPoint(152,96), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button2 = new wxButton(this, ID_BUTTON2, _("Retirar"), wxPoint(64,96), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&retiro::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&retiro::OnButton2Click);
	//*)
}

retiro::~retiro()
{
	//(*Destroy(retiro)
	//*)
}


void retiro::OnButton1Click(wxCommandEvent& event)
{
    Close();
}

void retiro::OnButton2Click(wxCommandEvent& event)
{
    ///Restar del valor de saldo

}
