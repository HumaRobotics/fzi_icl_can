// this is for emacs file handling -*- mode: c++; indent-tabs-mode: nil -*-

// -- BEGIN LICENSE BLOCK ----------------------------------------------
// This file is part of FZIs ic_workspace.
//
// This program is free software licensed under the LGPL
// (GNU LESSER GENERAL PUBLIC LICENSE Version 3).
// You can find a copy of this license in LICENSE folder in the top
// directory of the source code.
//
// © Copyright 2016 FZI Forschungszentrum Informatik, Karlsruhe, Germany
//
// -- END LICENSE BLOCK ------------------------------------------------

//----------------------------------------------------------------------
/*!\file
 *
 * \author  Jan Oberlaender <oberlaender@fzi.de>
 * \date    2014-05-18
 *
 */
//----------------------------------------------------------------------
#ifndef ICL_HARDWARE_CAN_FILTER_IMPORT_EXPORT_H_INCLUDED
#define ICL_HARDWARE_CAN_FILTER_IMPORT_EXPORT_H_INCLUDED

#if defined(_SYSTEM_WIN32_) && !defined(_IC_STATIC_)
#  pragma warning ( disable : 4251 )

# if defined ICL_HARDWARE_CAN_FILTER_EXPORT_SYMBOLS
#  define ICL_HARDWARE_CAN_FILTER_IMPORT_EXPORT __declspec(dllexport)
# else
#  define ICL_HARDWARE_CAN_FILTER_IMPORT_EXPORT __declspec(dllimport)
# endif

#elif defined(__GNUC__) && (__GNUC__ > 3) && !defined(_IC_STATIC_)

# define ICL_HARDWARE_CAN_FILTER_IMPORT_EXPORT __attribute__ ((visibility("default")))

#else

# define ICL_HARDWARE_CAN_FILTER_IMPORT_EXPORT

#endif

#endif
