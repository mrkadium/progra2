/***************************************************************
 * Name:      Programa_1Main.cpp
 * Purpose:   Code for Application Frame
 * Author:    Mario Rivera ()
 * Created:   2017-06-08
 * Copyright: Mario Rivera ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "Programa_1Main.h"
#include <wx/msgdlg.h>
#include "ventana2.h"
#include "abonos.h"
#include "saldo.h"
#include "retiro.h"
#include <iostream>

int saldoTotal = 2000;

//(*InternalHeaders(Programa_1Frame)
#include <wx/bitmap.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(Programa_1Frame)
const long Programa_1Frame::ID_BUTTON1 = wxNewId();
const long Programa_1Frame::ID_BUTTON2 = wxNewId();
const long Programa_1Frame::ID_BUTTON3 = wxNewId();
const long Programa_1Frame::ID_BUTTON4 = wxNewId();
const long Programa_1Frame::ID_BUTTON5 = wxNewId();
const long Programa_1Frame::ID_BUTTON7 = wxNewId();
const long Programa_1Frame::ID_TEXTCTRL2 = wxNewId();
const long Programa_1Frame::ID_TEXTCTRL1 = wxNewId();
const long Programa_1Frame::ID_STATICBITMAP1 = wxNewId();
const long Programa_1Frame::idMenuQuit = wxNewId();
const long Programa_1Frame::idMenuAbout = wxNewId();
const long Programa_1Frame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Programa_1Frame,wxFrame)
    //(*EventTable(Programa_1Frame)
    //*)
END_EVENT_TABLE()

Programa_1Frame::Programa_1Frame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(Programa_1Frame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(363,466));
    SetBackgroundColour(wxColour(193,74,128));
    Button1 = new wxButton(this, ID_BUTTON1, _("Saldo"), wxPoint(152,328), wxSize(88,23), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button2 = new wxButton(this, ID_BUTTON2, _("Salir"), wxPoint(128,384), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Button3 = new wxButton(this, ID_BUTTON3, _("Close"), wxPoint(232,384), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    Button4 = new wxButton(this, ID_BUTTON4, _("Ventana"), wxPoint(16,384), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
    Button5 = new wxButton(this, ID_BUTTON5, _("Retiro"), wxPoint(88,240), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
    Button7 = new wxButton(this, ID_BUTTON7, _("Abono"), wxPoint(88,280), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON7"));
    TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxPoint(200,280), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(200,240), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("Cajero Kull.jpg")).Rescale(wxSize(200,200).GetWidth(),wxSize(200,200).GetHeight())), wxPoint(96,24), wxSize(200,200), wxSIMPLE_BORDER, _T("ID_STATICBITMAP1"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    Center();

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Programa_1Frame::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Programa_1Frame::OnButton2Click);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Programa_1Frame::OnButton3Click);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Programa_1Frame::OnButton4Click);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Programa_1Frame::OnButton5Click);
    Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Programa_1Frame::OnButton7Click1);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Programa_1Frame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Programa_1Frame::OnAbout);
    //*)
}

Programa_1Frame::~Programa_1Frame()
{
    //(*Destroy(Programa_1Frame)
    //*)
}

void Programa_1Frame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void Programa_1Frame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void Programa_1Frame::OnButton1Click(wxCommandEvent& event)
{

    wxString mes1 = "Su saldo es de: ";
    wxString mes2;
    mes2 << saldoTotal;
    wxString msg = mes1 + mes2;


    wxMessageBox(msg,_("Saldo"));
}

void Programa_1Frame::OnButton2Click(wxCommandEvent& event)
{
    Close();
}

void Programa_1Frame::OnButton3Click(wxCommandEvent& event)
{
    exit(0);
}

void Programa_1Frame::OnButton4Click(wxCommandEvent& event)
{
    ventana2 *tmp = new ventana2(0);
    tmp->Show();
}


void Programa_1Frame::OnButton6Click(wxCommandEvent& event)
{
    saldo *tempo = new saldo(0);
    tempo->Show();
}

void Programa_1Frame::OnButton5Click(wxCommandEvent& event)
{
    int retiro1 = 0;
    double retiro=0;
    int b5=0;
    int b10=0;
    int b20=0;

    TextCtrl1->GetValue().ToDouble((&retiro));
    retiro1 = retiro;
    if(retiro1 > saldoTotal){
        wxMessageBox("No posee suficientes fondos",_("Retiro"));
    }else{
    saldoTotal = saldoTotal - retiro;
    b20 = retiro1 / 20;
    b10 = (retiro1 % 20) / 10;
    b5 = ((retiro1 % 20) % 10) / 5;

    wxString bill20;
    bill20 << b20;
    wxString bill10;
    bill10 << b10;
    wxString bill5;
    bill5 << b5;

    wxString result = bill20 + " billetes de 20\n" + bill10 + " billetes de 10\n" + bill5 + " billetes de 5 ";
    wxMessageBox(result,_("Usted está retirando..."));}
}

void Programa_1Frame::OnButton7Click1(wxCommandEvent& event)
{
    double abono = 0;
    TextCtrl2->GetValue().ToDouble((&abono));
    saldoTotal = saldoTotal + abono;

    wxString txtAbono;
    txtAbono << abono;

    wxString abonando = "Usted está abonando: " + txtAbono;
    wxMessageBox(abonando,_("Usted está abonando..."));
}
