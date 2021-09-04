https://medium.com/code-85/algorithm-challenge-sum-of-two-3de11858799e

Given two lists of integers, is there a set of numbers — one from each list — whose sum is equal to a specified value?

cat ~/.conan/profiles/default-abi11\ 
[settings]\
os=Linux\
os_build=Linux\
arch=x86_64\
arch_build=x86_64\
compiler=gcc\
compiler.version=10\
compiler.libcxx=libstdc++11\
build_type=Release\
[options]\
[build_requires]\
[env]


include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)\
conan_basic_setup(TARGETS NO_OUTPUT_DIRS)

requires = ["range-v3/0.11.0", "fmt/8.0.0"]

conan new algo-challenge-sum-of-two/0.1\
conan install --profile default-abi11 ..


watch markdown with python - use grip\
https://stackoverflow.com/questions/9843609/view-markdown-files-offline
