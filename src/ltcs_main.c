/*
  LTCS - Linux Terminal Cheat Sheets | ltcs_main.c
  ------------------------------------------------------------------------------
  w3lt3rust3n <philentropy@protonmail.ch>
  Copyright 2017 - Philentropy

  IO's is free software: you can redistribute it
  and/or modify it under the terms of the GNU General Public License as
  published by the Free Software Foundation, either version 2 of the License,
  or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <string.h> // For strerror() and strcmp()
#include <errno.h> // To get the number of the last error and use it with strerror()

// Defining the max number of arguments for LTCS in CLI mode.
#define MAX_CLI 3

// Global const char to store the program name.
const char *programName;

/*
  Colors values for strings:
    \033[1;30m --> Bold grey
    \033[0;31m --> Red
    \033[0;34m --> Blue
    \033[0;33m --> Orange
    \033[1;33m --> Bold Yellow
    \033[0m    --> Reset to default color
*/

// CLI mode help
void ltcs_cli_help()
{
  fprintf(stdout, "\033[1;30m | Linux Terminal Cheat Sheets \033[0m\n"
    "\033[1;30m |\033[0;31m A Hackable common \033[0mcommands displayer for \033[34mGNU/Linux plateform\033[0m\n"
    "\033[1;30m |______________________________________________________________\033[0m\n"
    "\033[1;30m |\033[1;30m Usage:\t\t\033[0;31m%s\033[0m \033[33m-option\033[0m \n"
    "\033[1;30m |\n"
    "\033[1;30m |\033[1;30m Available options:\033[0m\n"
    "\033[1;30m |\t\033[0;33m-a\033[0m \t\tList all available \033[33mcheatsheets\033[0m\n"
    "\033[1;30m |\t\033[0;33m-s \033[33msheets\033[0m \tShow the given \033[33mcheat sheets\033[0m\n"
    "\033[1;30m |\t\033[0;33m-v\033[0m \t\tShow informations about LTCS\n"
    "\033[1;30m |\t\033[0;33m-h\033[0m \t\tShow this help\n", programName);
}

void ltcs_show_info()
{
  fprintf(stdout, "\033[1;30m | Linux Terminal Cheat Sheets \033[0m\n"
    "\033[1;30m |\033[0m\033[1;30m -------------------------------------\033[0m\n"
    "\033[1;30m |\033[0m Dummy\n");
  errno = ENOSYS;
  fprintf(stderr, "\033[31m%s\n\033[0m\n", strerror(errno));
}

void ltcs_show_all_available_cheatsheet()
{
  fprintf(stdout, "\033[1;30m | Linux Terminal Cheat Sheets \033[0m\n"
    "\033[1;30m |\033[0m\033[1;30m -------------------------------------\033[0m\n"
    "\033[1;30m |\033[0m Dummy\n");
  errno = ENOSYS;
  fprintf(stderr, "\033[31m%s\n\033[0m\n", strerror(errno));
}

void atom_cheatsheet_display()
{
  fprintf(stdout, "\033[1;30m | Linux Terminal Cheat Sheets \033[0m\n"
    "\033[1;30m |\033[0m\033[1;33m Atom (IDE) common keyboard shortcuts:\033[0m\n"
    "\033[1;30m |\033[0m\033[1;30m -------------------------------------\033[0m\n"
    "\033[1;30m |\033[0m Undo \t\t\t\t\033[31m Ctrl\033[0m+\033[31mZ\033[0m\n"
    "\033[1;30m |\033[0m Redo \t\t\t\t\033[31m Ctrl\033[0m+\033[31mShift\033[0m+\033[31mZ\033[0m\n"
    "\033[1;30m |\033[0m Copy \t\t\t\t\033[31m Ctrl\033[0m+\033[31mInser\033[0m\n"
    "\033[1;30m |\033[0m Paste \t\t\t\t\033[31m Shift\033[0m+\033[31mInser\033[0m\n"
    "\033[1;30m |\033[0m Cut \t\t\t\t\t\033[31m Shift\033[0m+\033[31mDel\033[0m\n"
    "\033[1;30m |\033[0m Select all \t\t\t\t\033[31m Ctrl\033[0m+\033[31mA\033[0m\n"
    "\033[1;30m |\033[0m Select letter by letter \t\t\033[31m Shift\033[0m+\033[31mLeft Arrow\033[0m\n"
    "\033[1;30m |\033[0m Select word by word \t\t\t\033[31m Ctrl\033[0m+\033[31mShift\033[0m+\033[31mLeft Arrow\033[0m\n"
    "\033[1;30m |\033[0m Select the current line \t\t\033[31m Ctrl\033[0m+\033[31mL\033[0m\n"
    "\033[1;30m |\033[0m Select from word to end of line \t\033[31m Shift\033[0m+\033[31mEnd\033[0m\n"
    "\033[1;30m |\033[0m Select inside brackets \t\t\033[31m Ctlr\033[0m+\033[31mAlt\033[0m+\033[31m,\033[0m\n"
    "\033[1;30m |\033[0m Add upper line to selection \t\t\033[31m Shift\033[0m+\033[31mUp Arrow\033[0m\n"
    "\033[1;30m |\033[0m Add the line bellow to selection \t\033[31m Shift\033[0m+\033[31mDown Arrow\033[0m\n"
    "\033[1;30m |\033[0m Duplicate the current line \t\t\033[31m Ctrl\033[0m+\033[31mShift\033[0m+\033[31mD\033[0m\n"
    "\033[1;30m |\033[0m Delete the current line \t\t\033[31m Ctrl\033[0m+\033[31mShift\033[0m+\033[31mK\033[0m\n"
    "\033[1;30m |\033[0m Call the Atom command search bar \t\033[31m Ctrl\033[0m+\033[31mShift\033[0m+\033[31mP\033[0m\n"
    "\033[1;30m |\033[0m Find/Replace a word in current buffer\033[31m Ctrl\033[0m+\033[31mF\033[0m\n");
}

