# Microsoft Developer Studio Project File - Name="osc" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=osc - Win32 Debug_MultiThread_DLL
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "osc.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "osc.mak" CFG="osc - Win32 Debug_MultiThread_DLL"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "osc - Win32 Debug_SingleThread" (based on "Win32 (x86) Static Library")
!MESSAGE "osc - Win32 Debug_MultiThread" (based on "Win32 (x86) Static Library")
!MESSAGE "osc - Win32 Debug_MultiThread_DLL" (based on "Win32 (x86) Static Library")
!MESSAGE "osc - Win32 Release_SingleThread" (based on "Win32 (x86) Static Library")
!MESSAGE "osc - Win32 Release_MultiThread" (based on "Win32 (x86) Static Library")
!MESSAGE "osc - Win32 Release_MultiThread_DLL" (based on "Win32 (x86) Static Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "osc - Win32 Debug_SingleThread"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "osc___Win32_Debug_SingleThread"
# PROP BASE Intermediate_Dir "osc___Win32_Debug_SingleThread"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "osc___Win32_Debug_SingleThread"
# PROP Intermediate_Dir "osc___Win32_Debug_SingleThread"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /I "./../../include" /I "./../include/" /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD CPP /nologo /W3 /Gm /GX /ZI /Od /I "./../../include" /I "./../include/" /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD BASE RSC /l 0x414 /d "_DEBUG"
# ADD RSC /l 0x414 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo /out:"../lib/oscd.lib"
# ADD LIB32 /nologo /out:"../lib/osc_ds.lib"

!ELSEIF  "$(CFG)" == "osc - Win32 Debug_MultiThread"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "osc___Win32_Debug_MultiThread"
# PROP BASE Intermediate_Dir "osc___Win32_Debug_MultiThread"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "osc___Win32_Debug_MultiThread"
# PROP Intermediate_Dir "osc___Win32_Debug_MultiThread"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /I "./../../include" /I "./../include/" /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /I "./../../include" /I "./../include/" /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD BASE RSC /l 0x414 /d "_DEBUG"
# ADD RSC /l 0x414 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo /out:"../lib/oscd.lib"
# ADD LIB32 /nologo /out:"../lib/osc_dm.lib"

!ELSEIF  "$(CFG)" == "osc - Win32 Debug_MultiThread_DLL"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "osc___Win32_Debug_MultiThread_DLL"
# PROP BASE Intermediate_Dir "osc___Win32_Debug_MultiThread_DLL"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "osc___Win32_Debug_MultiThread_DLL"
# PROP Intermediate_Dir "osc___Win32_Debug_MultiThread_DLL"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /I "./../../include" /I "./../include/" /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /I "./../../include" /I "./../include/" /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD BASE RSC /l 0x414 /d "_DEBUG"
# ADD RSC /l 0x414 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo /out:"../lib/oscd.lib"
# ADD LIB32 /nologo /out:"../lib/osc_dmd.lib"

!ELSEIF  "$(CFG)" == "osc - Win32 Release_SingleThread"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "osc___Win32_Release_SingleThread"
# PROP BASE Intermediate_Dir "osc___Win32_Release_SingleThread"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "osc___Win32_Release_SingleThread"
# PROP Intermediate_Dir "osc___Win32_Release_SingleThread"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /I "./../../include" /I "./../include/" /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD CPP /nologo /W3 /GX /O2 /I "./../../include" /I "./../include/" /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD BASE RSC /l 0x414 /d "NDEBUG"
# ADD RSC /l 0x414 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo /out:"../lib/osc.lib"
# ADD LIB32 /nologo /out:"../lib/osc_s.lib"

!ELSEIF  "$(CFG)" == "osc - Win32 Release_MultiThread"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "osc___Win32_Release_MultiThread"
# PROP BASE Intermediate_Dir "osc___Win32_Release_MultiThread"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "osc___Win32_Release_MultiThread"
# PROP Intermediate_Dir "osc___Win32_Release_MultiThread"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /I "./../../include" /I "./../include/" /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD CPP /nologo /MT /W3 /GX /O2 /I "./../../include" /I "./../include/" /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD BASE RSC /l 0x414 /d "NDEBUG"
# ADD RSC /l 0x414 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo /out:"../lib/osc.lib"
# ADD LIB32 /nologo /out:"../lib/osc_m.lib"

!ELSEIF  "$(CFG)" == "osc - Win32 Release_MultiThread_DLL"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "osc___Win32_Release_MultiThread_DLL"
# PROP BASE Intermediate_Dir "osc___Win32_Release_MultiThread_DLL"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "osc___Win32_Release_MultiThread_DLL"
# PROP Intermediate_Dir "osc___Win32_Release_MultiThread_DLL"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /I "./../../include" /I "./../include/" /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /I "./../../include" /I "./../include/" /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD BASE RSC /l 0x414 /d "NDEBUG"
# ADD RSC /l 0x414 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo /out:"../lib/osc.lib"
# ADD LIB32 /nologo /out:"../lib/osc_md.lib"

!ENDIF 

# Begin Target

# Name "osc - Win32 Debug_SingleThread"
# Name "osc - Win32 Debug_MultiThread"
# Name "osc - Win32 Debug_MultiThread_DLL"
# Name "osc - Win32 Release_SingleThread"
# Name "osc - Win32 Release_MultiThread"
# Name "osc - Win32 Release_MultiThread_DLL"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=..\src\OSC_MIDIInput.cpp
# End Source File
# Begin Source File

SOURCE=..\src\OSC_MIDIOutput.cpp
# End Source File
# Begin Source File

SOURCE=..\src\OSC_SFManager.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=..\include\OSC_Defines.h
# End Source File
# Begin Source File

SOURCE=..\include\OSC_MIDIInput.h
# End Source File
# Begin Source File

SOURCE=..\include\OSC_MIDIMessage.h
# End Source File
# Begin Source File

SOURCE=..\include\OSC_MIDIOutput.h
# End Source File
# Begin Source File

SOURCE=..\include\OSC_MultiThreading.h
# End Source File
# Begin Source File

SOURCE=..\include\OSC_SFManager.h
# End Source File
# Begin Source File

SOURCE=..\include\OSC_Timer.h
# End Source File
# End Group
# End Target
# End Project
