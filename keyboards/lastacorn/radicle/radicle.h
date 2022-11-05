// Copyright 2022 Nick Mayer (@nickmayer)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define ___ KC_NO

// clang-format off
 #define LAYOUT(  \
             K02, \
   K10, K11, K12, \
   K20, K21, K22, \
   K30, K31, K32, \
   K40, K41, K42  \
 ) \
 { \
   { ___, ___, K02 }, \
   { K10, K11, K12 }, \
   { K20, K21, K22 }, \
   { K30, K31, K32 }, \
   { K40, K41, K42 }  \
 }
// clang-format on
