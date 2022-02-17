# C++ Tests

## Compile 
### Basic
'''
g++ hello_world.cpp -o hello_world.out
'''

### Don't Compile Header FIles
'''
g++ multi_file.cpp -o multi_file.out
'''


## Run
### Basic
'''
./hello_world.out
'''

### With Input File (Pipe)
'''
cat input_file | ./multi_input.out
'''

### With Input File (Pipe) and Output File (Overwrite)
'''
cat input_file | ./multi_input.out > output_file
'''

### With Input File (Pipe) and Output File (Append)
'''
cat input_file | ./multi_input.out >> output_file
'''

### With Input Pipe
'''
echo 1 2 3 | ./multi_input.out
'''

### Output to File (Overwrite)
'''
./hello_world.out > output_file
'''

### Output to File (Append)
'''
./hello_world.out >> output_file
'''

## With Input Pipe and Output File (Append)
'''
echo 1 2 3 | ./multi_input.out >> output_file
'''

Projects
-------

#### hello_world.cpp
g++ hello_world.cpp -o hello_world.out
./hello_world.out

#### file_input.cpp
g++ file_input.cpp -o file_input.out
cat input-int-3-file | ./file_input.out

#### multi_file.cpp
g++ multi_file.cpp -o multi_file.out
cat input-float-3-file | ./multi_file.out

