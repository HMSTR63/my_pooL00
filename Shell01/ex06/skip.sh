# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    skip.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/17 05:02:00 by sojammali         #+#    #+#              #
#    Updated: 2024/07/17 05:02:32 by sojammali        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#/bin/bash

ls -l | awk 'NR % 2 == 1'
