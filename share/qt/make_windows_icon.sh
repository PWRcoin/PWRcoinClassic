#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/pwrcoin.ico

convert ../../src/qt/res/icons/pwrcoin-16.png ../../src/qt/res/icons/pwrcoin-32.png ../../src/qt/res/icons/pwrcoin-48.png ${ICON_DST}
