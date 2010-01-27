//////////////////////////////////////////////////////////////////////////////////
// information ///////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
/*
	
*/
//////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////
// ANIMATION STRUCTURE ///////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
#ifndef _SANIMATIONSET_H_
#define _SANIMATIONSET_H_

//////////////////////////////////////////////////////////////////////////////////
// INCLUDES / LIBS ///////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//#pragma comment ( lib, "d3dx8.lib"  )
#pragma comment ( lib, "d3dxof.lib" )
#pragma comment ( lib, "winmm.lib"  )

#pragma comment ( lib, "dxguid.lib" )
//#pragma comment ( lib, "d3d8.lib"   )
//#pragma comment ( lib, "dxerr8.lib" )

#include <d3d8.h>
#include <math.h>
#include <D3DX8.h>

#define WIN32_LEAN_AND_MEAN
#include < windows.h >


#include "sAnimation.h"
//////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////
// DEFINES ///////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
#define DARKSDK __declspec ( dllexport )
#define SAFE_DELETE( p )       { if ( p ) { delete ( p );       ( p ) = NULL; } }
#define SAFE_RELEASE( p )      { if ( p ) { ( p )->Release ( ); ( p ) = NULL; } }
#define SAFE_DELETE_ARRAY( p ) { if ( p ) { delete [ ] ( p );   ( p ) = NULL; } }
#define GXRELEASE(_p) do       { if ((_p) != NULL) {(_p)->Release(); (_p) = NULL;} } while (0)
//////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////
// STRUCTURES ////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
struct sAnimationSet
{
	char*			m_Name;
	sAnimation*		m_Animation;
	unsigned long   m_Length;
	sAnimationSet*  m_Next;

	sAnimationSet  ( );
	~sAnimationSet ( );

	sAnimationSet* FindSet ( char* Name );
	void           Update  ( float Time, BOOL Smooth );
};
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

#endif _SANIMATIONSET_H_