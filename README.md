# File_Manipulation

___More Functionality May be Added Later___

# CFile
CFile function is to create a file.
Has 3 paramters, (<b>(CONST CHAR*)</b> Name of file, <b>(CONST CHAR)</b> content you want to inhabit the file, <b>(BOOL)</b> if you want to close file after creation).
# DFile
Has 2 paramters, (<b>(CONST CHAR*)</b> Name of file, <b>(CONST CHAR)</b> keyword)
Keyword is mostly for in-case you might delete it by accident, so I made it two process to delete a file in-case of accidents.
# RFile
RFile function is to read a file and output to console.
Has 1 paramter, (<b>(CONST CHAR*)</b> Name of file you're trying to read from).
# UFile
Updates a files content.
Has 3 paramters, (<b>(CONST CHAR*)</b> Name of file, <b>(CONST CHAR)</b> new content you want to add, <b>(BOOL)</b> override the content if anything is inside) 
# EFile
Edits a files Location/Name
Has 3 parameters, (<b>(CONST CHAR*)</b> Name of file you're trying to edit, <b>(CONST CHAR*)</b> Name of file you're editing to, <b>(BOOL)</b> overrides a file if it already exists in directory)
