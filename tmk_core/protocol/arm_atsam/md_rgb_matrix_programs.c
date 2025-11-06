/*
Copyright 2018 Massdrop Inc.

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifdef RGB_MATRIX_ENABLE
#    ifdef USE_MASSDROP_CONFIGURATOR

#        include "md_rgb_matrix.h"

// Red
led_setup_t leds_red[] = {
    {.hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 0, .ge = 0, .bs = 0, .be = 0, .ef = EF_NONE},
    {.end = 1},
};

// Red 80%
led_setup_t leds_red_80[] = {
    {.hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 51, .ge = 51, .bs = 51, .be = 51, .ef = EF_NONE},
    {.end = 1},
};

// Red-Orange
led_setup_t leds_red_orange[] = {
    {.hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 85, .ge = 85, .bs = 0, .be = 0, .ef = EF_NONE},
    {.end = 1},
};

// Yellow-Orange
led_setup_t leds_yellow_orange[] = {
    {.hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 170, .ge = 170, .bs = 0, .be = 0, .ef = EF_NONE},
    {.end = 1},
};

// Yellow
led_setup_t leds_yellow[] = {
    {.hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 0, .be = 0, .ef = EF_NONE},
    {.end = 1},
};

// Yellow - 80%
led_setup_t leds_yellow_80[] = {
    {.hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 51, .be = 51, .ef = EF_NONE},
    {.end = 1},
};

// Yellow-Green
led_setup_t leds_yellow_green[] = {
    {.hs = 0, .he = 100, .rs = 170, .re = 170, .gs = 255, .ge = 255, .bs = 0, .be = 0, .ef = EF_NONE},
    {.end = 1},
};

// Lime
led_setup_t leds_green_yellow[] = {
    {.hs = 0, .he = 100, .rs = 85, .re = 85, .gs = 255, .ge = 255, .bs = 0, .be = 0, .ef = EF_NONE},
    {.end = 1},
};

// Green
led_setup_t leds_green[] = {
    {.hs = 0, .he = 100, .rs = 0, .re = 0, .gs = 255, .ge = 255, .bs = 0, .be = 0, .ef = EF_NONE},
    {.end = 1},
};

// Green - 80%
led_setup_t leds_green_80[] = {
    {.hs = 0, .he = 100, .rs = 51, .re = 51, .gs = 255, .ge = 255, .bs = 51, .be = 51, .ef = EF_NONE},
    {.end = 1},
};

// Blue-Green
led_setup_t leds_green_cyan[] = {
    {.hs = 0, .he = 100, .rs = 0, .re = 0, .gs = 255, .ge = 255, .bs = 85, .be = 85, .ef = EF_NONE},
    {.end = 1},
};

// Aquamarine
led_setup_t leds_cyan_green[] = {
    {.hs = 0, .he = 100, .rs = 0, .re = 0, .gs = 255, .ge = 255, .bs = 170, .be = 170, .ef = EF_NONE},
    {.end = 1},
};

// Cyan
led_setup_t leds_cyan[] = {
    {.hs = 0, .he = 100, .rs = 0, .re = 0, .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_NONE},
    {.end = 1},
};

// Cyan - 80%
led_setup_t leds_cyan_80[] = {
    {.hs = 0, .he = 100, .rs = 51, .re = 51, .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_NONE},
    {.end = 1},
};

led_setup_t leds_cyan_blue[] = {
    {.hs = 0, .he = 100, .rs = 0, .re = 0, .gs = 170, .ge = 170, .bs = 255, .be = 255, .ef = EF_NONE},
    {.end = 1},
};

// Blue
led_setup_t leds_blue_cyan[] = {
    {.hs = 0, .he = 100, .rs = 0, .re = 0, .gs = 85, .ge = 85, .bs = 255, .be = 255, .ef = EF_NONE},
    {.end = 1},
};

// Blue
led_setup_t leds_blue[] = {
    {.hs = 0, .he = 100, .rs = 0, .re = 0, .gs = 0, .ge = 0, .bs = 255, .be = 255, .ef = EF_NONE},
    {.end = 1},
};

// Blue - 80%
led_setup_t leds_blue_80[] = {
    {.hs = 0, .he = 100, .rs = 51, .re = 51, .gs = 51, .ge = 51, .bs = 255, .be = 255, .ef = EF_NONE},
    {.end = 1},
};

led_setup_t leds_blue_magenta[] = {
    {.hs = 0, .he = 100, .rs = 85, .re = 85, .gs = 0, .ge = 0, .bs = 255, .be = 255, .ef = EF_NONE},
    {.end = 1},
};

led_setup_t leds_magenta_blue[] = {
    {.hs = 0, .he = 100, .rs = 170, .re = 170, .gs = 0, .ge = 0, .bs = 255, .be = 255, .ef = EF_NONE},
    {.end = 1},
};

// Magenta
led_setup_t leds_magenta[] = {
    {.hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 0, .ge = 0, .bs = 255, .be = 255, .ef = EF_NONE},
    {.end = 1},
};

// Magenta - 80%
led_setup_t leds_magenta_80[] = {
    {.hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 51, .ge = 51, .bs = 255, .be = 255, .ef = EF_NONE},
    {.end = 1},
};

led_setup_t leds_magenta_red[] = {
    {.hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 0, .ge = 0, .bs = 170, .be = 170, .ef = EF_NONE},
    {.end = 1},
};

led_setup_t leds_red_magenta[] = {
    {.hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 0, .ge = 0, .bs = 85, .be = 85, .ef = EF_NONE},
    {.end = 1},
};

// White
led_setup_t leds_white[] = {
    {.hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_NONE},
    {.end = 1},
};

// White with moving red stripe
led_setup_t leds_white_with_red_stripe[] = {
    {.hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_NONE},
    {.hs = 0, .he = 15, .rs = 0, .re = 0, .gs = 0, .ge = 255, .bs = 0, .be = 255, .ef = EF_SCR_R | EF_SUBTRACT},
    {.hs = 15, .he = 30, .rs = 0, .re = 0, .gs = 255, .ge = 0, .bs = 255, .be = 0, .ef = EF_SCR_R | EF_SUBTRACT},
    {.end = 1},
};

// GMK Custom lighting
led_setup_t leds_gmk_kaiju_orange[] = {
    {.hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 55, .ge = 55, .bs = 0, .be = 0, .ef = EF_NONE},
    {.end = 1},
};

// GMK Custom lighting
led_setup_t leds_gmk_kaiju_green[] = {
    {.hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 75, .ge = 75, .bs = 25, .be = 25, .ef = EF_NONE},
    {.end = 1},
};

// GMK Custom lighting
led_setup_t leds_gmk_kaiju_white[] = {
    {.hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 248, .ge = 248, .bs = 230, .be = 230, .ef = EF_NONE},
    {.end = 1},
};

// Black with moving red stripe
led_setup_t leds_black_with_red_stripe[] = {
    {.hs = 0, .he = 15, .rs = 0, .re = 255, .gs = 0, .ge = 0, .bs = 0, .be = 0, .ef = EF_SCR_R},
    {.hs = 15, .he = 30, .rs = 255, .re = 0, .gs = 0, .ge = 0, .bs = 0, .be = 0, .ef = EF_SCR_R},
    {.end = 1},
};

// Rainbow no scrolling
led_setup_t leds_rainbow_ns[] = {
    {.hs = 0, .he = 16.67, .rs = 255, .re = 255, .gs = 0, .ge = 255, .bs = 0, .be = 0, .ef = EF_OVER},
    {.hs = 16.67, .he = 33.33, .rs = 255, .re = 0, .gs = 255, .ge = 255, .bs = 0, .be = 0, .ef = EF_OVER},
    {.hs = 33.33, .he = 50, .rs = 0, .re = 0, .gs = 255, .ge = 255, .bs = 0, .be = 255, .ef = EF_OVER},
    {.hs = 50, .he = 66.67, .rs = 0, .re = 0, .gs = 255, .ge = 0, .bs = 255, .be = 255, .ef = EF_OVER},
    {.hs = 66.67, .he = 83.33, .rs = 0, .re = 255, .gs = 0, .ge = 0, .bs = 255, .be = 255, .ef = EF_OVER},
    {.hs = 83.33, .he = 100, .rs = 255, .re = 255, .gs = 0, .ge = 0, .bs = 255, .be = 0, .ef = EF_OVER},
    {.end = 1},
};

// Rainbow no scrolling - 80% saturation
led_setup_t leds_rainbow_ns_80[] = {
    {.hs = 0, .he = 16.67, .rs = 255, .re = 255, .gs = 51, .ge = 255, .bs = 51, .be = 51, .ef = EF_OVER},
    {.hs = 16.67, .he = 33.33, .rs = 255, .re = 51, .gs = 255, .ge = 255, .bs = 51, .be = 51, .ef = EF_OVER },
    {.hs = 33.33, .he = 50, .rs = 51, .re = 51, .gs = 255, .ge = 255, .bs = 51, .be = 255, .ef = EF_OVER },
    {.hs = 50, .he = 66.67, .rs = 51, .re = 51, .gs = 255, .ge = 51, .bs = 255, .be = 255, .ef = EF_OVER },
    {.hs = 66.67, .he = 83.33, .rs = 51, .re = 255, .gs = 51, .ge = 51, .bs = 255, .be = 255, .ef = EF_OVER },
    {.hs = 83.33, .he = 100, .rs = 255, .re = 255, .gs = 51, .ge = 51, .bs = 255, .be = 51, .ef = EF_OVER },
    {.end = 1},
};

// Rainbow scrolling
led_setup_t leds_rainbow_s[] = {
    {.hs = 0, .he = 16.67, .rs = 255, .re = 255, .gs = 0, .ge = 255, .bs = 0, .be = 0, .ef = EF_OVER | EF_SCR_R},
    {.hs = 16.67, .he = 33.33, .rs = 255, .re = 0, .gs = 255, .ge = 255, .bs = 0, .be = 0, .ef = EF_OVER | EF_SCR_R},
    {.hs = 33.33, .he = 50, .rs = 0, .re = 0, .gs = 255, .ge = 255, .bs = 0, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 50, .he = 66.67, .rs = 0, .re = 0, .gs = 255, .ge = 0, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 66.67, .he = 83.33, .rs = 0, .re = 255, .gs = 0, .ge = 0, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 83.33, .he = 100, .rs = 255, .re = 255, .gs = 0, .ge = 0, .bs = 255, .be = 0, .ef = EF_OVER | EF_SCR_R},
    {.end = 1},
};

// Red to Yellow scrolling
led_setup_t leds_red_yellow_s[] = {
    {.hs = 0, .he = 16.67, .rs = 255, .re = 255, .gs = 0, .ge = 0, .bs = 0, .be = 0, .ef = EF_OVER | EF_SCR_R},
    {.hs = 16.67, .he = 33.33, .rs = 255, .re = 255, .gs = 0, .ge = 85, .bs = 0, .be = 0, .ef = EF_OVER | EF_SCR_R},
    {.hs = 33.33, .he = 50, .rs = 255, .re = 255, .gs = 85, .ge = 255, .bs = 0, .be = 0, .ef = EF_OVER | EF_SCR_R},
    {.hs = 50, .he = 66.67, .rs = 255, .re = 255, .gs = 255, .ge = 85, .bs = 0, .be = 0, .ef = EF_OVER | EF_SCR_R},
    {.hs = 66.67, .he = 83.33, .rs = 255, .re = 255, .gs = 85, .ge = 0, .bs = 0, .be = 0, .ef = EF_OVER | EF_SCR_R},
    {.hs = 83.33, .he = 100, .rs = 255, .re = 255, .gs = 0, .ge = 0, .bs = 0, .be = 0, .ef = EF_OVER | EF_SCR_R},
    {.end = 1},
};

// Yellow to Green scrolling
led_setup_t leds_yellow_green_s[] = {
    {.hs = 0, .he = 16.67, .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 0, .be = 0, .ef = EF_OVER | EF_SCR_R},
    {.hs = 16.67, .he = 33.33, .rs = 255, .re = 85, .gs = 255, .ge = 255, .bs = 0, .be = 0, .ef = EF_OVER | EF_SCR_R},
    {.hs = 33.33, .he = 50, .rs = 85, .re = 0, .gs = 255, .ge = 255, .bs = 0, .be = 0, .ef = EF_OVER | EF_SCR_R},
    {.hs = 50, .he = 66.67, .rs = 0, .re = 85, .gs = 255, .ge = 255, .bs = 0, .be = 0, .ef = EF_OVER | EF_SCR_R},
    {.hs = 66.67, .he = 83.33, .rs = 85, .re = 255, .gs = 255, .ge = 255, .bs = 0, .be = 0, .ef = EF_OVER | EF_SCR_R},
    {.hs = 83.33, .he = 100, .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 0, .be = 0, .ef = EF_OVER | EF_SCR_R},
    {.end = 1},
};

// Green to Cyan scrolling
led_setup_t leds_green_cyan_s[] = {
    {.hs = 0, .he = 16.67, .rs = 0, .re = 0, .gs = 255, .ge = 255, .bs = 0, .be = 0, .ef = EF_OVER | EF_SCR_R},
    {.hs = 16.67, .he = 33.33, .rs = 0, .re = 0, .gs = 255, .ge = 255, .bs = 0, .be = 85, .ef = EF_OVER | EF_SCR_R},
    {.hs = 33.33, .he = 50, .rs = 0, .re = 0, .gs = 255, .ge = 255, .bs = 85, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 50, .he = 66.67, .rs = 0, .re = 0, .gs = 255, .ge = 255, .bs = 255, .be = 85, .ef = EF_OVER | EF_SCR_R},
    {.hs = 66.67, .he = 83.33, .rs = 0, .re = 0, .gs = 255, .ge = 255, .bs = 85, .be = 0, .ef = EF_OVER | EF_SCR_R},
    {.hs = 83.33, .he = 100, .rs = 0, .re = 0, .gs = 255, .ge = 255, .bs = 0, .be = 0, .ef = EF_OVER | EF_SCR_R},
    {.end = 1},
};

// Cyan to Blue scrolling
led_setup_t leds_cyan_blue_s[] = {
    {.hs = 0, .he = 16.67, .rs = 0, .re = 0, .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 16.67, .he = 33.33, .rs = 0, .re = 0, .gs = 255, .ge = 85, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 33.33, .he = 50, .rs = 0, .re = 0, .gs = 85, .ge = 0, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 50, .he = 66.67, .rs = 0, .re = 0, .gs = 0, .ge = 85, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 66.67, .he = 83.33, .rs = 0, .re = 0, .gs = 85, .ge = 255, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 83.33, .he = 100, .rs = 0, .re = 0, .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.end = 1},
};

// Blue to Magenta scrolling
led_setup_t leds_blue_magenta_s[] = {
    {.hs = 0, .he = 16.67, .rs = 0, .re = 0, .gs = 0, .ge = 0, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 16.67, .he = 33.33, .rs = 0, .re = 85, .gs = 0, .ge = 0, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 33.33, .he = 50, .rs = 85, .re = 255, .gs = 0, .ge = 0, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 50, .he = 66.67, .rs = 255, .re = 85, .gs = 0, .ge = 0, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 66.67, .he = 83.33, .rs = 85, .re = 0, .gs = 0, .ge = 0, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 83.33, .he = 100, .rs = 0, .re = 0, .gs = 0, .ge = 0, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.end = 1},
};

// Blue to Magenta scrolling - 80%
led_setup_t leds_magenta_red_s[] = {
    {.hs = 0, .he = 16.67, .rs = 255, .re = 255, .gs = 0, .ge = 0, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 16.67, .he = 33.33, .rs = 255, .re = 255, .gs = 0, .ge = 0, .bs = 255, .be = 85, .ef = EF_OVER | EF_SCR_R},
    {.hs = 33.33, .he = 50, .rs = 255, .re = 255, .gs = 0, .ge = 0, .bs = 85, .be = 0, .ef = EF_OVER | EF_SCR_R},
    {.hs = 50, .he = 66.67, .rs = 255, .re = 255, .gs = 0, .ge = 0, .bs = 0, .be = 85, .ef = EF_OVER | EF_SCR_R},
    {.hs = 66.67, .he = 83.33, .rs = 255, .re = 255, .gs = 0, .ge = 0, .bs = 85, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 83.33, .he = 100, .rs = 255, .re = 255, .gs = 0, .ge = 0, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.end = 1},
};

// Red to Yellow scrolling - 80%
led_setup_t leds_red_yellow_s_80[] = {
    {.hs = 0, .he = 16.67, .rs = 255, .re = 255, .gs = 51, .ge = 51, .bs = 51, .be = 51, .ef = EF_OVER | EF_SCR_R},
    {.hs = 16.67, .he = 33.33, .rs = 255, .re = 255, .gs = 51, .ge = 85, .bs = 51, .be = 51, .ef = EF_OVER | EF_SCR_R},
    {.hs = 33.33, .he = 50, .rs = 255, .re = 255, .gs = 85, .ge = 255, .bs = 51, .be = 51, .ef = EF_OVER | EF_SCR_R},
    {.hs = 50, .he = 66.67, .rs = 255, .re = 255, .gs = 255, .ge = 85, .bs = 51, .be = 51, .ef = EF_OVER | EF_SCR_R},
    {.hs = 66.67, .he = 83.33, .rs = 255, .re = 255, .gs = 85, .ge = 51, .bs = 51, .be = 51, .ef = EF_OVER | EF_SCR_R},
    {.hs = 83.33, .he = 100, .rs = 255, .re = 255, .gs = 51, .ge = 51, .bs = 51, .be = 51, .ef = EF_OVER | EF_SCR_R},
    {.end = 1},
};

// Yellow to Green scrolling - 80%
led_setup_t leds_yellow_green_s_80[] = {
    {.hs = 0, .he = 16.67, .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 51, .be = 51, .ef = EF_OVER | EF_SCR_R},
    {.hs = 16.67, .he = 33.33, .rs = 255, .re = 85, .gs = 255, .ge = 255, .bs = 51, .be = 51, .ef = EF_OVER | EF_SCR_R},
    {.hs = 33.33, .he = 50, .rs = 85, .re = 51, .gs = 255, .ge = 255, .bs = 51, .be = 51, .ef = EF_OVER | EF_SCR_R},
    {.hs = 50, .he = 66.67, .rs = 51, .re = 85, .gs = 255, .ge = 255, .bs = 51, .be = 51, .ef = EF_OVER | EF_SCR_R},
    {.hs = 66.67, .he = 83.33, .rs = 85, .re = 255, .gs = 255, .ge = 255, .bs = 51, .be = 51, .ef = EF_OVER | EF_SCR_R},
    {.hs = 83.33, .he = 100, .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 51, .be = 51, .ef = EF_OVER | EF_SCR_R},
    {.end = 1},
};

// Green to Cyan scrolling - 80%
led_setup_t leds_green_cyan_s_80[] = {
    {.hs = 0, .he = 16.67, .rs = 51, .re = 51, .gs = 255, .ge = 255, .bs = 51, .be = 51, .ef = EF_OVER | EF_SCR_R},
    {.hs = 16.67, .he = 33.33, .rs = 51, .re = 51, .gs = 255, .ge = 255, .bs = 51, .be = 85, .ef = EF_OVER | EF_SCR_R},
    {.hs = 33.33, .he = 50, .rs = 51, .re = 51, .gs = 255, .ge = 255, .bs = 85, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 50, .he = 66.67, .rs = 51, .re = 51, .gs = 255, .ge = 255, .bs = 255, .be = 85, .ef = EF_OVER | EF_SCR_R},
    {.hs = 66.67, .he = 83.33, .rs = 51, .re = 51, .gs = 255, .ge = 255, .bs = 85, .be = 51, .ef = EF_OVER | EF_SCR_R},
    {.hs = 83.33, .he = 100, .rs = 51, .re = 51, .gs = 255, .ge = 255, .bs = 51, .be = 51, .ef = EF_OVER | EF_SCR_R},
    {.end = 1},
};

// Cyan to Blue scrolling - 80%
led_setup_t leds_cyan_blue_s_80[] = {
    {.hs = 0, .he = 16.67, .rs = 51, .re = 51, .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 16.67, .he = 33.33, .rs = 51, .re = 51, .gs = 255, .ge = 85, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 33.33, .he = 50, .rs = 51, .re = 51, .gs = 85, .ge = 51, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 50, .he = 66.67, .rs = 51, .re = 51, .gs = 51, .ge = 85, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 66.67, .he = 83.33, .rs = 51, .re = 51, .gs = 85, .ge = 255, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 83.33, .he = 100, .rs = 51, .re = 51, .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.end = 1},
};

// Blue to Magenta scrolling - 80%
led_setup_t leds_blue_magenta_s_80[] = {
    {.hs = 0, .he = 16.67, .rs = 51, .re = 51, .gs = 51, .ge = 51, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 16.67, .he = 33.33, .rs = 51, .re = 85, .gs = 51, .ge = 51, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 33.33, .he = 50, .rs = 85, .re = 255, .gs = 51, .ge = 51, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 50, .he = 66.67, .rs = 255, .re = 85, .gs = 51, .ge = 51, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 66.67, .he = 83.33, .rs = 85, .re = 51, .gs = 51, .ge = 51, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 83.33, .he = 100, .rs = 51, .re = 51, .gs = 51, .ge = 51, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.end = 1},
};


// Blue to Magenta scrolling - 80%
led_setup_t leds_magenta_red_s_80[] = {
    {.hs = 0, .he = 16.67, .rs = 255, .re = 255, .gs = 51, .ge = 51, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 16.67, .he = 33.33, .rs = 255, .re = 255, .gs = 51, .ge = 51, .bs = 255, .be = 85, .ef = EF_OVER | EF_SCR_R},
    {.hs = 33.33, .he = 50, .rs = 255, .re = 255, .gs = 51, .ge = 51, .bs = 85, .be = 51, .ef = EF_OVER | EF_SCR_R},
    {.hs = 50, .he = 66.67, .rs = 255, .re = 255, .gs = 51, .ge = 51, .bs = 51, .be = 85, .ef = EF_OVER | EF_SCR_R},
    {.hs = 66.67, .he = 83.33, .rs = 255, .re = 255, .gs = 51, .ge = 51, .bs = 85, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 83.33, .he = 100, .rs = 255, .re = 255, .gs = 51, .ge = 51, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.end = 1},
};

// Rainbow scrolling - 80% saturation
led_setup_t leds_rainbow_s_80[] = {
    {.hs = 0, .he = 16.67, .rs = 255, .re = 255, .gs = 51, .ge = 255, .bs = 51, .be = 51, .ef = EF_OVER | EF_SCR_R},
    {.hs = 16.67, .he = 33.33, .rs = 255, .re = 51, .gs = 255, .ge = 255, .bs = 51, .be = 51, .ef = EF_OVER | EF_SCR_R},
    {.hs = 33.33, .he = 50, .rs = 51, .re = 51, .gs = 255, .ge = 255, .bs = 51, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 50, .he = 66.67, .rs = 51, .re = 51, .gs = 255, .ge = 51, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 66.67, .he = 83.33, .rs = 51, .re = 255, .gs = 51, .ge = 51, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 83.33, .he = 100, .rs = 255, .re = 255, .gs = 51, .ge = 51, .bs = 255, .be = 51, .ef = EF_OVER | EF_SCR_R},
    {.end = 1},
};

// Add new LED animations here using one from above as example
// The last entry must be { .end = 1 }
// Add the new animation name to the list below following its format

void *led_setups[] = {
    leds_rainbow_s,
    leds_rainbow_s_80,

    leds_red_yellow_s,
    leds_yellow_green_s,
    leds_green_cyan_s,
    leds_cyan_blue_s,
    leds_blue_magenta_s,
    leds_magenta_red_s,

    leds_red_yellow_s_80,
    leds_yellow_green_s_80,
    leds_green_cyan_s_80,
    leds_cyan_blue_s_80,
    leds_blue_magenta_s_80,
    leds_magenta_red_s_80,

    leds_red,
    leds_green,
    leds_blue,

    leds_yellow,
    leds_cyan,
    leds_magenta,

    leds_red_orange,
    leds_green_cyan,
    leds_blue_magenta,

    leds_yellow_green,
    leds_cyan_blue,
    leds_magenta_red,

    leds_yellow_orange,
    leds_cyan_green,
    leds_magenta_blue,

    leds_red_80,
    leds_green_80,
    leds_blue_80,

    leds_green_yellow,
    leds_blue_cyan,
    leds_red_magenta,

    leds_yellow_80,
    leds_cyan_80,
    leds_magenta_80,

    leds_black_with_red_stripe,
    leds_white_with_red_stripe,
    leds_white
};

const uint8_t led_setups_count = ARRAY_SIZE(led_setups);

#    endif // USE_MASSDROP_CONFIGURATOR
#endif     // RGB_MATRIX_ENABLE