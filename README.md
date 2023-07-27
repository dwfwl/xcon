# xcon
This project leverages commonly used vector structs to handle various types of vector-based data. 
These vector structs, including `vec2`, `vec3`, and `vec4`, offer a flexible and efficient way to represent 2-dimensional, 3-dimensional, and 4-dimensional vectors respectively. 
They provide essential functionalities for storing, manipulating, and performing calculations on vector data, making them indispensable tools for tasks involving coordinates, positions, or other vector-related operations.

## Building
```bash
git clone https://github.com/dwfwl/xcon.git
cd path/to/project
mkdir build
cd build
cmake ..
make
```
## Examples

```cpp
#include <xcon/xcon.h>
#include "player.h"

int main(void)
{
  xcon::vec3_t<short int> position(5, -1, 7);
  setPlayerPosition(position);
}
```
```cpp
#include <xcon/xcon.h>
#include "background.h"

int main(void)
{
  xcon::vec4 color = xcon::vec4(0.5f, 0.2f, 0.8f, 1.0f) // rgba
  BackgroundColor(color.r, color.g, color.b, color.a);
}
```
#### Usage:
```cpp
#include <xcon/xcon.h>

int main(void)
{
  xcon::vec2 2d = xcon::vec2(1, 2);
  xcon::vec2<int> 2d(1, 2);
  // 2d.x or 2d.y
  xcon::vec3 3d = xcon::vec3(1, 2, 3);
  xcon::vec3<int> 3d(1, 2, 3);
  // 3d.x, 3d.y or 3d.z
  xcon::vec4 4d = xcon::vec4(1, 2, 3, 4);
  xcon::vec4<int> 4d(1, 2, 3, 4);
  // 4d.r, 4d.g, 4d.b or 4d.a
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

