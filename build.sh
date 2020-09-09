#/bin/bash
parentName="$(basename "$(dirname "${1}")")"
parentPath="$(cd $(dirname "$1") && pwd -P)"

g++ -Wall -Wextra -pedantic -std=c++11 -Og -Wshadow -Wformat=2 -Wfloat-equal -Wconversion -Wlogical-op -Wshift-overflow=2 -Wduplicated-cond -Wcast-qual -Wcast-align -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC -D_FORTIFY_SOURCE=2 -fsanitize=address -fsanitize=undefined -fno-sanitize-recover -fstack-protector -g ${parentPath}/${parentName}.cpp -o ${parentPath}/program