#!/bin/sh
find . -name "*.sh" | sed 's/^\(.\).\(.*\)...$/\2/'


