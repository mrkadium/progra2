#ifndef SALDO_H
#define SALDO_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(saldo)
	#include <wx/stattext.h>
	#include <wx/textctrl.h>
	#include <wx/button.h>
	#include <wx/frame.h>
	//*)
#endif
//(*Headers(saldo)
//*)

class saldo: public wxFrame
{
	public:

		saldo(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~saldo();

		//(*Declarations(saldo)
		wxButton* Button1;
		wxStaticText* StaticText1;
		wxTextCtrl* TextCtrl1;
		//*)

	protected:

		//(*Identifiers(saldo)
		static const long ID_BUTTON1;
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		//*)

	private:

		//(*Handlers(saldo)
		void OnTextCtrl1Text(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
