/* Unix system-dependant routines for editline library.
 *
 * Copyright (c) 1992, 1993  Simmule Turner and Rich Salz. All rights reserved.
 *
 * This software is not subject to any license of the American Telephone
 * and Telegraph Company or of the Regents of the University of California.
 *
 * Permission is granted to anyone to use this software for any purpose on
 * any computer system, and to alter it and redistribute it freely, subject
 * to the following restrictions:
 * 1. The authors are not responsible for the consequences of use of this
 *    software, no matter how awful, even if they arise from flaws in it.
 * 2. The origin of this software must not be misrepresented, either by
 *    explicit claim or by omission.  Since few users ever read sources,
 *    credits must appear in the documentation.
 * 3. Altered versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.  Since few users
 *    ever read sources, credits must appear in the documentation.
 * 4. This notice may not be removed or altered.
 */
#include "editline.h"

char *rl_complete(char *token, int *match)
{
    return NULL;
}

void rl_ttyset(int reset)
{
}

static rl_list_possib_func_t *el_list_possib_func = NULL;

int rl_list_possib(char *token, char ***av)
{
    if (el_list_possib_func)
        return el_list_possib_func(token, av);
    return 0;
}
