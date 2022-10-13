#!/bin/sh

echo "Teste do exercício 1"

cd exercicio1
./build.sh
./int_to_string_test

echo "Teste do exercício 2"

cd ../exercicio2
./build.sh
./float_to_string_test

echo "Teste do exercício 3"

cd ../exercicio3
./build.sh
./mini_snprintf_test

echo "Teste do exercício 4"

cd ../exercicio4
./build.sh
./string_find_substitute_test

echo "Teste do exercício 5"

cd ../exercicio5
./build.sh
./test.sh text1 abcd XYZW

cd ..
