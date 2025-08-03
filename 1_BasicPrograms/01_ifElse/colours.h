// colours.h

#ifndef COLOURS_H
#define COLOURS_H

// Reset
#define RESET       "\033[0m"

// Standard Colors
#define RED         "\033[0;31m"
#define GREEN       "\033[0;32m"
#define BLUE        "\033[0;34m"
#define YELLOW      "\033[0;33m"
#define CYAN        "\033[0;36m"
#define MAGENTA     "\033[0;35m"
#define WHITE       "\033[0;37m"
#define BLACK       "\033[0;30m"

// Bright Colors (Light)
#define BRIGHT_RED      "\033[1;31m"
#define BRIGHT_GREEN    "\033[1;32m"
#define BRIGHT_YELLOW   "\033[1;33m"
#define BRIGHT_BLUE     "\033[1;34m"
#define BRIGHT_MAGENTA  "\033[1;35m"
#define BRIGHT_CYAN     "\033[1;36m"
#define BRIGHT_WHITE    "\033[1;37m"

// Custom Labels
#define LIGHT_GREEN     BRIGHT_GREEN
#define PARROT_GREEN    "\033[38;5;118m" // ANSI 256-color (close to parrot green)

// Background Colors (optional)
#define BG_RED      "\033[41m"
#define BG_GREEN    "\033[42m"
#define BG_BLUE     "\033[44m"
#define BG_YELLOW   "\033[43m"
#define BG_CYAN     "\033[46m"
#define BG_MAGENTA  "\033[45m"
#define BG_WHITE    "\033[47m"
#define BG_BLACK    "\033[40m"

#endif
// COLOURS_H
// End of colours.h