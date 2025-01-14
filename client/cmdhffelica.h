//-----------------------------------------------------------------------------
// Copyright (C) 2017 October, Satsuoni
// 2017 iceman
// This code is licensed to you under the terms of the GNU GPL, version 2 or,
// at your option, any later version. See the LICENSE.txt file for the text of
// the license.
//-----------------------------------------------------------------------------
// High frequency ISO18092 / FeliCa commands
//-----------------------------------------------------------------------------

#ifndef CMDHFFELICA_H__
#define CMDHFFELICA_H__

#include "common.h"

int CmdHFFelica(const char *Cmd);

int readFelicaUid(bool verbose);

int dump();
#endif
