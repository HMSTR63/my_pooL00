# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ex02.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/16 04:48:23 by sojammali         #+#    #+#              #
#    Updated: 2024/07/16 04:59:18 by sojammali        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#!/bin/bash

#------------------------------------------------------------------------------
mkdir test0 test2
touch test1 test3 test4

# Change file size.
fallocate -l 4 test1
fallocate -l 1 test3
fallocate -l 2 test4
#------------------------------------------------------------------------------
# Create a hardlink of test3 and test5 to increase the link count.
ln test3 test5
#------------------------------------------------------------------------------
#Create files, directories and the hardlink needed.
ln -s test0 test6
#------------------------------------------------------------------------------
touch -amt 202407131337 test0
touch -amt 202407131337 test1
touch -amt 202407131337 test2
touch -amt 202407131337 test3
touch -amt 202407131337 test4
touch -hamt 202407131337 test6

#------------------------------------------------------------------------------
chmod 715 test0
chmod 714 test1
chmod 504 test2
chmod 404 test3
chmod 641 test4
#change all attributs.
#------------------------------------------------------------------------------
tar -cpf exo2.tar *
tar -xpf exo2.tar
#archivate in a tar file.
#----------------
#-------------------------------------------------------------
