// Copyright 2022 keebnewb (@thompson-ele)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define ___ KC_NO

#define LAYOUT_default( \
         k00, k01, k12, k02, k13, k03, k14, k04, k15, k05, k16, k06, k17, k07,      k18, k08, k19, \
    k30, k20, k31, k21, k32, k22, k33, k23, k34, k24, k35, k25, k36, k26, k27,      k38, k28, k39, \
    k50, k40, k51, k41, k52, k42, k53, k43, k54, k44, k55, k45, k56, k46, k47,      k58, k48, k59, \
    k70, k60, k71, k61, k72, k62, k73, k63, k74, k64, k75, k65, k76, k67,                          \
    k90, k80, k81, k92, k82, k93, k83, k94, k84, k95, k85, k96, k86,                     k88,      \
    kb0, ka0,      ka1,                ka3,                ka6,      ka7,           kb8, ka8, kb9  \
){ \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, ___ }, \
    { ___, ___, k12, k13, k14, k15, k16, k17, k18, k19 }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, ___ }, \
    { k30, k31, k32, k33, k34, k35, k36, ___, k38, k39 }, \
    { k40, k41, k42, k43, k44, k45, k46, k47, k48, ___ }, \
    { k50, k51, k52, k53, k54, k55, k56, ___, k58, k59 }, \
    { k60, k61, k62, k63, k64, k65, ___, k67, ___, ___ }, \
    { k70, k71, k72, k73, k74, k75, k76, ___, ___, ___ }, \
    { k80, k81, k82, k83, k84, k85, k86, ___, k88, ___ }, \
    { k90, ___, k92, k93, k94, k95, k96, ___, ___, ___ }, \
    { ka0, ka1, ___, ka3, ___, ___, ka6, ka7, ka8, ___ }, \
    { kb0, ___, ___, ___, ___, ___, ___, ___, kb8, kb9 }  \
}

#define LAYOUT_split_bs( \
         k00, k01, k12, k02, k13, k03, k14, k04, k15, k05, k16, k06, k17, k07,      k18, k08, k19, \
    k30, k20, k31, k21, k32, k22, k33, k23, k34, k24, k35, k25, k36, k26, k37, k27, k38, k28, k39, \
    k50, k40, k51, k41, k52, k42, k53, k43, k54, k44, k55, k45, k56, k46, k47,      k58, k48, k59, \
    k70, k60, k71, k61, k72, k62, k73, k63, k74, k64, k75, k65, k76, k67,                          \
    k90, k80, k81, k92, k82, k93, k83, k94, k84, k95, k85, k96, k86,                     k88,      \
    kb0, ka0,      ka1,                ka3,                ka6,      ka7,           kb8, ka8, kb9  \
){ \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, ___ }, \
    { ___, ___, k12, k13, k14, k15, k16, k17, k18, k19 }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, ___ }, \
    { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39 }, \
    { k40, k41, k42, k43, k44, k45, k46, k47, k48, ___ }, \
    { k50, k51, k52, k53, k54, k55, k56, ___, k58, k59 }, \
    { k60, k61, k62, k63, k64, k65, ___, k67, ___, ___ }, \
    { k70, k71, k72, k73, k74, k75, k76, ___, ___, ___ }, \
    { k80, k81, k82, k83, k84, k85, k86, ___, k88, ___ }, \
    { k90, ___, k92, k93, k94, k95, k96, ___, ___, ___ }, \
    { ka0, ka1, ___, ka3, ___, ___, ka6, ka7, ka8, ___ }, \
    { kb0, ___, ___, ___, ___, ___, ___, ___, kb8, kb9 }  \
}

#define LAYOUT_all( \
         k00, k01, k12, k02, k13, k03, k14, k04, k15, k05, k16, k06, k17, k07,      k18, k08, k19, \
    k30, k20, k31, k21, k32, k22, k33, k23, k34, k24, k35, k25, k36, k26, k37, k27, k38, k28, k39, \
    k50, k40, k51, k41, k52, k42, k53, k43, k54, k44, k55, k45, k56, k46, k47,      k58, k48, k59, \
    k70, k60, k71, k61, k72, k62, k73, k63, k74, k64, k75, k65, k76, k66, k67,                     \
    k90, k80, k91, k81, k92, k82, k93, k83, k94, k84, k95, k85, k96, k86, k87,           k88,      \
    kb0, ka0,      ka1,                ka3,                ka6,      ka7,           kb8, ka8, kb9  \
){ \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, ___ }, \
    { ___, ___, k12, k13, k14, k15, k16, k17, k18, k19 }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, ___ }, \
    { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39 }, \
    { k40, k41, k42, k43, k44, k45, k46, k47, k48, ___ }, \
    { k50, k51, k52, k53, k54, k55, k56, ___, k58, k59 }, \
    { k60, k61, k62, k63, k64, k65, k66, k67, ___, ___ }, \
    { k70, k71, k72, k73, k74, k75, k76, ___, ___, ___ }, \
    { k80, k81, k82, k83, k84, k85, k86, k87, k88, ___ }, \
    { k90, k91, k92, k93, k94, k95, k96, ___, ___, ___ }, \
    { ka0, ka1, ___, ka3, ___, ___, ka6, ka7, ka8, ___ }, \
    { kb0, ___, ___, ___, ___, ___, ___, ___, kb8, kb9 }  \
}
