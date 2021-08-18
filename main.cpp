#include "headers.h"
#include "filesystem.cpp"

// https://geekflare.com/run-linux-from-a-web-browser/    

int main()
{
  const char* fname = "file.txt";
  const char* new_fname = "new_file.txt";
  CFile CFile;
	DFile DFile;
  RFile RFile;
  UFile UFile;
  EFile EFile;

  // Template of use below
  // Functions contain debugging output

  // Creates File
  CFile.File(fname, "this is inside of this file", true);
  // remove sleep function(s) for instantaneous change
  // was only used for debugging
  sleep(2);

  // Reads File
	RFile.File(fname);
  sleep(2);

  // Updates File Content
  UFile.File(fname, "this is the new added content", true);
  sleep(2);

  // Edit File Location/Name
  EFile.File(fname, new_fname, true);
  sleep(2);

  // Delete File
  DFile.File(new_fname, "DEL");

  printf("\n\n_ENTER_:");

  // End of Program
  std::cin.ignore();
  std::cout << std::endl << "__END__" << std::endl;
  return 0;
}