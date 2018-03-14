#include <stdio.h>
#include "end_of_file_token.h"


 bool EndOfFileToken::is_eof(char character)
 {
     return character == EOF;
 }

EndOfFileToken::EndOfFileToken(std::string value, int line_number)
: Token(EndOfFileTokenId, value, line_number) {}
