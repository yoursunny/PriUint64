#!/bin/bash
set -eo pipefail
cd "$( dirname "${BASH_SOURCE[0]}" )"/..

clang-format-11 -i -style=file src/*.h examples/*/*.ino
