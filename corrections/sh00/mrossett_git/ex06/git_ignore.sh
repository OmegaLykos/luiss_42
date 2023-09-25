#!/bin/sh

# Command to list all the existing files ignored by this git repository
git ls-files --others --ignored --exclude-standard
