/* object.c

***********************************************
* PROJECT NAME: DUNGEON ADVENTURE             *
* AUTHOR: STEFANO PERIS                       *
* PRODUCT PUBLISHER: XENONLAB STUDIO (c) 2018 *
* LANGUAGE: ANSI C                            *
* COMPILER: GNU GCC COMPILER (MINGW INCLUDED) *
***********************************************

---------------------------------------------------------------
- For error/bug reporting, e-mail: xenonlab.develop@gmail.com -
---------------------------------------------------------------

-----------
- LICENSE -
-----------

This content is free and open-source. You can modify and redistribute it under these terms.

Dungeon Adventure is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Dungeon Adventure is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.
*/


#include <stdio.h>

#include "../include/object.h"


OBJECT objs[] = {
   {"an open field"  , "field"   , NULL , NULL  },
   {"a little cave"  , "cave"    , NULL , NULL  },
   {"a silver coin"  , "silver"  , field, NULL  },
   {"a gold coin"    , "gold"    , cave , NULL  },
   {"a burly guard"  , "guard"   , field, NULL  },
   {"yourself"       , "yourself", field, NULL  },
   {"a cave entrance", "entrance", field, cave  },
   {"a way out"      , "out"     , cave , field }
};
