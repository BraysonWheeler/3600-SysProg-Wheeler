Group Members:
* Logan Wheeler - interactive and batch mode, cd;
* James Wolf - exit, piping;
* Zachary Behn - myhistory, makefile, readme.md;

Design Overview: 

Coding is contained within a single file using parsing methods to remove and separate extraneous info like spaces and semicolons.
Commands are handled sequentially by line and semicolon where individual commands have unlimited arguments but may not process if too many are provided.
We use threads to protect the main shell from collapsing and to execute all shell commands to prevent the shell collapsing on a bad command.

Complete Specification: 

Any empty spaces between semicolons will not process because spaces have been removed and we separate the line into individual components by the semicolon,
so if there's nothing there, the shell will skip over it with no message.

Known Bugs or Problems:
* myhistory -e only works on simple commands

