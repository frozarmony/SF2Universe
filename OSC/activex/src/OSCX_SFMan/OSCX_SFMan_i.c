/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sat Jun 26 20:26:30 1999
 */
/* Compiler settings for E:\Variable\Kode\OSC\activex\OSCX\OSCX_SFMan\OSCX_SFMan.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_IOSCX_SFMan = {0x1A200131,0x280C,0x11D3,{0x97,0x27,0x8F,0x1B,0xC2,0xD8,0x92,0x09}};


const IID LIBID_OSCX_SFMANLib = {0x1A200123,0x280C,0x11D3,{0x97,0x27,0x8F,0x1B,0xC2,0xD8,0x92,0x09}};


const IID DIID__IOSCX_SFManEvents = {0x1A200133,0x280C,0x11D3,{0x97,0x27,0x8F,0x1B,0xC2,0xD8,0x92,0x09}};


const CLSID CLSID_OSCX_SFManControl = {0x1A200132,0x280C,0x11D3,{0x97,0x27,0x8F,0x1B,0xC2,0xD8,0x92,0x09}};


#ifdef __cplusplus
}
#endif

