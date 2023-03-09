#!/bin/bash
find . -name '*.sh' | rev | cut -f 2- -d '.' | rev | sed 's#.*/##'
