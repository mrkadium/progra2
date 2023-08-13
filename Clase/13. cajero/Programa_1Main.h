/***************************************************************
 * Name:      Programa_1Main.h
 * Purpose:   Defines Application Frame
 * Author:    Mario Rivera ()
 * Created:   2017-06-08
 * Copyright: Mario Rivera ()
 * License:
 **************************************************************/

#ifndef PROGRAMA_1MAIN_H
#define PROGRAMA_1MAIN_H

//(*Headers(Programa_1Frame)
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/statbmp.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class Programa_1Frame: public wxFrame
{
    public:

        Programa_1Frame(wxWindow* parent,wxWindowID id = -1);
        virtual ~Programa_1Frame();

    private:

        //(*Handlers(Programa_1Frame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnButton3Click(wxCommandEvent& event);
        void OnButton4Click(wxCommandEvent& event);
        void OnButton7Click(wxCommandEvent& event);
        void OnButton6Click(wxCommandEvent& event);
        void OnButton5Click(wxCommandEvent& event);
        void OnButton7Click1(wxCommandEvent& event);
        void OnTextCtrl1Text(wxCommandEvent& event);
        //*)

        //(*Identifiers(Programa_1Frame)
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long ID_BUTTON5;
        static const long ID_BUTTON7;
        static const long ID_TEXTCTRL2;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICBITMAP1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(Programa_1Frame)
        wxButton* Button4;
        wxButton* Button1;
        wxStaticBitmap* StaticBitmap1;
        wxButton* Button2;
        wxButton* Button5;
        wxButton* Button3;
        wxButton* Button7;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl2;
        wxTextCtrl* TextCtrl1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // PROGRAMA_1MAIN_H
