# -*- coding: utf-8 -*-

import os


level = input("Directory Level: ")
level = level if level else "1"
course = input("Course Number: ")
dir_path = "Lv{}C{}".format(level, course)

main_fn = "main.cpp"
header_fn = dir_path + ".h"
cpp_fn = dir_path + ".cpp"

os.mkdir(dir_path)
os.chdir(dir_path)
print("Create directory in " + os.getcwd())


q_num = input("Your Number of Questions: ")

q_main_str = q_header_str = q_cpp_str = ""

for i in range(1, int(q_num)+1):
    q_main_str = "{}    {}Q{}();\n".format(q_main_str, dir_path, i)
    q_header_str = "{}int {}Q{}();\n\n".format(q_header_str, dir_path, i)
    q_cpp_str = q_cpp_str + "int %sQ%s() {\n//\n    return 0;\n}\n\n" %(dir_path, i)

print(q_main_str, q_header_str, q_cpp_str)

with open(main_fn, "w+") as main:
    main.write("""/*
    Include header files and invoke functions\n*/
#include \"%s\"\n
int main() {
%s}""" %(header_fn, q_main_str))

with open(header_fn, "w+") as header:
    header.write("""/*
    Declare functions in header file\n*/

%s""" %(q_header_str))


with open(cpp_fn, "w+") as cpp:
    cpp.write("""/*
    Implement functions in this file\n*/
#include <iostream> 
#include <iomanip>
using namespace std;

%s
""" %(q_cpp_str))
