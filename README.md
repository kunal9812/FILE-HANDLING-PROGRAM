# FILE-HANDLING-PROGRAM

*COMPANY* : CODETECH IT SOLUTIONS

*NAME* : KUNAL YADAV

*INTERN ID* : CT04DN1692

*DOMAIN* : C LANGUAGE

*DURATION* : 4 WEEKS

*MENTOR* : NEELA SANTHOSH KUMAR

##This task aimed to help me understand the basics of file management in C programming—an essential concept in software development that enables efficient data storage and retrieval.

I used Visual Studio Code (VS Code) as my development environment because of its lightweight interface, integrated terminal, and wide support for C language extensions. The task was straightforward in its objective but required a good grasp of file I/O functions in C, such as fopen(), fprintf(), fscanf(), fgets(), and fclose().

The program I developed allowed users to perform multiple file operations. First, it checked whether a file already existed using a conditional if statement combined with fopen() in read mode. If the file didn’t exist, the program would create a new one. For writing, the program opened the file in write mode and accepted input from the user, storing the data in the file. To append additional data without overwriting existing content, the file was opened in append mode, and further data was added at the end of the file. Finally, the file was opened in read mode to display its content on the console, giving a complete demonstration of file handling capabilities.

During development, one of the main challenges I faced was ensuring that the program pointed to the correct file path. Initially, I encountered errors due to incorrect or non-existent file names. This was particularly frustrating as the errors were not always descriptive. I resolved this issue by including an if condition that checked the result of the fopen() function. If the file pointer was NULL, the program displayed a user-friendly error message, guiding the user to check the filename or path. This improved both the functionality and robustness of the program.

Through this task, I gained practical knowledge of how C handles files and improved my debugging skills by troubleshooting file-related issues. I also learned the importance of validating user input and handling errors gracefully. Furthermore, the experience strengthened my understanding of pointers and how they interact with file streams in C.

The outcome of the project was a fully functional, menu-driven C program that efficiently performs file creation, reading, writing, and appending operations. It not only fulfilled the internship requirements but also served as a strong foundation for more complex file handling and data processing projects in the future.

Overall, this task helped me gain hands-on experience in core C programming concepts and demonstrated my ability to independently complete a programming challenge from start to finish.
