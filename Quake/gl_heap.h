/*
Copyright (C) 2016 Axel Gneiting

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

#ifndef __HEAP__
#define __HEAP__

#include "quakedef.h"



// !!NOT THREAD SAFE!!



int RT_GetFanIndexCount (int vertexcount);

// Don't call if previously returned pointer is in use.
// But no need to free it.
const uint32_t *RT_GetFanIndices (int vertexcount);

// Don't call if previously returned pointer is in use.
// But no need to free it.
void *RT_AllocScratchMemory (size_t bytecount);
void *RT_AllocScratchMemoryNulled (size_t bytecount);

#endif
