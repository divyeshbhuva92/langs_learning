\\------------------------------------------------------------------------------------------------

The file can be updated using read or write operations.

The files can be handled using 3 classes :

1. `fstream` - for read & write.
2. `ifstream` - for only read.
3. `ofstream` - for only write.

\\------------------------------------------------------------------------------------------------

`file opening modes` : --->>

1. `ios::in` : --->>
   --- open file for reading mode only.

2. `ios::out` : --->>
   --- open file for writing mode only.
   --- if file is not found then new file will be created.

3. `ios::app` : --->>
   --- open file in append mode.
   --- it add new data at the end of the file.

4. `ios::ate` : --->> ate = at the end
   --- open file & move pointer position at the end of the file.

5. `ios::trunc` : --->>
   --- if file open for output operation & if file already exists, then it will delete contains of the file.

`getline` : --->>
--- getline is a standard library function that is used to read lines of text from input stream & store it as a string.
