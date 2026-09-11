# CGREP
This code is a Command-Line Interface tool that is meant to work similar to grep. The user enters into the terminal a word or phrase that they are looking for as well as the file they are searching through. 
It currently uses a while loop that repeatedly goes through each line in a file until it cant read a line. As it receives each line, an if statement checks if the line contains the search term and find does not return std:string::npos. Then it prints the line that contains the search term and continues through the file.

# How to use
In the terminal, enter the following: ./cgrep (search) (file)

(search) is what you are searching for and (file) is the file you are searching in.

For example, ./cgrep plant data.txt will give me every sentence in the data.txt file that contains the word "plant" in it.
