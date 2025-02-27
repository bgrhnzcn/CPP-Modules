
#include <string>

class ScalarConverter
{
public:
	static void convert(const std::string& val);
public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter& other);
	ScalarConverter& operator=(const ScalarConverter& other);
	~ScalarConverter();
private:
	static void printChar(const std::string& val);
	static void printInt(const std::string& val);
	static void printFloat(const std::string& val);
	static void printDouble(const std::string& val);
};

