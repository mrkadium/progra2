#ifndef VENTANA2_H
#define VENTANA2_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(ventana2)
	#include <wx/stattext.h>
	#include <wx/statbmp.h>
	#include <wx/button.h>
	#include <wx/frame.h>
	//*)
#endif
//(*Headers(ventana2)
//*)

class ventana2: public wxFrame
{
	public:

		ventana2(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~ventana2();

		//(*Declarations(ventana2)
		wxButton* Button1;
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(ventana2)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		static const long ID_BUTTON1;
		//*)

	private:

		//(*Handlers(ventana2)
		void OnButton1Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
