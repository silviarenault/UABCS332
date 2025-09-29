#dirtrav.c
Traverses a directory while listing all of the directories and subdirectories/files within them.

#Description
Void traverse will take a given directory and store the opened directory into a pointer. If the directory does not exist it will print an error and exit.
A while loop will check that as long as the parent directory can be read it will be stored in struct dirent. It will also skip any directories that will change the parent directory (denoted with "." and "..").
If dirent is determined to be a directory a new string will be created, stating the current directory and the directory to go to ("directory/subdirectory").
The new string is recursed within traverse.
If a file is not determined to be a directory it is simply listed as a file and indented for easier reading.
Directory is closed.

Main function checks that all arguments are made in terminal. 
If less than two arguments are given will print an error stating which arguments are expected. 
If file was opened properly the second argument containing the directory will be used as the argument for traverse.

#Compiling
The following command line is used to compile the program: 
gcc dirtrav.c -o dirtrav

#Execution
The method of executing this program is dependent on the target directory.
If the goal is to use the current directory for the traversal, the following command line is used to execute the program:
./dirtrav .
If the goal is to use a different directory for the traversal, the following command line is used to execute the program:
./dirtrav ../<dirname>