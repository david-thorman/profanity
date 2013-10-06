/*
 * muc_window.c
 *
 * Copyright (C) 2012, 2013 James Booth <boothj5@gmail.com>
 *
 * This file is part of Profanity.
 *
 * Profanity is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Profanity is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Profanity.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <glib.h>

#include "ui/window.h"

gboolean
muc_handle_error_message(ProfWin *self, const char * const from,
    const char * const err_msg)
{
    gboolean handled = FALSE;
    if (g_strcmp0(err_msg, "conflict") == 0) {
        win_print_line(self, "Nickname already in use.");
        win_refresh(self);
        handled = TRUE;
    }

    return handled;
}