void system_cheatsheet_display()
{
  fprintf(stdout, "\033[1;30m | Linux Terminal Cheat Sheets \033[0m\n"
    "\033[1;30m |\033[0m\033[1;30m -------------------------------------\033[0m\n"
    "\033[1;30m |\033[0m Dummy\n");
  errno = ENOSYS;
  fprintf(stderr, "\033[31m%s\n\033[0m\n", strerror(errno));
}

void finder_cheatsheet_display()
{
  fprintf(stdout, "\033[1;30m | Linux Terminal Cheat Sheets \033[0m\n"
    "\033[1;30m |\033[0m\033[1;30m -------------------------------------\033[0m\n"
    "\033[1;30m |\033[0m Dummy\n");
  errno = ENOSYS;
  fprintf(stderr, "\033[31m%s\n\033[0m\n", strerror(errno));
}

void misc_cheatsheet_display()
{
  fprintf(stdout, "\033[1;30m | Linux Terminal Cheat Sheets \033[0m\n"
    "\033[1;30m |\033[0m\033[1;30m -------------------------------------\033[0m\n"
    "\033[1;30m |\033[0m Dummy\n");
  errno = ENOSYS;
  fprintf(stderr, "\033[31m%s\n\033[0m\n", strerror(errno));
}

void all_cheatsheet_display()
{
  fprintf(stdout, "\033[1;30m | Linux Terminal Cheat Sheets \033[0m\n"
    "\033[1;30m |\033[0m\033[1;30m -------------------------------------\033[0m\n"
    "\033[1;30m |\033[0m Dummy\n");
  errno = ENOSYS;
  fprintf(stderr, "\033[31m%s\n\033[0m\n", strerror(errno));
}

int main(int argc, char *argv[])
{
  //Setting up the program name by using argv[0]
  programName = argv[0];

  /*
    Checking argument numbers to prevent error. If argc == 1 then LTCS is running
    without any option and it displays the help
  */
  if(argc == 1)
  {
    ltcs_cli_help();
    return 0;
  }
  /*
    Checking if argc value is upper than MAX_CLI (3). If yes, there is too many
    arguments for LTCS and errno is set to "Invalid argument". (See man errno)
  */
  if(argc > MAX_CLI)
  {
    errno = EINVAL;
    return errno;
    fprintf(stderr, "\033[31mError: %s.Too much arguments\033[0m\n", strerror(errno));
  }
  else
  {
    /*
      At this moment, we are comparing a given value (-h) and the one in argv[1]
      with strcmp(). See man 3 strcmp.
      If the value if different than 0, then there is no match.
    */
    if(strcmp("-h", argv[1]) == 0)
    {
      ltcs_cli_help();
    }
    else if(strcmp("-a", argv[1]) == 0)
    {
      ltcs_show_all_available_cheatsheet();
    }
    else if(strcmp("-v", argv[1]) == 0)
    {
      ltcs_show_info();
    }
    else if(strcmp("-s", argv[1]) == 0)
    {
      /*
        Here we need to see if the option -s has a valid argument. If it's NULL,
        there is no arg following -s and errno is set to EINVAL again.
      */
      if(argv[2] == NULL)
      {
        errno = EINVAL;
        fprintf(stderr, "\033[31mError: %s\nSelect the sheet you want to see.\033[0m\n", strerror(errno));
        return errno;
      }
      else if(strcmp("atom", argv[2]) == 0)
      {
        atom_cheatsheet_display();
      }
      else if(strcmp("system", argv[2]) == 0)
      {
        system_cheatsheet_display();
      }
      else if(strcmp("finder", argv[2]) == 0)
      {
        finder_cheatsheet_display();
      }
      else if(strcmp("misc", argv[2]) == 0)
      {
        misc_cheatsheet_display();
      }
      else if(strcmp("all", argv[2]) == 0)
      {
        all_cheatsheet_display();
      }
      else
      {
        errno = EINVAL;
        fprintf(stderr, "\033[31mError: %s\n%s is not a known sheet. Use -a.\033[0m\n", strerror(errno), argv[2]);
        return errno;
      }
    }
    else
    {
      errno = EINVAL;
      fprintf(stderr, "\033[31mError: %s\n%s is not a known option for LTCS.\033[0m\n", strerror(errno), argv[1]);
      return errno;
    }
  }
  return 0;
}
