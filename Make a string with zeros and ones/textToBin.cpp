#include <iostream>
#include <string>
#include <map>
void keys() {
    std::cout << "      A\n";
    std::cout << "      B\n";
    std::cout << "      C\n";
    std::cout << "      D\n";
    std::cout << "      E\n";
    std::cout << "      F\n";
    std::cout << "      G\n";
    std::cout << "      H\n";
    std::cout << "      I\n";
    std::cout << "      J\n";
    std::cout << "      k\n";
    std::cout << "      L\n";
    std::cout << "      M\n";
    std::cout << "      N\n";
    std::cout << "      O\n";
    std::cout << "      P\n";
    std::cout << "      Q\n";
    std::cout << "      R\n";
    std::cout << "      S\n";
    std::cout << "      T\n";
    std::cout << "      U\n";
    std::cout << "      V\n";
    std::cout << "      W\n";
    std::cout << "      X\n";
    std::cout << "      Y\n";
    std::cout << "      Z\n";
    std::cout << "      a\n";
    std::cout << "      b\n";
    std::cout << "      c\n";
    std::cout << "      d\n";
    std::cout << "      e\n";
    std::cout << "      f\n";
    std::cout << "      g\n";
    std::cout << "      h\n";
    std::cout << "      i\n";
    std::cout << "      j\n";
    std::cout << "      k\n";
    std::cout << "      l\n";
    std::cout << "      m\n";
    std::cout << "      n\n";
    std::cout << "      o\n";
    std::cout << "      p\n";
    std::cout << "      q\n";
    std::cout << "      r\n";
    std::cout << "      s\n";
    std::cout << "      t\n";
    std::cout << "      u\n";
    std::cout << "      v\n";
    std::cout << "      w\n";
    std::cout << "      x\n";
    std::cout << "      y\n";
    std::cout << "      z\n";
    std::cout << "      .\n";
    std::cout << "      \\n" << "\n";
    std::cout << "      sp space\n";
    std::cout << "      ,\n";
    std::cout << "      ;\n";
    std::cout << "      :\n";

}

int main() {
    std::map<std::string,std::string> bin = {
        {"A",   "\n01000001\n"},
	{"B",   "\n01000010\n"},
	{"C",   "\n01000011\n"},
	{"D",   "\n01000100\n"},
	{"E",   "\n01000101\n"},
	{"F",   "\n01000110\n"},
	{"G",   "\n01000111\n"},
	{"H",   "\n01001000\n"},
	{"I",   "\n01001001\n"},
	{"J",   "\n01001010\n"}, 
	{"K",   "\n01001011\n"},
	{"L",   "\n01001100\n"},
	{"M",   "\n01001101\n"},
	{"N",   "\n01001110\n"},
	{"O",   "\n01001111\n"}, 
	{"P",   "\n01010000\n"},
	{"Q",   "\n01010001\n"},
	{"R",   "\n01010010\n"},
	{"S",   "\n01010011\n"},
	{"T",   "\n01010100\n"}, 
        {"U",   "\n01010101\n"},	
	{"V",   "\n01010110\n"},
	{"W",   "\n01010111\n"},
	{"X",   "\n01011000\n"},
	{"Y",   "\n01011001\n"},
	{"Z",   "\n01011010\n"},
	{"a",   "\n01100001\n"},
	{"b",   "\n01100010\n"}, 
	{"c",   "\n01100011\n"},
	{"d",   "\n01100100\n"},
	{"e",   "\n01100101\n"},
	{"f",   "\n01100110\n"},
	{"g",   "\n01100111\n"},
	{"h",   "\n01101000\n"},
	{"i",   "\n01101001\n"},
	{"j",   "\n01101010\n"}, 
        {"k",   "\n01101011\n"},
	{"l",   "\n01101100\n"},
	{"m",   "\n01101101\n"},
	{"n",   "\n01101110\n"},
	{"o",   "\n01101111\n"}, 
	{"p",   "\n01110000\n"},
	{"q",   "\n01110001\n"},
	{"r",   "\n01110010\n"},
	{"s",   "\n01110011\n"},
	{"t",   "\n01110100\n"}, 
	{"u",   "\n01110101\n"},
	{"v",   "\n01110110\n"},
	{"w",   "\n01110111\n"},
	{"x",   "\n01111000\n"},
	{"y",   "\n01111001\n"},
	{"z",   "\n01111010\n"},
	{".",   "\n00101110\n"},
	{"\\n", "\n00001010\n"},
	{"sp",  "\n00100000\n"},
	{",",   "\n00101100\n"}, 
	{";",   "\n00111011\n"},
	{":",   "\n00111010\n"},
	{"ii",              ""},	
    };
    std::string b;
    while(true) {
        try {
	    std::cout << "Enter a leter to get a binary ii for index ex to exit.\n";
	    getline(std::cin,b);
	    if(b == "ii") {
	        keys();
	    } else if(b == "ex") {
	        break;
            }
	    std::cout << bin.at(b) << "\n";
	    } catch(std::out_of_range){
	        std::cout << "\nEnter a name from index only.\n\n";
	}
    }
return 0;
}


