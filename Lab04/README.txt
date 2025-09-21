##fconcat.c
Takes two text files and adds the content from the second fileto the end of the first file with out altering the second file.

##Description
Checks that all arguments are made in terminal and that files are accessible. 
If less than three arguments are given will print an error stating which arguments are expected. 
Additionally, if both of the files in the argument are the same file an error will be printed to avoid the program being asked to only read a file while simultaneously reading, appending, or creating it.
If file was opened properly the content from the second file will begin being added to the end of the first file until there is nothing more to add.

##Compiling
The following command line is used to compile the program: 
gcc fconcat.c -o fconcat

##Execution
The following command line is used to execut the program:
./fconcat <filename_one> <filename_two>