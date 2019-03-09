/* Copyright 2018 MechMerlin
 * Copyright 2018 Logan Huskins
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// place overrides here
#define TAPPING_TOGGLE 2
#define TAPPING_TERM 150

// Trying these 2 out to try to fix the problem I am having typing "cd " and "git"...
//    both would not type and would use the MOD_TAP function instead...
//    After testing this out, this seems to be working... will commit for now
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
