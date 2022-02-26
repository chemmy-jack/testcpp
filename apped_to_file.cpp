#include <fstream>

int main() {
    std::string filename("temp.txt");
    std::ofstream file_out;
    file_out.open(filename, std::ios_base::app);
    file_out << "," << std::endl ;
    return 0 ;
}
