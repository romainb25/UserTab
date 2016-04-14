//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AfficherClick(TObject *Sender)
{
	this->getListeUtilisateurs();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	this->ajouterUtilisateur(EditLogin->Text,EditPassword->Text,EditPassword2->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ajouterUtilisateur(AnsiString ELogin, AnsiString EPassword, AnsiString EPassword2)
{
   // ouverture base et table
   ADOConnection1->Open();
   ADOTable1->Open();

   // on passe en mode insertion
   ADOTable1->Insert();

   //on v�rifie que les 2 mots de passe correspondent
   if (EditPassword->Text==EditPassword2->Text) {
       // on ins�re les 2 valeurs r�cup�r�es
	   ADOTable1->FieldByName("login")->AsString = ELogin;
	   ADOTable1->FieldByName("password")->AsString = EPassword;

	   //on valide les modifications
	   ADOTable1->Post();

	   EditEtat->Text="Utilisateur ajout�!";
   }
   else{
       EditEtat->Text="Les deux mots de passe ne correspondent pas!";
   }

   // on ferme base et table
   ADOTable1->Close();
   ADOConnection1->Close();
}

//---------------------------------------------------------------------------

void __fastcall TForm1::getListeUtilisateurs()
{
	AnsiString login = "";
	AnsiString password = "";
	Memo_Utilisateurs->Clear();

	// ouverture connexion, bdd et table
	ADOConnection1->Open();
	ADOTable1->Open();

	// on se positionne au d�but
	ADOTable1->First();

	// tant qu'on est pas � la fin de la table
	while(!ADOTable1->Eof)
	{
		// on r�cup�re les champs login et password
		login = ADOTable1->FieldByName("login")->AsString;
		password = ADOTable1->FieldByName("password")->AsString;

		// on ajoute une ligne � notre m�mo
		Memo_Utilisateurs->Lines->Add(login + password);

		// on passe � la ligne suivante
		ADOTable1->Next();
	}

	// on ferme connexion, bdd et table
	ADOTable1->Close();
	ADOConnection1->Close();
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ResetClick(TObject *Sender)
{
	//on efface les valeur des champs Login, Password, Password2 et Etat
	EditLogin->Text="";
	EditPassword->Text="";
	EditPassword2->Text="";
	EditEtat->Text="";
}
//---------------------------------------------------------------------------

