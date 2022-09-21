#include <iostream>
#include <iomanip>

/*main app*/
int main()
{
  /******************DATA MANIPULATION******************/ {
  }

  // std manipulators
  std::cout << "hello world" << std::endl;
  // std::setw(10) <-- specificy width to set the width in printing at the console
  // std::right / std::left <--- justification the data on the right
  // std::internal <---- the data is justified on the left
  // std::setfill('-') <----- will fill out the space
  // std::boolalpha / std::noboolalpha <---- will change true or false to 1 or 0
  // std::hex, std::oct, std::dec <--- number system
  // std::showbase / std::noshowbase <---- will show the base of this number from the system number
  // std::uppercase  / std::nouppercase <--- will make letters capital
  // std::noshowpos /showpos <--- positive sign / no positive sign
  // std:::fixed  / std::scientific <--- number format to fixed or scientific notation
  // std::cout.unsetf(std::ios::scentific | std::ios::fixed )
  // std::setprecision(20) < --- number of significant figures
  // std::showpoint / noshowpoint <--- show the decimal point trailing zero if necessary
  // std::flush <--- send all output buffer to the terminal
  //  DOCUMENTATION @ en.cppreference.com

  std::cout << "This is a message" << std::endl
            << std::flush; // flush output buffer to final destination

  std::cout << std::endl;

  std::cout
      << std::internal
      << std::setw(10) << "Last Name" << std::setw(10) << "First Name" << std::endl
      << std::left
      << std::setw(10) << "brock" << std::setw(10) << "leshunar" << std::endl
      << std::setw(10) << "rock" << std::setw(10) << "narse" << std::endl
      << std::setw(10) << "cobk" << std::setw(10) << "snaler" << std::endl
      << std::endl
      << std::showbase << std::showpos
      << std::setw(10) << std::dec << -1234.5123 << std::setw(10) << "left" << std::setw(10) << "dec::" << 1023 << std::endl
      << std::internal << std::showpos
      << std::setw(10) << std::hex << -1234.5123 << std::setw(10) << "internal" << std::setw(10) << "hex::" << 1023 << std::endl
      << std::right << std::noshowpos
      << std::setw(10) << std::oct << -1234.5123 << std::setw(10) << "right" << std::setw(10) << "oct::" << 1023 << std::endl
      << std::endl
      << std::flush;

  const long double aVeryLongFloat{3.1415926535897932384626433832795028841971693993751058209749445923078164};
  const double endsZero{202292122.0};
  const double scntifc{1.34e-10};

  std::cout.unsetf(std::ios::scientific | std::ios::fixed);
  std::cout << std::setprecision(20)
            << "normal " << std::endl
            << aVeryLongFloat << std::endl
            << endsZero << std::endl
            << scntifc << std::endl
            << std::endl
            << "double value in scientific" << std::endl
            << std::scientific << "PI " << aVeryLongFloat << std::endl
            << "zeroend " << endsZero << std::endl
            << "scntifc " << scntifc << std::endl
            << std::endl
            << "double in fixed " << std::endl
            << std::fixed << std::noshowpoint //<< std::showpoint
            << "PI " << aVeryLongFloat << std::endl
            << "zeroend " << endsZero << std::endl
            << "scntifc " << scntifc << std::endl
            << std::endl
            << std::flush;
  return 0;
}
