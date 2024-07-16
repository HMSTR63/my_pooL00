# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    git_commit.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/16 05:43:01 by sojammali         #+#    #+#              #
#    Updated: 2024/07/16 05:47:11 by sojammali        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

git log -n 5 --pretty="%H"

#git log : Show commit logs

#-n :  Limit the number of commits to output.

#--pretty : Pretty-print the contents of the commit logs in a given format

#"%H" : placeholder displays the commit hash
