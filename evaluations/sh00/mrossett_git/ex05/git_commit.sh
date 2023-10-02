#!/bin/sh

# Fetch the latest changes from the remote repository
git fetch

# Show the last 5 commits of this git repository
git log -n 5 --format="%H"
