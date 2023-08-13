#include "wx_pch.h"
#include "abonos.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(abonos)
	#include <wx/intl.h>
	#include <wx/string.h>
	//*)
#endif
//(*InternalHeaders(abonos)
//*)

//(*IdInit(abonos)
const long abonos::ID_STATICTEXT1 = wxNewId();
const long abonos::ID_TEXTCTRL1 = wxNewId();
const long abonos::ID_BUTTON1 = wxNewId();
const long abonos::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(abonos,wxFrame)
	//(*EventTable(abonos)
	//*)
END_EVENT_TABLE()

abonos::abonos(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(abonos)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(288,213));
	Move(wxDefaultPosition);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Cuanto desea abonar\?"), wxPoint(16,32), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(160,32), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	Button1 = new wxButton(this, ID_BUTTON1, _("Abonar"), wxPoint(56,72), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button2 = new wxButton(this, ID_BUTTON2, _("Cancelar"), wxPoint(152,72), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&abonos::OnButton1Click);
	//*)
}

abonos::~abonos()
{
	//(*Destroy(abonos)
	//*)
}


void abonos::OnButton1Click(wxCommandEvent& event)
{
    ///Sumar al valor de saldo

}
