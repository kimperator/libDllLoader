/*
 * loader.h
 *
 *  Created on: 02.11.2011
 *      Author: ich
 */

#ifndef LOADER_H_
#define LOADER_H_

#include "dllexport.h"

//exported functions
extern "C" BOOL CLASS_DECLSPEC inject_dll_into_processid(DWORD pID, const wchar_t * DLL_NAME);
extern "C" BOOL CLASS_DECLSPEC inject_dll_into_processname(const wchar_t* processname, const wchar_t * DLL_NAME);
extern "C" BOOL CLASS_DECLSPEC inject_dll_into_processnameA(const char* processname, const char * DLL_NAME);
extern "C" BOOL CLASS_DECLSPEC inject_dll_into_processidA(DWORD pID, const char * DLL_NAME);
extern "C" BOOL CLASS_DECLSPEC inject_dll_new_process(const char* exe, const char* params, const char* dll, const char * workingDir);
extern "C" BOOL CLASS_DECLSPEC FileExists(const wchar_t *fileName);

//dll internal functions
extern "C" DWORD GetTargetThreadIDFromProcName(const wchar_t * ProcName);

#endif /* LOADER_H_ */
