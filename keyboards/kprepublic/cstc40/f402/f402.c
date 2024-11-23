/* Copyright 2022 bdtc123
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
#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
    {46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35},
    {23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34},
    {22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11},
    {0, 1, 2, 3, 4, 5, NO_LED, 6, 7, 8, 9, 10}
},
{
    { 0 , 0 },{ 20 , 0 },{ 41 , 0 },{ 61 , 0 },{ 81 , 0 },{ 102 , 0 },{ 122 , 0 },{ 143 , 0 },{ 163 , 0 },{ 183 , 0 },{ 204 , 0 },{ 224 , 0 },
    { 0 , 21 },{ 20 , 21 },{ 41 , 21 },{ 61 , 21 },{ 81 , 21 },{ 102 , 21 },{ 122 , 21 },{ 143 , 21 },{ 163 , 21 },{ 183 , 21 },{ 204 , 21 },{ 224 , 21 },
    { 0 , 43 },{ 20 , 43 },{ 41 , 43 },{ 61 , 43 },{ 81 , 43 },{ 102 , 43 },{ 122 , 43 },{ 143 , 43 },{ 163 , 43 },{ 183 , 43 },{ 204 , 43 },{ 224 , 43 },
    { 0 , 64 },{ 20 , 64 },{ 41 , 64 },{ 61 , 64 },{ 81 , 64 },{ 102 , 64 }, { 143 , 64 },{ 163 , 64 },{ 183 , 64 },{ 204 , 64 },{ 224 , 64 },
},
{
    4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4
}
};
#endif
