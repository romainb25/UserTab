object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'UserTab'
  ClientHeight = 403
  ClientWidth = 912
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label_Formulaire: TLabel
    Left = 200
    Top = 64
    Width = 89
    Height = 23
    Caption = 'Formulaire'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = [fsUnderline]
    ParentFont = False
  end
  object Label_Table: TLabel
    Left = 632
    Top = 64
    Width = 46
    Height = 23
    Caption = 'Table'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = [fsUnderline]
    ParentFont = False
  end
  object LabelLogin: TLabel
    Left = 87
    Top = 131
    Width = 50
    Height = 13
    Caption = 'Identifiant'
  end
  object Label_Password: TLabel
    Left = 73
    Top = 171
    Width = 64
    Height = 13
    Caption = 'Mot de passe'
  end
  object Label1: TLabel
    Left = 392
    Top = 16
    Width = 87
    Height = 25
    Caption = 'UserTab'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 568
    Top = 109
    Width = 30
    Height = 13
    Caption = 'Login'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 688
    Top = 109
    Width = 54
    Height = 13
    Caption = 'Password'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label_Password2: TLabel
    Left = 31
    Top = 211
    Width = 106
    Height = 13
    Caption = 'R'#233'p'#233'ter mot de passe'
  end
  object Etat: TLabel
    Left = 105
    Top = 307
    Width = 32
    Height = 13
    Caption = 'Etat : '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Memo_Utilisateurs: TMemo
    Left = 520
    Top = 128
    Width = 273
    Height = 177
    Lines.Strings = (
      'Memo1')
    TabOrder = 0
  end
  object Afficher: TButton
    Left = 600
    Top = 319
    Width = 129
    Height = 33
    Caption = 'Afficher'
    TabOrder = 1
    OnClick = AfficherClick
  end
  object EditLogin: TEdit
    Left = 152
    Top = 128
    Width = 193
    Height = 21
    TabOrder = 2
  end
  object EditPassword: TEdit
    Left = 152
    Top = 168
    Width = 193
    Height = 21
    TabOrder = 3
  end
  object Button1: TButton
    Left = 152
    Top = 248
    Width = 89
    Height = 33
    Caption = 'Ajouter'
    TabOrder = 4
    OnClick = Button1Click
  end
  object EditEtat: TEdit
    Left = 152
    Top = 304
    Width = 241
    Height = 21
    Enabled = False
    TabOrder = 5
  end
  object Reset: TButton
    Left = 255
    Top = 248
    Width = 90
    Height = 34
    Caption = 'Reset'
    TabOrder = 6
    OnClick = ResetClick
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=GPAGIR15;Data Source=VM-TEST1\SRVSQL2'
    LoginPrompt = False
    Provider = 'SQLOLEDB.1'
    Left = 24
    Top = 8
  end
  object ADOTable1: TADOTable
    Connection = ADOConnection1
    TableName = 'Test'
    Left = 24
    Top = 56
  end
end
