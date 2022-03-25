### Exercise 1:

- Create a file called z that returns "Z", followed by a new line, whenever the command
cat is used on it.



#input:

```
touch Z
cat>Z
z
(ctrl d)
cat Z
```

#output
```
?>cat z
Z
?>
```

### Exercise 2:

- Create a file called foo in your current directory.
- Figure out a way for the output to look like this (except for the “total 1” line):
- Don’t worry about what you’ve got instead of "XX".

#input :

```
touch foo 
chmod 455 foo 
ls -l
```
#output:

```
%> total 52
drwxr-xr-x 5 oumaima oumaima 4096 mars  24 22:16 Bureau
drwxr-xr-x 2 oumaima oumaima 4096 févr.  3 05:12 Documents
-r--r-xr-x 1 oumaima oumaima    0 mars  24 22:34 foo
drwxr-xr-x 2 oumaima oumaima 4096 oct.  24 21:50 Images
drwxr-xr-x 2 oumaima oumaima 4096 oct.  24 21:50 Modèles
drwxr-xr-x 3 oumaima oumaima 4096 févr.  3 06:24 Musique
drwxr-xr-x 2 oumaima oumaima 4096 oct.  24 21:50 Public
drwxrwxr-x 3 oumaima oumaima 4096 nov.  14 22:50 R
drwxrwxr-x 2 oumaima oumaima 4096 mars  15 10:47 td1S2
drwxr-xr-x 2 oumaima oumaima 4096 mars  22 01:19 Téléchargements
drwxrwxr-x 2 oumaima oumaima 4096 nov.   6 22:41 tp1
drwxrwxr-x 2 oumaima oumaima 4096 mars  18 00:01 TP1GIT
drwxr-xr-x 2 oumaima oumaima 4096 oct.  24 21:50 Vidéos
-rw-rw-r-- 1 oumaima oumaima    2 mars  24 22:27 Z
%>
```
### Exercise 3:

- Create the following files and directories. Do what’s necessary so that when you
use the ls -l command in your directory, the output will looks like this :
- Don’t worry about what you’ve got instead of "XX".

#input:

```
mkdir test0
touch test1
mkdir test2
touch test3 test5
touch test4
ln -s test0 test6
chmod 715 test0
chmod 714 test1
chmod 504 test2
chmod 404 test3 test5
chmod 614 test4 
function ls() { /usr/bin/ls "$@" | sed s/lrwxrwxrwx/lrwxr-xr-x/g; }
ls -l
```
#output:
```
%> ls -l
total 88
drwx--xr-x 2 oumaima oumaima 4096 mars  24 23:45 test0
-rwx--xr-- 1 oumaima oumaima    0 mars  24 23:45 test1
dr-x---r-- 2 oumaima oumaima 4096 mars  24 23:46 test2
-r-----r-- 1 oumaima oumaima    0 mars  24 23:46 test3
-rw---xr-- 1 oumaima oumaima    0 mars  24 23:46 test4
-r-----r-- 1 oumaima oumaima    0 mars  24 23:46 test5
lrwxr-xr-x 1 oumaima oumaima    6 mars  24 23:47 test6 -> test0

%>

```

### Exercise 4:

- Write a command line that will list all files and directories in your
current directory, separated by a comma, by order of creation date. Make sure
directories’ names are followed by a slash character

#input:
```
~/Bureau$ ls -tmp
```
#output:
```
c-programming/, TD111/, td111, DD12/, d2.md
```


### Exercise 5:

- Write a command line that searches for all file names that end with ".sh" (without
quotation marks) in the current directory and all its sub-directories. It should
display only the file names without the .sh.

#input:

```
find . -type f -name \*.txt | sed 's|.txt$||'

```
#output
```
./test
```



### Exercise 6:
 
 - Write a command line that counts and displays the number of regular files and
directories in the current directory and all its sub-directories. It should include ".",
the starting directory.


#input:
```
ind $PWD \( -type f -or -type d \) -name ".*" -prune -o -print | wc -l
```
#output:

```
43
```
