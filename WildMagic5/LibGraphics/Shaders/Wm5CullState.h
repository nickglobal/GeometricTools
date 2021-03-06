// Geometric Tools, LLC
// Copyright (c) 1998-2013
// Distributed under the Boost Software License, Version 1.0.
// http://www.boost.org/LICENSE_1_0.txt
// http://www.geometrictools.com/License/Boost/LICENSE_1_0.txt
//
// File Version: 5.0.1 (2010/10/01)

#ifndef WM5CULLSTATE_H
#define WM5CULLSTATE_H

#include "Wm5GraphicsLIB.h"
#include "Wm5Object.h"

namespace Wm5
{

class WM5_GRAPHICS_ITEM CullState : public Object
{
    WM5_DECLARE_RTTI;
    WM5_DECLARE_NAMES;
    WM5_DECLARE_STREAM(CullState);

public:
    // Construction and destruction.
    CullState ();
    virtual ~CullState ();

    bool Enabled;   // default: true
    bool CCWOrder;  // default: true
};

WM5_REGISTER_STREAM(CullState);
typedef Pointer0<CullState> CullStatePtr;

}

#endif
