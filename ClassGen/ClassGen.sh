#!/bin/bash
# Autogen ClassName.hpp and ClassName.cpp with canonical functions
SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
hpp_file=$SCRIPT_DIR/template_files/ClassName.hpp
cpp_file=$SCRIPT_DIR/template_files/ClassName.cpp
Make_template=$SCRIPT_DIR/template_files/Make_template

echo "C++ class files generator (*.hpp + *.cpp) and Makefile"

read -p 'Enter ClassName(s) (separated by whitespace) : ' ClassList
read -p 'Enter binary name : ' BIN

`touch Makefile`
`sed "s/NAME=/NAME=$BIN/g" $Make_template > Makefile`
echo "Makefile generated"
# `sed -i "s#SRC=#SRC=./main.cpp $ClassList#g" Makefile`

for Class in $ClassList
do
#Check dans le current dir si des fichiers existent déjà avec ce nom
	if [ -e "$Class.hpp" ] || [ -e "$Class.cpp" ]
	then
		echo "Impossible: files $Class.*pp already exist"
	else
		#Créer les fichiers et les remplit avec le modèle adapté à la class
		`touch "$Class.hpp" "$Class.cpp"`
		echo "./$Class.cpp\\" >> Makefile
		#.HPP
		HEADER="$(echo $Class | tr 'a-z' 'A-Z')_HPP"
		`sed "s/ClassName/$Class/g" $hpp_file > $Class.hpp`
		`sed -i "s/CLASSNAME_HPP/$HEADER/g" $Class.hpp`
		
		#.CPP
		`sed "s/ClassName/$Class/g" $cpp_file > $Class.cpp`
		echo "$Class.hpp and $Class.cpp generated"
	fi
done
