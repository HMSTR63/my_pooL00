#!/bin/bash

tar -xf resources.tar.gz

patch a -o b < sw.diff

rm -rf resources.tar.gz a sw.diff
