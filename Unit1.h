//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
	TADOConnection *ADOConnection1;
	TADOTable *ADOTable1;
	TMemo *Memo_Utilisateurs;
	TButton *Afficher;
	TEdit *EditLogin;
	TEdit *EditPassword;
	TLabel *Label_Formulaire;
	TLabel *Label_Table;
	TButton *Button1;
	TLabel *LabelLogin;
	TLabel *Label_Password;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label_Password2;
	TLabel *Etat;
	TEdit *EditEtat;
	TButton *Reset;
	void __fastcall AfficherClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall ResetClick(TObject *Sender);
private:	// Déclarations utilisateur
public:		// Déclarations utilisateur
	void __fastcall ajouterUtilisateur(AnsiString,AnsiString,AnsiString);
	void __fastcall getListeUtilisateurs();
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
