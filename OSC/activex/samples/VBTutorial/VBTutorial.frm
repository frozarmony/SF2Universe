VERSION 5.00
Object = "{1A200123-280C-11D3-9727-8F1BC2D89209}#1.0#0"; "OSCX_SFMAN.DLL"
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   2850
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   8565
   LinkTopic       =   "Form1"
   ScaleHeight     =   2850
   ScaleWidth      =   8565
   StartUpPosition =   3  'Windows Default
   Begin VB.ListBox List1 
      Height          =   1815
      Left            =   5280
      TabIndex        =   4
      Top             =   840
      Width           =   2415
   End
   Begin OSCX_SFMANLibCtl.OSCX_SFManControl OSCX_SFManControl1 
      Height          =   1215
      Left            =   360
      OleObjectBlob   =   "VBTutorial.frx":0000
      TabIndex        =   2
      Top             =   360
      Width           =   2655
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Update"
      Height          =   495
      Left            =   3600
      TabIndex        =   1
      Top             =   2160
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      Height          =   285
      Left            =   6240
      TabIndex        =   0
      Text            =   "Text1"
      Top             =   360
      Width           =   1455
   End
   Begin VB.Label Label2 
      Caption         =   "SoundFonts loaded into Device 0"
      Height          =   495
      Left            =   3600
      TabIndex        =   5
      Top             =   960
      Width           =   1575
   End
   Begin VB.Label Label1 
      Caption         =   "Number of SoundFont devices"
      Height          =   255
      Left            =   3480
      TabIndex        =   3
      Top             =   360
      Width           =   2655
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
  Text1 = OSCX_SFManControl1.NumDevs
  List1.Clear
  OSCX_SFManControl1.Open (0)
  For i = 0 To 127
  If OSCX_SFManControl1.BoolIsMIDIBankUsed(i) Then
    List1.AddItem (OSCX_SFManControl1.LoadedBankDescriptor(i))
    End If
  Next i
  OSCX_SFManControl1.Close
End Sub

Private Sub OLE1_Updated(Code As Integer)

End Sub

Private Sub OSCX_SFManager_Updated(Code As Integer)

End Sub

