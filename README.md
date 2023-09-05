# xcon
This project leverages commonly used vector structs to handle various types of vector-based data. 
These vector structs, including `vec2`, `vec3`, and `vec4`, offer a flexible and efficient way to represent 2-dimensional, 3-dimensional, and 4-dimensional vectors respectively. 
They provide essential functionalities for storing, manipulating, and performing calculations on vector data, making them indispensable tools for tasks involving coordinates, positions, or other vector-related operations.

xcon is a header-only library, which means you don't have to build this library to use it. to use xcon, simply download the source code and add the include directory to your dependecies
## Examples

```cpp
#include "xcon.h"

class Person
{
public:
	const char* name;
	int age;

	Person(int age, const char* name) : age(age), name(name) {};
}

int main(void)
{
	Person daughter(5, "Bella");
	Person father(32, "Bob");

	vec2_t<Person> family(daughter, father);
	
	std::cout << family.x.name << std::endl; // output: Bella
}
```

xcon also covers a bitonic sorting method for it's own vectors.
this sorting method does not work on non-integer vectors.

```cpp
#include "xcon.h"

int main(void)
{
	xcon::vec4 BitonicSort = xcon::vec4(3, 1, 4, 2);
	BitonicSort.sort();

	std::cout << BitonicSort << std::endl;
}
```

## Contributing

If you have any feedback, suggestions, or encounter any issues while using this project, please feel free to open an issue on the GitHub repository.

Your feedback and bug reports are valuable in improving the quality of this project. When reporting an issue, please provide detailed information about the problem, including steps to reproduce it, relevant code snippets, and any error messages you may have received.

I appreciate your contributions to making this project better!

## License

[![License: MIT](https://img.shields.io/badge/License-MIT-blue?color=red)](https://opensource.org/licenses/MIT)\
Copyright (c) 2023 Open Source Project<br>
This software is provided "as is," without warranty of any kind, express or implied, including but not limited to the warranties of merchantability, fitness for a particular purpose, and non-infringement. In no event shall the authors or copyright holders be liable for any claim, damages, or other liability, whether in an action of contract, tort, or otherwise, arising from, out of, or in connection with the software or the use or other dealings in the software.
