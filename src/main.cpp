#include <iostream>
#include "LHEF/LHEF.hpp"

int main(int argn, char** argv){

  if (argn != 2){
    std::cerr << "Usage: " << argv[0] << " event_file.lhe\n";
    return EXIT_FAILURE;
  }

  using namespace LHEF;

  Reader reader(argv[1]);

  int event_number = 0;
  while (reader.readEvent()){
    ++event_number;
    // do something
  }
  std::cout << "processed " << event_number << " events\n";

  return 0.;

}
