#include "wx_pch.h"
#include "saldo.h"
#include <wx/textctrl.h>

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(saldo)
	#include <wx/intl.h>
	#include <wx/string.h>
	//*)
#endif
//(*InternalHeaders(saldo)
//*)

//(*IdInit(saldo)
const long saldo::ID_BUTTON1 = wxNewId();
const long saldo::ID_STATICTEXT1 = wxNewId();
const long saldo::ID_TEXTCTRL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(saldo,wxFrame)
	//(*EventTable(saldo)
	//*)
END_EVENT_TABLE()

saldo::saldo(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(saldo)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(296,150));
	Move(wxDefaultPosition);
	Button1 = new wxButton(this, ID_BUTTON1, _("Label"), wxPoint(96,88), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Saldo"), wxPoint(48,48), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(112,48), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));

	Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&saldo::OnTextCtrl1Text);
	//*)
}

saldo::~saldo()
{
	//(*Destroy(saldo)
	//*)
}


void saldo::OnTextCtrl1Text(wxCommandEvent& event)
{
    ///mostrar el saldo con una variable saldo = 2000
    ///ShowModal
    wxString hola = wxT("HOla");
    /*float saldoActual = 2000;
    wxString res;
    res << saldoActual;
    TextCtrl1->SetValue(res);*/
    TextCtrl1->SetValue("Hola");
}
