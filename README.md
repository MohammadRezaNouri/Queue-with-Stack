# Queue with Stack
In this program, which is written in C++ language and in a modular way, we have implemented the queue structure data using two stacks.

## enQueue
To add, use only one stack and update the end of the queue

## deQueue
To delete, reverse the first stack using the second stack, and after deleting the variable, return it to the first stack and then update the beginning of the queue.

## Time complexity
| enQueue  | deQueue | getFront | getRear |
|----------|---------|----------|---------|
| O(1)     | O(n)    | O(1)     |  O(1)   | 

## Compatibility
You should be able to run this program anywhere. For the compiling process, both of [GCC](https://gcc.gnu.org/) and [Clang](https://clang.llvm.org/) should work.
### Tested Environments
OS:  [Microsoft](https://www.microsoft.com/uk-ua/) Windows 10 Pro x64, Compiler: [GCC](https://gcc.gnu.org/) C++ Compiler (8.1.0)

## Cloning
```
git clone https://github.com/MohammadRezaNouri/Queue-with-Stack
```

## Installation
### Windows
open the cmd or PowerShell and go to files directory with cd command and execute the following commands :
```bash
g++ *.cpp -o app -O2
./app
```

### Linux
open the terminal and go to file directory with cd command and execute the following commands :
```bash
g++ *.cpp -o app -O2
./app
```

## Usage
Curriculum, educational and experimental

## In the future
Complete main.cpp

## Thanks to
#### [Dr Muharram Mansoorizadeh](https://github.com/mansoorm1)
#### [Mr AmirHosseinBabaeayan](https://github.com/AmirHosseinBabaeayan)

## License
Licensed under GPLv3. See [LICENSE.md](https://github.com/MohammadRezaNouri/Queue-with-Stack/blob/main/LICENSE.md).
