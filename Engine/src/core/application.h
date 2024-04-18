#pragma once

#include "defines.h"

struct game;

// Application configuration

typedef struct application_config
{
    // Window starting position x axis, if applicable.
    i16 start_pos_x;

    // window starting position y axis, if applicable.
    i16 start_pos_y;

    // window starting width, if applicable.
    i16 start_width;

    // window starting height, if applicable
    i16 start_height;

    // The application name used in windowing, if applicable
    char* name;
} application_config;

KAPI b8 application_create(struct game* game_inst);

KAPI b8 application_run();


