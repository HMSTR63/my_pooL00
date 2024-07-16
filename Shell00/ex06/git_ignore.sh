#!/bin/bash

git ls-files --others --ignored --exclude-standard

#git ls-files: Lists files in the Git repository.
#--others: Shows other untracked files in the output.
#--ignored: Shows only ignored files in the output.
#--exclude-standard: Uses the standard Git exclude rules (i.e., it respects the .gitignore files and global Git settings).
