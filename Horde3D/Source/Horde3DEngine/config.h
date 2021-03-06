// *************************************************************************************************
//
// Horde3D
//   Next-Generation Graphics Engine
// --------------------------------------
// Copyright (C) 2006-2016 Nicolas Schulz and Horde3D team
//
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// *************************************************************************************************

#ifndef _h3d_config_H_
#define _h3d_config_H_

// =================================================================================================
// Compile Time Configuration
// =================================================================================================

// Validate input arguments of Horde3D API calls
#define H3D_API_VALIDATION

// Send log messages to the output channel of the attached debugger
#define H3D_DEBUGGER_OUTPUT

// Check for errors and invalid data during each drawcall (requires DEBUG config)
//#define H3D_VALIDATE_DRAWCALLS

// Specifies the number of material subclass levels (eg. Level1.Level2.Level3.Level4.Level5)
#define H3D_MATERIAL_HIERARCHY_LEVELS 5

// Use OpenGL ES Renderer. Other OpenGL renderers will be unavailable.
//#define H3D_USE_GLES3

// Use OpenGL 2 renderer. Can work with GL4 renderer.
// #define H3D_USE_GL2

// Use OpenGL 4 renderer. Can work with GL2 renderer.
// #define H3D_USE_GL4

#endif // _h3d_config_H_
