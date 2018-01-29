#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/powercoin.ico

convert ../../src/qt/res/icons/powercoin-16.png ../../src/qt/res/icons/powercoin-32.png ../../src/qt/res/icons/powercoin-48.png ${ICON_DST}
