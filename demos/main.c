/*
    Copyright 2015 Jonathan Beri

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct board_t {

  char *name;

} Board;

typedef struct micro_five_t {

  Board * ( *NewBoard )( void );

} Micro_Five;

Board *NewBoard( void )
{
  Board *new_board = malloc( sizeof( Board ) );
 
  new_board->name = "foo";

  return new_board;
}

int main( void )
{
  Micro_Five five = { NewBoard };

  Board *board = five.NewBoard();

  puts( board->name );

  free( board );

  return 0;
}