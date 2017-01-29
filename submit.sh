#!/bin/bash

set -e

PASS_ALL=true
PASS="\e[4;32mPASS\e[0m"
FAIL="\e[4;31mFAIL\e[0m"

# Make sure all aseertions have not been modified
echo ""
echo -n "[check fot asserts]: "
#	% grep -wr 'assert(.*);' q*/main.cpp
#
#	q02_c_api/main.cpp:     assert(fp != NULL);
#	q02_c_api/main.cpp:     assert(strncmp(filename, "main.cpp", 8) == 0);
#	q03_foo/main.cpp:       assert(b == 6666);
#	q05_macro_function/main.cpp:    assert(result == 1);
#	q05_macro_function/main.cpp:    assert(b == FIVE && a == NINE);
#	q06_numbers/main.cpp:           assert(numbers[i-1] <= numbers[i]);
#	q06_numbers/main.cpp:           assert(false);
#	q07_pointer/main.cpp:           assert(array[i] == i);
#	q07_pointer/main.cpp:   assert(memcmp(array,copy, SIZE*sizeof(array[0])) == 0);
#	q08_static_global/main.cpp:             assert(false);
#	q09_struct/main.cpp:    assert(sizeof(a) == sizeof(b));
#	q11_dynamic_libray_1/main.cpp:  assert(x == -20170128 || y == -20170128);
#	q12_dynamic_libray_2/main.cpp:  assert(x == y && y == 12);
#	q12_dynamic_libray_2/main.cpp:  assert(b == a && a == 90);

result=$(grep -wr 'assert(.*);' q*/main.cpp | md5sum)
if [ "$result" == "2914e9b2a0d9b493ec53460726c050c9  -" ]; then
	echo -e $PASS
else
	echo -e $FAIL
	PASS_ALL=flase
fi



# Make sure every program can terminate successfully
echo ""
for question in q*
do
	echo -n "[$question]: "
	cd $question
	make clean -s 2> /dev/null
	make all -s 2> /dev/null
	set +e
	LD_LIBRARY_PATH=lib:lib1:lib2 ./a.out 24 < ../.input.txt > /dev/null 2> /dev/null
	result=$?
	set -e
	if [ $result -eq 0 ]; then
		echo -e $PASS
	else
		echo -e $FAIL
		PASS_ALL=flase
	fi
	cd ..
done

# Check whether git log is correct
echo ""
echo -n "[check master brach log]: "
#	% git log master --pretty=format:"%s"
#
#	Finish challenge
#	Start challenge
#	Delete all question source files, change README content to say hello
#	Add all question source files and README
#	Initial commit

result=$(git log master --pretty=format:"%s" | md5sum)
if [ "$result" == "dd79ae8c7b44b7988dfa18304411017b  -" ]; then
	echo -e $PASS
else
	echo -e $FAIL
	PASS_ALL=flase
fi

echo -n "[check git_practice brach log]: "
#	% git log git_practice --pretty=format:"%s"
#
#	Merge branch 'master' into git_practice
#	make a lot of conflicts before merging master branch into this branch
#	Finish challenge
#	Start challenge
#	Delete all question source files, change README content to say hello
#	Add all question source files and README
#	Initial commit

result=$(git log git_practice --pretty=format:"%s" | md5sum)
if [ "$result" == "4c9f9eae2ad02c8262a24729c2b83612  -" ]; then
	echo -e $PASS
else
	echo -e $FAIL
	PASS_ALL=flase
fi

echo ""
if $PASS_ALL; then
        echo -e "\e[100;33mCongratulates, you pass all the challenges!\e[0m"
fi
