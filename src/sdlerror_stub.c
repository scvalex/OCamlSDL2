/* OCamlSDL2 - An OCaml interface to the SDL2 library
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied warranty.
 In no event will the authors be held liable for any damages arising from
 the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it freely.
*/
#define CAML_NAME_SPACE
#include <caml/mlvalues.h>
#include <caml/memory.h>
#include <caml/alloc.h>
#include <caml/fail.h>

#include <SDL_error.h>

CAMLprim value
caml_SDL_GetError(value unit)
{
    const char *err = SDL_GetError();
    return caml_copy_string(err);
}

CAMLprim value
caml_SDL_ClearError(value unit)
{
    SDL_ClearError();
    return Val_unit;
}

/* vim: set ts=4 sw=4 et: */
